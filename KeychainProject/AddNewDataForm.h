#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include <fstream>
#include <iostream>
#include <string>
#include <json/value.h>
#include <json/json.h>
#include "CustomCatForm.h"

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for AddNewDataForm
	/// </summary>
	public ref class AddNewDataForm : public System::Windows::Forms::Form
	{
	private: User^ user;
	public:
		Form^ mainForm;
		AddNewDataForm(User^ usr, Form^ frm)
		{
			user = usr;
			mainForm = frm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewDataForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelAddNewData;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ btCreateCustomCat;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btOK;
	private: System::Windows::Forms::Label^ labelAdd;
	private: System::Windows::Forms::ComboBox^ comboBoxAdd;


	private: System::Windows::Forms::Label^ labelUsername;
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
			this->labelAddNewData = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btCreateCustomCat = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btOK = (gcnew System::Windows::Forms::Button());
			this->labelAdd = (gcnew System::Windows::Forms::Label());
			this->comboBoxAdd = (gcnew System::Windows::Forms::ComboBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelAddNewData
			// 
			this->labelAddNewData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelAddNewData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelAddNewData->ForeColor = System::Drawing::SystemColors::Control;
			this->labelAddNewData->Location = System::Drawing::Point(12, 74);
			this->labelAddNewData->Name = L"labelAddNewData";
			this->labelAddNewData->Size = System::Drawing::Size(760, 58);
			this->labelAddNewData->TabIndex = 1;
			this->labelAddNewData->Text = L"Add New Data";
			this->labelAddNewData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(30, 158);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.49505F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.50495F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(723, 115);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->btCreateCustomCat, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(717, 52);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// btCreateCustomCat
			// 
			this->btCreateCustomCat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btCreateCustomCat->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCreateCustomCat->Location = System::Drawing::Point(3, 3);
			this->btCreateCustomCat->Name = L"btCreateCustomCat";
			this->btCreateCustomCat->Size = System::Drawing::Size(711, 46);
			this->btCreateCustomCat->TabIndex = 4;
			this->btCreateCustomCat->Text = L"+ Create Custom Category";
			this->btCreateCustomCat->UseVisualStyleBackColor = true;
			this->btCreateCustomCat->Click += gcnew System::EventHandler(this, &AddNewDataForm::btCreateCustomCat_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				14.0511F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				85.94891F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				164)));
			this->tableLayoutPanel1->Controls->Add(this->btOK, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelAdd, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->comboBoxAdd, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 61);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(717, 51);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btOK
			// 
			this->btOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btOK->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btOK->Location = System::Drawing::Point(555, 3);
			this->btOK->Name = L"btOK";
			this->btOK->Size = System::Drawing::Size(159, 45);
			this->btOK->TabIndex = 5;
			this->btOK->Text = L"OK";
			this->btOK->UseVisualStyleBackColor = true;
			// 
			// labelAdd
			// 
			this->labelAdd->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelAdd->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelAdd->ForeColor = System::Drawing::SystemColors::Control;
			this->labelAdd->Location = System::Drawing::Point(3, 14);
			this->labelAdd->Name = L"labelAdd";
			this->labelAdd->Size = System::Drawing::Size(70, 23);
			this->labelAdd->TabIndex = 1;
			this->labelAdd->Text = L"Add:";
			this->labelAdd->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// comboBoxAdd
			// 
			this->comboBoxAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxAdd->BackColor = System::Drawing::SystemColors::Control;
			this->comboBoxAdd->DropDownHeight = 400;
			this->comboBoxAdd->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxAdd->FormattingEnabled = true;
			this->comboBoxAdd->IntegralHeight = false;
			this->comboBoxAdd->ItemHeight = 26;
			this->comboBoxAdd->Location = System::Drawing::Point(80, 8);
			this->comboBoxAdd->Name = L"comboBoxAdd";
			this->comboBoxAdd->Size = System::Drawing::Size(469, 34);
			this->comboBoxAdd->TabIndex = 2;
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUsername->Location = System::Drawing::Point(361, 26);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(319, 44);
			this->labelUsername->TabIndex = 5;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btBack
			// 
			this->btBack->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btBack->Location = System::Drawing::Point(30, 26);
			this->btBack->Name = L"btBack";
			this->btBack->Size = System::Drawing::Size(153, 45);
			this->btBack->TabIndex = 6;
			this->btBack->Text = L"Back";
			this->btBack->UseVisualStyleBackColor = true;
			this->btBack->Click += gcnew System::EventHandler(this, &AddNewDataForm::btBack_Click);
			// 
			// AddNewDataForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 306);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->labelAddNewData);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximumSize = System::Drawing::Size(800, 345);
			this->MinimumSize = System::Drawing::Size(800, 345);
			this->Name = L"AddNewDataForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &AddNewDataForm::AddNewDataForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &AddNewDataForm::AddNewDataForm_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void AddNewDataForm_Load(System::Object^ sender, System::EventArgs^ e) {
	labelUsername->Text = user->username;

	//get the username in std string format
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);

	//all saved categories will be loaded into the combobox
	ifstream ifile("Data/" + stringUser + ".json"); //reading data from a file
	Json::Value actualJson;
	Json::Reader reader;
	reader.parse(ifile, actualJson);

	int i = 0; //loading the data into combobox
	while (actualJson["content"][i][0]) {
		string stdDataString = actualJson["content"][i][0].asString();
		String^ newSystemString = gcnew String(stdDataString.c_str());
		comboBoxAdd->Items->Add(newSystemString);
		i += 1;
	}
}
private: System::Void btBack_Click(System::Object^ sender, System::EventArgs^ e) {
	//redirecting user to the previous main form 
	this->Close();
	//mainForm->Show();
}
private: System::Void AddNewDataForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	//if user closes this form, he is returned to the previous one
	//mainForm->Show();
}
private: System::Void btCreateCustomCat_Click(System::Object^ sender, System::EventArgs^ e) {
	//displaying the form for creating a custom category
	//this->Hide();
	CustomCatForm^ ccForm = gcnew CustomCatForm(user, this);
	ccForm->ShowDialog();
}
};
}
