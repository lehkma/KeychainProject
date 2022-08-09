#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include <iostream>
#include <fstream>
#include <string>
#include "MyFunctions.h"
#include <json/value.h>
#include <json/json.h>
#include "MainForm.h"

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		bool signedOut = false;
		LoginForm(void)
		{
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelKeychain;
	protected:

	protected:

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btCreate;
	private: System::Windows::Forms::Button^ btLogin;
	private: System::Windows::Forms::TextBox^ tbNewUsername;

	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ labelCreate;
	private: System::Windows::Forms::Label^ labelWelcome;

	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ labelUsername;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ labelPassword;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

	private: System::Windows::Forms::TextBox^ tbNewPassword;

	private: System::Windows::Forms::Label^ labelConfirmPassword;

	private: System::Windows::Forms::Label^ labelNewPassword;

	private: System::Windows::Forms::Label^ labelNewUsername;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;

	protected:

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
			this->labelKeychain = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btCreate = (gcnew System::Windows::Forms::Button());
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->tbNewUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelCreate = (gcnew System::Windows::Forms::Label());
			this->labelWelcome = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbNewPassword = (gcnew System::Windows::Forms::TextBox());
			this->labelConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->labelNewUsername = (gcnew System::Windows::Forms::Label());
			this->labelNewPassword = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelKeychain
			// 
			this->labelKeychain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelKeychain->AutoSize = true;
			this->labelKeychain->Font = (gcnew System::Drawing::Font(L"Rubik", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelKeychain->ForeColor = System::Drawing::SystemColors::Control;
			this->labelKeychain->Location = System::Drawing::Point(3, 0);
			this->labelKeychain->Name = L"labelKeychain";
			this->labelKeychain->Size = System::Drawing::Size(914, 54);
			this->labelKeychain->TabIndex = 0;
			this->labelKeychain->Text = L"KeyChain";
			this->labelKeychain->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->labelKeychain, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(24, 37);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(920, 59);
			this->tableLayoutPanel2->TabIndex = 5;
			// 
			// btCreate
			// 
			this->btCreate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btCreate->BackColor = System::Drawing::SystemColors::Control;
			this->btCreate->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCreate->Location = System::Drawing::Point(680, 218);
			this->btCreate->Name = L"btCreate";
			this->btCreate->Size = System::Drawing::Size(234, 48);
			this->btCreate->TabIndex = 9;
			this->btCreate->Text = L"Create";
			this->btCreate->UseVisualStyleBackColor = false;
			this->btCreate->Click += gcnew System::EventHandler(this, &LoginForm::btCreate_Click);
			// 
			// btLogin
			// 
			this->btLogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btLogin->BackColor = System::Drawing::SystemColors::Control;
			this->btLogin->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btLogin->Location = System::Drawing::Point(141, 218);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(234, 48);
			this->btLogin->TabIndex = 8;
			this->btLogin->Text = L"Log in";
			this->btLogin->UseVisualStyleBackColor = false;
			this->btLogin->Click += gcnew System::EventHandler(this, &LoginForm::btLogin_Click);
			// 
			// tbNewUsername
			// 
			this->tbNewUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbNewUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbNewUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNewUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewUsername->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbNewUsername->Location = System::Drawing::Point(239, 3);
			this->tbNewUsername->Name = L"tbNewUsername";
			this->tbNewUsername->Size = System::Drawing::Size(236, 32);
			this->tbNewUsername->TabIndex = 4;
			this->tbNewUsername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbNewUsername->WordWrap = false;
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbPassword->Location = System::Drawing::Point(147, 43);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(222, 32);
			this->tbPassword->TabIndex = 3;
			this->tbPassword->Text = L"pes";
			this->tbPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbPassword->WordWrap = false;
			// 
			// labelCreate
			// 
			this->labelCreate->AutoSize = true;
			this->labelCreate->Font = (gcnew System::Drawing::Font(L"Rubik", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCreate->ForeColor = System::Drawing::SystemColors::Control;
			this->labelCreate->Location = System::Drawing::Point(436, 0);
			this->labelCreate->Name = L"labelCreate";
			this->labelCreate->Size = System::Drawing::Size(209, 34);
			this->labelCreate->TabIndex = 2;
			this->labelCreate->Text = L"Create Account";
			// 
			// labelWelcome
			// 
			this->labelWelcome->AutoSize = true;
			this->labelWelcome->Font = (gcnew System::Drawing::Font(L"Rubik", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelWelcome->ForeColor = System::Drawing::SystemColors::Control;
			this->labelWelcome->Location = System::Drawing::Point(3, 0);
			this->labelWelcome->Name = L"labelWelcome";
			this->labelWelcome->Size = System::Drawing::Size(203, 34);
			this->labelWelcome->TabIndex = 1;
			this->labelWelcome->Text = L"Welcome Back,";
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbUsername->Location = System::Drawing::Point(147, 3);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(222, 32);
			this->tbUsername->TabIndex = 5;
			this->tbUsername->Text = L"koc";
			this->tbUsername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbUsername->WordWrap = false;
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelUsername->AutoSize = true;
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUsername->Location = System::Drawing::Point(3, 7);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(119, 26);
			this->labelUsername->TabIndex = 10;
			this->labelUsername->Text = L"Username:";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.95705F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.04295F)));
			this->tableLayoutPanel3->Controls->Add(this->labelPassword, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->labelUsername, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->tbPassword, 1, 1);
			this->tableLayoutPanel3->Controls->Add(this->tbUsername, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 56);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 38)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(372, 78);
			this->tableLayoutPanel3->TabIndex = 11;
			// 
			// labelPassword
			// 
			this->labelPassword->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelPassword->AutoSize = true;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPassword->ForeColor = System::Drawing::SystemColors::Control;
			this->labelPassword->Location = System::Drawing::Point(3, 46);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(113, 26);
			this->labelPassword->TabIndex = 11;
			this->labelPassword->Text = L"Password:";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				49.5122F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50.4878F)));
			this->tableLayoutPanel1->Controls->Add(this->tbConfirmPassword, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->tbNewPassword, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->labelConfirmPassword, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->labelNewUsername, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelNewPassword, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tbNewUsername, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(436, 56);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 43)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(478, 123);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbConfirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbConfirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPassword->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbConfirmPassword->Location = System::Drawing::Point(239, 83);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(236, 32);
			this->tbConfirmPassword->TabIndex = 15;
			this->tbConfirmPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbConfirmPassword->WordWrap = false;
			// 
			// tbNewPassword
			// 
			this->tbNewPassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbNewPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbNewPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbNewPassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbNewPassword->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbNewPassword->Location = System::Drawing::Point(239, 43);
			this->tbNewPassword->Name = L"tbNewPassword";
			this->tbNewPassword->PasswordChar = '*';
			this->tbNewPassword->Size = System::Drawing::Size(236, 32);
			this->tbNewPassword->TabIndex = 14;
			this->tbNewPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbNewPassword->WordWrap = false;
			// 
			// labelConfirmPassword
			// 
			this->labelConfirmPassword->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelConfirmPassword->AutoSize = true;
			this->labelConfirmPassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelConfirmPassword->ForeColor = System::Drawing::SystemColors::Control;
			this->labelConfirmPassword->Location = System::Drawing::Point(3, 88);
			this->labelConfirmPassword->Name = L"labelConfirmPassword";
			this->labelConfirmPassword->Size = System::Drawing::Size(195, 26);
			this->labelConfirmPassword->TabIndex = 13;
			this->labelConfirmPassword->Text = L"Confirm Password:";
			// 
			// labelNewUsername
			// 
			this->labelNewUsername->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelNewUsername->AutoSize = true;
			this->labelNewUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNewUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelNewUsername->Location = System::Drawing::Point(3, 7);
			this->labelNewUsername->Name = L"labelNewUsername";
			this->labelNewUsername->Size = System::Drawing::Size(119, 26);
			this->labelNewUsername->TabIndex = 11;
			this->labelNewUsername->Text = L"Username:";
			// 
			// labelNewPassword
			// 
			this->labelNewPassword->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelNewPassword->AutoSize = true;
			this->labelNewPassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNewPassword->ForeColor = System::Drawing::SystemColors::Control;
			this->labelNewPassword->Location = System::Drawing::Point(3, 47);
			this->labelNewPassword->Name = L"labelNewPassword";
			this->labelNewPassword->Size = System::Drawing::Size(113, 26);
			this->labelNewPassword->TabIndex = 12;
			this->labelNewPassword->Text = L"Password:";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				87.32057F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				12.67943F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				483)));
			this->tableLayoutPanel4->Controls->Add(this->labelWelcome, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->btLogin, 0, 2);
			this->tableLayoutPanel4->Controls->Add(this->labelCreate, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel1, 2, 1);
			this->tableLayoutPanel4->Controls->Add(this->btCreate, 2, 2);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel3, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(24, 122);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 3;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.37313F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 74.62687F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 58)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(917, 269);
			this->tableLayoutPanel4->TabIndex = 13;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(968, 436);
			this->Controls->Add(this->tableLayoutPanel4);
			this->Controls->Add(this->tableLayoutPanel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(984, 475);
			this->MinimumSize = System::Drawing::Size(984, 475);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

public: User^ usr = nullptr;

private: System::Void btLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	//getting data from the login textboxes + init
	string user = msclr::interop::marshal_as<std::string>(this->tbUsername->Text);
	string pass = msclr::interop::marshal_as<std::string>(this->tbPassword->Text);
	string savedUser, savedPass;

	//empty check
	if (user.length() == 0 || pass.length() == 0) {
		MessageBox::Show("Please enter your username and password", "Username or password is empty", MessageBoxButtons::OK);
		return;
	}

	//if the user exists, check his password
	if (exists_test("Data/" + user + ".json")) {
		//open a json file and create the json object
		ifstream infile("Data/" + user + ".json");
		Json::Value actualJson;
		Json::Reader reader;
		reader.parse(infile, actualJson);

		//get the saved details from the json file, close the file
		savedUser = actualJson["login"]["username"].asString();
		savedPass = actualJson["login"]["password"].asString();
		infile.close();

		//compare the saved details with the ones provided by the user
		if (user == savedUser && pass == savedPass) {
			//login successful, create the object of logged in user
			usr = gcnew User;
			usr->username = this->tbUsername->Text;
			usr->password = this->tbPassword->Text;
			
			//close the login form
			MainForm^ mainForm = gcnew MainForm(usr, this, signedOut);
			mainForm->Show();
			this->Hide();
		}
		else {
			//incorrect password check
			MessageBox::Show("Incorrect username or password", "Error", MessageBoxButtons::OK);
			return;
		}
	}
	else {
		//non-existing user check
		MessageBox::Show("Incorrect username or password", "Error", MessageBoxButtons::OK);
		return;
	}
}
private: System::Void btCreate_Click(System::Object^ sender, System::EventArgs^ e) {
	//getting data from the sign up textboxes
	string newUser = msclr::interop::marshal_as<std::string>(this->tbNewUsername->Text);
	string newPass = msclr::interop::marshal_as<std::string>(this->tbNewPassword->Text);
	string newPassCon = msclr::interop::marshal_as<std::string>(this->tbConfirmPassword->Text);

	//empty check
	if (newUser.length() == 0 || newPass.length() == 0 || newPassCon.length() == 0) {
		MessageBox::Show("Please enter your username and password", "Username or password is empty", MessageBoxButtons::OK);
		return;
	}

	//mismatching passwords check
	if (newPass != newPassCon) {
		MessageBox::Show("Please make sure your passwords match", "Password mismatch", MessageBoxButtons::OK);
		return;
	}
	else {
		//taken username check
		if (exists_test("Data/" + newUser + ".json")) {
			MessageBox::Show("This username is already taken. Please choose another one.", "Invalid username", MessageBoxButtons::OK);
			return;
		}
		else {
			//creating json file and writing in the login details
			Json::Value actualJson;
			actualJson["login"]["username"] = newUser;
			actualJson["login"]["password"] = newPass;

			//adding default categories to the json file
			Json::Value def_cat;
			Json::Reader reader;
			string content = "[[\"Card\", \"Description\", \"Expiry_date\", \"Number\", \"CVV\", \"Type\"], [\"Web_login\", \"Website\", \"Username\",\"Password\"], [\"Phone\", \"Description\", \"Number\", \"PIN\", \"Operator\"]]";
			reader.parse(content.c_str(), def_cat);
			actualJson["content"] = def_cat;

			//writing json data into a file
			ofstream outfile("Data/" + newUser + ".json"); 
			Json::StyledWriter styledWriter;
			outfile << styledWriter.write(actualJson);
			outfile.close();

			//emptying the textboxes after successful sign up
			this->tbNewUsername->Text = "";
			this->tbNewPassword->Text = "";
			this->tbConfirmPassword->Text = "";
			MessageBox::Show("You have succesfully signed up. Log in to continue.", "Sign up successful", MessageBoxButtons::OK);
			return;
		}
	}
}
};
}
