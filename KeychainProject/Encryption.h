#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Text;
using namespace System::Security::Cryptography;

inline void encryptFile(String^ destinationFilename, String^ password) {

	//the salt bytes are used only to create longer passwords, that can be used for the AES 256-bit
	//they have no effect on security
	cli::array<unsigned char>^ passwordBytes = System::Text::Encoding::Encoding::UTF8->GetBytes(password);
	cli::array<unsigned char>^ saltBytes = gcnew cli::array<unsigned char>(8) { 1, 2, 3, 4, 5, 6, 7, 8 };

	RijndaelManaged^ AES = gcnew RijndaelManaged();

	try {
		//set parameters
		AES->KeySize = 256;
		AES->BlockSize = 128;
		AES->Mode = CipherMode::CBC;
		AES->Padding = System::Security::Cryptography::PaddingMode::PKCS7;
		//generate pseudo-random key and init vector based on provided password
		auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
		AES->Key = key->GetBytes(AES->KeySize / 8);
		AES->IV = key->GetBytes(AES->BlockSize / 8);

		FileStream^ destination = gcnew FileStream(destinationFilename, FileMode::OpenOrCreate, FileAccess::Write, FileShare::None);
		auto cs = gcnew CryptoStream(destination, AES->CreateEncryptor(), CryptoStreamMode::Write);
		FileStream^ source = gcnew FileStream("Data/data.json", FileMode::Open, FileAccess::Read, FileShare::Read);

		try {
			source->CopyTo(cs);
		}
		finally {
			if (cs != nullptr) delete cs;
			if (destination != nullptr) delete destination;
			if (source != nullptr) delete source;
		}
	}
	finally {
		if (AES != nullptr) delete AES;
	}
	return;
}

inline void decryptFile(String^ sourceFilename, String^ password) {

	//the salt bytes are used only to create longer passwords, that can be used for the AES 256-bit
	//they have no effect on security
	cli::array<unsigned char>^ passwordBytes = System::Text::Encoding::Encoding::UTF8->GetBytes(password);
	cli::array<unsigned char>^ saltBytes = gcnew cli::array<unsigned char>(8) { 1, 2, 3, 4, 5, 6, 7, 8 };

	RijndaelManaged^ AES = gcnew RijndaelManaged();

	try {
		//set parameters
		AES->KeySize = 256;
		AES->BlockSize = 128;
		AES->Mode = CipherMode::CBC;
		AES->Padding = System::Security::Cryptography::PaddingMode::PKCS7;
		//generate pseudo-random key and init vector based on provided password
		auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
		AES->Key = key->GetBytes(AES->KeySize / 8);
		AES->IV = key->GetBytes(AES->BlockSize / 8);

		FileStream^ destination = gcnew FileStream("Data/data.json", FileMode::OpenOrCreate, FileAccess::Write, FileShare::None);
		auto cs = gcnew CryptoStream(destination, AES->CreateDecryptor(), CryptoStreamMode::Write);
		FileStream^ source = gcnew FileStream(sourceFilename, FileMode::Open, FileAccess::Read, FileShare::Read);

		try {
			source->CopyTo(cs);
		}
		finally {
			if (cs != nullptr) delete cs;
			if (destination != nullptr) delete destination;
			if (source != nullptr) delete source;
		}
	}
	finally {
		if (AES != nullptr) delete AES;
	}
	return;
}

