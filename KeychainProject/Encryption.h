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
	FileStream^ destination = nullptr;
	FileStream^ source = nullptr;
	CryptoStream^ cs = nullptr;

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

		destination = gcnew FileStream(destinationFilename, FileMode::OpenOrCreate, FileAccess::Write, FileShare::None);
		cs = gcnew CryptoStream(destination, AES->CreateEncryptor(), CryptoStreamMode::Write);
		source = gcnew FileStream("Data/data.json", FileMode::Open, FileAccess::Read, FileShare::Read);

		source->CopyTo(cs);
	}
	catch (Exception^ ex) {
	}
	finally {
		if (cs != nullptr) delete cs;
		if (destination != nullptr) delete destination;
		if (source != nullptr) delete source;
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
	FileStream^ destination = nullptr;
	FileStream^ source = nullptr;

	//set parameters
	AES->KeySize = 256;
	AES->BlockSize = 128;
	AES->Mode = CipherMode::CBC;
	AES->Padding = System::Security::Cryptography::PaddingMode::PKCS7;
	//generate pseudo-random key and init vector based on provided password
	auto key = gcnew Rfc2898DeriveBytes(passwordBytes, saltBytes, 1000);
	AES->Key = key->GetBytes(AES->KeySize / 8);
	AES->IV = key->GetBytes(AES->BlockSize / 8);

	destination = gcnew FileStream("Data/data.json", FileMode::OpenOrCreate, FileAccess::Write, FileShare::None);
	auto cs = gcnew CryptoStream(destination, AES->CreateDecryptor(), CryptoStreamMode::Write);
	source = gcnew FileStream(sourceFilename, FileMode::Open, FileAccess::Read, FileShare::Read);

	source->CopyTo(cs);

	cs->Close();
	destination->Close();
	source->Close();
	
	return;
}