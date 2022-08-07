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
			this->btSignOut->Location = System::Drawing::Point(197, 191);
			this->btSignOut->Name = L"btSignOut";
			this->btSignOut->Size = System::Drawing::Size(164, 45);
			this->btSignOut->TabIndex = 6;
			this->btSignOut->Text = L"Sign Out";
			this->btSignOut->UseVisualStyleBackColor = true;
			// 
			// btChangePassword
			// 
			this->btChangePassword->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btChangePassword->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btChangePassword->Location = System::Drawing::Point(158, 277);
			this->btChangePassword->Name = L"btChangePassword";
			this->btChangePassword->Size = System::Drawing::Size(244, 45);
			this->btChangePassword->TabIndex = 7;
			this->btChangePassword->Text = L"Change Password";
			this->btChangePassword->UseVisualStyleBackColor = true;
			// 
			// btDeleteAccount
			// 
			this->btDeleteAccount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btDeleteAccount->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDeleteAccount->Location = System::Drawing::Point(173, 369);
			this->btDeleteAccount->Name = L"btDeleteAccount";
			this->btDeleteAccount->Size = System::Drawing::Size(217, 45);
			this->btDeleteAccount->TabIndex = 8;
			this->btDeleteAccount->Text = L"Delete Account";
			this->btDeleteAccount->UseVisualStyleBackColor = true;
			// 
			// ProfileForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(559, 499);
			this->Controls->Add(this->btDeleteAccount);
			this->Controls->Add(this->btChangePassword);
			this->Controls->Add(this->btSignOut);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelManageProfile);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ProfileForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}