inline cli::array<unsigned char>^ AES_Encrypt(cli::array<unsigned char>^ bytesToBeEncrypted, cli::array<unsigned char>^ passwordBytes) {
	//init the variable to return
	cli::array<unsigned char>^ encryptedBytes = nullptr;

	//the salt bytes are used only to create longer passwords, that can be used for the AES
	//they have no effect on security
	cli::array<unsigned char>^ saltBytes = gcnew cli::array<unsigned char>(8) { 1, 2, 3, 4, 5, 6, 7, 8 };

	MemoryStream^ ms = gcnew MemoryStream();
	RijndaelManaged^ AES = gcnew RijndaelManaged();

	try {
		try {
			//set parameters
			AES->KeySize = 256;
			AES->BlockSize = 128;
			AES->Mode = CipherMode::CBC;
			AES->Padding = System::Security::Cryptography::PaddingMode::PKCS7;
			//generate pseudo-random key and init vector based on provided password
			auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
			AES->Key = key->GetBytes(AES->KeySize / 8);
			AES->IV = key->GetBytes(AES->BlockSize / 8);

			//create encryptor
			auto cs = gcnew CryptoStream(ms, AES->CreateEncryptor(), CryptoStreamMode::Write);

			try {
				cs->Write(bytesToBeEncrypted, 0, bytesToBeEncrypted->Length);
				cs->Close();
			}
			finally {
				if (cs != nullptr) delete cs;
			}

			encryptedBytes = ms->ToArray();
		}
		finally {
			if (AES != nullptr) delete AES;
		}
	}
	finally {
		if (ms != nullptr) delete ms;
	}

	return encryptedBytes;
}

inline cli::array<unsigned char>^ AES_Decrypt(cli::array<unsigned char>^ bytesToBeDecrypted, cli::array<unsigned char>^ passwordBytes) {
	//init the variable to return
	cli::array<unsigned char>^ decryptedBytes = nullptr;

	//the salt bytes are used only to create longer passwords, that can be used for the AES 256-bit
	//they have no effect on security
	cli::array<unsigned char>^ saltBytes = gcnew cli::array<unsigned char>(8) { 1, 2, 3, 4, 5, 6, 7, 8 };

	MemoryStream^ ms = gcnew MemoryStream();
	RijndaelManaged^ AES = gcnew RijndaelManaged();

	try {
		try {
			//set parameters
			AES->KeySize = 256;
			AES->BlockSize = 128;
			AES->Mode = CipherMode::CBC;
			AES->Padding = System::Security::Cryptography::PaddingMode::PKCS7;
			//generate pseudo-random key and init vector based on provided password
			auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
			AES->Key = key->GetBytes(AES->KeySize / 8);
			AES->IV = key->GetBytes(AES->BlockSize / 8);

			//create decryptor
			auto cs = gcnew CryptoStream(ms, AES->CreateDecryptor(), CryptoStreamMode::Write);

			try {
				cs->Write(bytesToBeDecrypted, 0, bytesToBeDecrypted->Length);
				cs->Close();
			}
			finally {
				if (cs != nullptr) delete cs;
			}

			decryptedBytes = ms->ToArray();
		}
		finally {
			if (AES != nullptr) delete AES;
		}
	}
	finally {
		if (ms != nullptr) delete ms;
	}

	return decryptedBytes;
}

inline System::String^ EncryptText(System::String^ input, System::String^ password) {
	//get the bytes of the input and the password
	cli::array<unsigned char>^ bytesToBeEncrypted = System::Text::Encoding::UTF8->GetBytes(input);
	cli::array<unsigned char>^ passwordBytes = System::Text::Encoding::UTF8->GetBytes(password);

	//hash the password with SHA256 -- that is going to be our key for AES 256-bit encryption
	passwordBytes = SHA256::Create()->ComputeHash(passwordBytes);

	//encrypt the bytes of input
	cli::array<unsigned char>^ bytesEncrypted = AES_Encrypt(bytesToBeEncrypted, passwordBytes);

	//convert the result back
	System::String^ result = Convert::ToBase64String(bytesEncrypted);

	return result;
}
inline System::String^ DecryptText(System::String^ input, System::String^ password) {
	//get the bytes of the input and the password
	cli::array<unsigned char>^ bytesToBeDecrypted = Convert::FromBase64String(input);
	cli::array<unsigned char>^ passwordBytes = System::Text::Encoding::Encoding::UTF8->GetBytes(password);

	//hash the password with SHA256 -- that is going to be our key for  AES 256-bit decryption
	passwordBytes = SHA256::Create()->ComputeHash(passwordBytes);

	//decrypt the bytes of input
	cli::array<unsigned char>^ bytesDecrypted = AES_Decrypt(bytesToBeDecrypted, passwordBytes);

	//convert the result back
	System::String^ result = System::Text::Encoding::Encoding::UTF8->GetString(bytesDecrypted);

	return result;
}