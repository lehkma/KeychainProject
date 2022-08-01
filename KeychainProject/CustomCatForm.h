#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include <fstream>
#include <iostream>
#include <string>
#include <json/value.h>
#include <json/json.h>

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for CustomCatForm
	/// </summary>
	public ref class CustomCatForm : public System::Windows::Forms::Form
	{
	private: User^ user;
	public:
		Form^ addNewDataForm;
		CustomCatForm(User^ usr, Form^ frm)
		{
			user = usr;
			addNewDataForm = frm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CustomCatForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Label^ labelCreateCustomCat;

	private: System::Windows::Forms::Button^ btBack;
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
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelCreateCustomCat = (gcnew System::Windows::Forms::Label());
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUsername->Location = System::Drawing::Point(360, 30);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(319, 23);
			this->labelUsername->TabIndex = 6;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// labelCreateCustomCat
			// 
			this->labelCreateCustomCat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelCreateCustomCat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCreateCustomCat->ForeColor = System::Drawing::SystemColors::Control;
			this->labelCreateCustomCat->Location = System::Drawing::Point(12, 74);
			this->labelCreateCustomCat->Name = L"labelCreateCustomCat";
			this->labelCreateCustomCat->Size = System::Drawing::Size(760, 58);
			this->labelCreateCustomCat->TabIndex = 7;
			this->labelCreateCustomCat->Text = L"Create Custom Category";
			this->labelCreateCustomCat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btBack
			// 
			this->btBack->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBack->Location = System::Drawing::Point(30, 26);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(153, 45);
			this->btBack->TabIndex = 8;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = true;
			this->btBack->Click += gcnew System::EventHandler(this, &CustomCatForm::btBack_Click);
			// 
			// CustomCatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 452);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->labelCreateCustomCat);
			this->Controls->Add(this->labelUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"CustomCatForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CustomCatForm::CustomCatForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CustomCatForm::CustomCatForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CustomCatForm_Load(System::Object^ sender, System::EventArgs^ e) {
		labelUsername->Text = user->username;
	}
private: System::Void btBack_Click(System::Object^ sender, System::EventArgs^ e) {
	//redirecting user to the previous form: the add new data form
	this->Close();
	//addNewDataForm->Show();
}
private: System::Void CustomCatForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	//if user closes this form, he is returned to the previous one
	//addNewDataForm->Show();
}
};
}
