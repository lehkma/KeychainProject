#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include <iostream>
#include <fstream>
#include <string>
#include "MyFunctions.h"
#include <json/value.h>
#include <json/json.h>

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System;
	using namespace std;

	/// <summary>
	/// Summary for ProfileForm
	/// </summary>
	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	private:
		User^ user;
	public:
		ProfileForm(User^ usr)
		{
			user = usr;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ProfileForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelManageProfile;
	protected:

	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Button^ btSignOut;
	private: System::Windows::Forms::Button^ btChangePassword;
	private: System::Windows::Forms::Button^ btDeleteAccount;
	private: System::Windows::Forms::TableLayoutPanel^ tlpManageProfile;

	private: System::Windows::Forms::TableLayoutPanel^ tlpChangePassword;

	private: System::Windows::Forms::Button^ btCancel;
	private: System::Windows::Forms::Button^ btSave;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Label^ labelUser;

	private: System::Windows::Forms::TextBox^ tbNewPass;

	private: System::Windows::Forms::TextBox^ tbCurrPass;
	private: System::Windows::Forms::TextBox^ tbConPass;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelManageProfile = (gcnew System::Windows::Forms::Label());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->btSignOut = (gcnew System::Windows::Forms::Button());
			this->btChangePassword = (gcnew System::Windows::Forms::Button());
			this->btDeleteAccount = (gcnew System::Windows::Forms::Button());
			this->tlpManageProfile = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tlpChangePassword = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelUser = (gcnew System::Windows::Forms::Label());
			this->tbNewPass = (gcnew System::Windows::Forms::TextBox());
			this->tbCurrPass = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label = (gcnew System::Windows::Forms::Label());
			this->tbConPass = (gcnew System::Windows::Forms::TextBox());
			this->btSave = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->tlpManageProfile->SuspendLayout();
			this->tlpChangePassword->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelManageProfile
			// 
			this->labelManageProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelManageProfile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelManageProfile->ForeColor = System::Drawing::SystemColors::Control;
			this->labelManageProfile->Location = System::Drawing::Point(12, 74);
			this->labelManageProfile->Name = L"labelManageProfile";
			this->labelManageProfile->Size = System::Drawing::Size(535, 58);
			this->labelManageProfile->TabIndex = 1;
			this->labelManageProfile->Text = L"Manage Profile";
			this->labelManageProfile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUsername->Location = System::Drawing::Point(206, 26);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(319, 44);
			this->labelUsername->TabIndex = 5;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btSignOut
			// 
			this->btSignOut->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btSignOut->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSignOut->Location = System::Drawing::Point(3, 3);
			this->btSignOut->Name = L"btSignOut";
			this->btSignOut->Size = System::Drawing::Size(258, 45);
			this->btSignOut->TabIndex = 6;
			this->btSignOut->Text = L"Sign Out";
			this->btSignOut->UseVisualStyleBackColor = true;
			this->btSignOut->Click += gcnew System::EventHandler(this, &ProfileForm::btSignOut_Click);
			// 
			// btChangePassword
			// 
			this->btChangePassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btChangePassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btChangePassword->Location = System::Drawing::Point(3, 95);
			this->btChangePassword->Name = L"btChangePassword";
			this->btChangePassword->Size = System::Drawing::Size(258, 45);
			this->btChangePassword->TabIndex = 7;
			this->btChangePassword->Text = L"Change Password";
			this->btChangePassword->UseVisualStyleBackColor = true;
			this->btChangePassword->Click += gcnew System::EventHandler(this, &ProfileForm::btChangePassword_Click);
			// 
			// btDeleteAccount
			// 
			this->btDeleteAccount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btDeleteAccount->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDeleteAccount->Location = System::Drawing::Point(3, 187);
			this->btDeleteAccount->Name = L"btDeleteAccount";
			this->btDeleteAccount->Size = System::Drawing::Size(258, 45);
			this->btDeleteAccount->TabIndex = 8;
			this->btDeleteAccount->Text = L"Delete Account";
			this->btDeleteAccount->UseVisualStyleBackColor = true;
			// 
			// tlpManageProfile
			// 
			this->tlpManageProfile->ColumnCount = 1;
			this->tlpManageProfile->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tlpManageProfile->Controls->Add(this->btSignOut, 0, 0);
			this->tlpManageProfile->Controls->Add(this->btDeleteAccount, 0, 2);
			this->tlpManageProfile->Controls->Add(this->btChangePassword, 0, 1);
			this->tlpManageProfile->Location = System::Drawing::Point(147, 190);
			this->tlpManageProfile->Name = L"tlpManageProfile";
			this->tlpManageProfile->RowCount = 3;
			this->tlpManageProfile->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlpManageProfile->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlpManageProfile->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tlpManageProfile->Size = System::Drawing::Size(264, 278);
			this->tlpManageProfile->TabIndex = 9;
			// 
			// tlpChangePassword
			// 
			this->tlpChangePassword->ColumnCount = 2;
			this->tlpChangePassword->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				41.46825F)));
			this->tlpChangePassword->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				58.53175F)));
			this->tlpChangePassword->Controls->Add(this->labelUser, 1, 0);
			this->tlpChangePassword->Controls->Add(this->tbNewPass, 1, 2);
			this->tlpChangePassword->Controls->Add(this->tbCurrPass, 1, 1);
			this->tlpChangePassword->Controls->Add(this->label3, 0, 3);
			this->tlpChangePassword->Controls->Add(this->label2, 0, 2);
			this->tlpChangePassword->Controls->Add(this->label1, 0, 1);
			this->tlpChangePassword->Controls->Add(this->label, 0, 0);
			this->tlpChangePassword->Controls->Add(this->tbConPass, 1, 3);
			this->tlpChangePassword->Controls->Add(this->btSave, 1, 5);
			this->tlpChangePassword->Controls->Add(this->btCancel, 0, 5);
			this->tlpChangePassword->Location = System::Drawing::Point(27, 158);
			this->tlpChangePassword->Name = L"tlpChangePassword";
			this->tlpChangePassword->RowCount = 6;
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 5)));
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 61)));
			this->tlpChangePassword->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tlpChangePassword->Size = System::Drawing::Size(504, 301);
			this->tlpChangePassword->TabIndex = 10;
			// 
			// labelUser
			// 
			this->labelUser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->labelUser->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUser->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUser->Location = System::Drawing::Point(211, 10);
			this->labelUser->Name = L"labelUser";
			this->labelUser->Size = System::Drawing::Size(290, 36);
			this->labelUser->TabIndex = 15;
			this->labelUser->Text = L"username";
			this->labelUser->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbNewPass
			// 
			this->tbNewPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbNewPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbNewPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNewPass->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewPass->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbNewPass->Location = System::Drawing::Point(211, 124);
			this->tbNewPass->Name = L"tbNewPass";
			this->tbNewPass->PasswordChar = '*';
			this->tbNewPass->Size = System::Drawing::Size(290, 32);
			this->tbNewPass->TabIndex = 14;
			this->tbNewPass->WordWrap = false;
			// 
			// tbCurrPass
			// 
			this->tbCurrPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbCurrPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbCurrPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCurrPass->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCurrPass->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbCurrPass->Location = System::Drawing::Point(211, 68);
			this->tbCurrPass->Name = L"tbCurrPass";
			this->tbCurrPass->PasswordChar = '*';
			this->tbCurrPass->Size = System::Drawing::Size(290, 32);
			this->tbCurrPass->TabIndex = 13;
			this->tbCurrPass->WordWrap = false;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(3, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 36);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Confirm Password:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(3, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(202, 36);
			this->label2->TabIndex = 12;
			this->label2->Text = L"New Password:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(3, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 36);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Current Password:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label
			// 
			this->label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::SystemColors::Control;
			this->label->Location = System::Drawing::Point(3, 10);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(202, 36);
			this->label->TabIndex = 11;
			this->label->Text = L"Username:";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tbConPass
			// 
			this->tbConPass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbConPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbConPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConPass->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConPass->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbConPass->Location = System::Drawing::Point(211, 180);
			this->tbConPass->Name = L"tbConPass";
			this->tbConPass->PasswordChar = '*';
			this->tbConPass->Size = System::Drawing::Size(290, 32);
			this->tbConPass->TabIndex = 11;
			this->tbConPass->WordWrap = false;
			// 
			// btSave
			// 
			this->btSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btSave->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btSave->Location = System::Drawing::Point(301, 250);
			this->btSave->Name = L"btSave";
			this->btSave->Size = System::Drawing::Size(200, 48);
			this->btSave->TabIndex = 9;
			this->btSave->Text = L"Save";
			this->btSave->UseVisualStyleBackColor = true;
			this->btSave->Click += gcnew System::EventHandler(this, &ProfileForm::btSave_Click);
			// 
			// btCancel
			// 
			this->btCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCancel->Location = System::Drawing::Point(5, 250);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(200, 48);
			this->btCancel->TabIndex = 8;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			this->btCancel->Click += gcnew System::EventHandler(this, &ProfileForm::btCancel_Click);
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(559, 499);
			this->Controls->Add(this->tlpManageProfile);
			this->Controls->Add(this->tlpChangePassword);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelManageProfile);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"ProfileForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &ProfileForm::ProfileForm_Load);
			this->tlpManageProfile->ResumeLayout(false);
			this->tlpChangePassword->ResumeLayout(false);
			this->tlpChangePassword->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void ProfileForm_Load(System::Object^ sender, System::EventArgs^ e) {
	labelUsername->Text = user->username;
	labelUser->Text = user->username;
	tlpChangePassword->Visible = false;
	tlpManageProfile->Visible = true;
}
private: System::Void btChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {
	tlpChangePassword->Visible = true;
	tlpManageProfile->Visible = false;
}
private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	tlpChangePassword->Visible = false;
	tlpManageProfile->Visible = true;
	tbConPass->Text = "";
	tbNewPass->Text = "";
	tbCurrPass->Text = "";
}
private: System::Void btSave_Click(System::Object^ sender, System::EventArgs^ e) {
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUser->Text);
	string currPass = msclr::interop::marshal_as<std::string>(this->tbCurrPass->Text);
	string newPass = msclr::interop::marshal_as<std::string>(this->tbNewPass->Text);
	string conPass = msclr::interop::marshal_as<std::string>(this->tbConPass->Text);

	//empty check
	if (currPass.length() == 0 || newPass.length() == 0 || conPass.length() == 0) {
		MessageBox::Show("Please enter passwords to all textboxes", "Password is empty", MessageBoxButtons::OK);
		return;
	}

	ifstream infile("Data/" + stringUser + ".json");
	Json::Value actualJson;
	Json::Reader reader;
	reader.parse(infile, actualJson);
	infile.close();

	//get the saved details from the json file, close the file
	string savedPass = actualJson["login"]["password"].asString();
	
	//current password check
	if (savedPass != currPass) {
		MessageBox::Show("The current password is incorrect", "Incorrect password", MessageBoxButtons::OK);
		return;
	}

	//mismatching passwords check
	if (newPass != conPass) {
		MessageBox::Show("Please make sure your new passwords match", "Password mismatch", MessageBoxButtons::OK);
		return;
	}

	//saving the new password
	actualJson["login"]["password"] = newPass;

	//writing json data into a file
	ofstream outfile("Data/" + stringUser + ".json");
	Json::StyledWriter styledWriter;
	outfile << styledWriter.write(actualJson);
	outfile.close();

	btCancel_Click(sender, e);
	MessageBox::Show("You have successfully changed your password", "Password change successful", MessageBoxButtons::OK);
	return;
}
private: System::Void btSignOut_Click(System::Object^ sender, System::EventArgs^ e) {
	//set the flag, so that the FormClosed Events do not get triggered
	user->signedOut = true;
	Form^ lf;

	//copy all the open forms to a list
	List <Form^>^ myForms = gcnew List<Form^>();
	for each (Form ^ form in Application::OpenForms) {
		myForms->Add(form);
	}
	
	//close them all, except for the login form
	for each (Form ^ form in myForms) {
		if (form->Name != "LoginForm") {
			form->Close();
		}
		else {
			lf = form;
		}
	}

	//do not forget to reset the user data
	delete user;
	lf->Show();
}
};
}
