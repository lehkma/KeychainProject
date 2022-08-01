#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include <fstream>
#include <iostream>
#include <string>
#include <json/value.h>
#include <json/json.h>
#include "AddNewDataForm.h"

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: User^ user;
	public:
		MainForm(User^ usr)
		{
			//constructor code here: passing the object User
			user = usr;
			InitializeComponent();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelYourData;
	private: System::Windows::Forms::Label^ labelView;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::ComboBox^ comboBoxView;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btAddNewData;
	private: System::Windows::Forms::Button^ btOK;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ labelUsername;
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
			this->labelYourData = (gcnew System::Windows::Forms::Label());
			this->labelView = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btOK = (gcnew System::Windows::Forms::Button());
			this->comboBoxView = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btAddNewData = (gcnew System::Windows::Forms::Button());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelYourData
			// 
			this->labelYourData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelYourData->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelYourData->ForeColor = System::Drawing::SystemColors::Control;
			this->labelYourData->Location = System::Drawing::Point(12, 74);
			this->labelYourData->Name = L"labelYourData";
			this->labelYourData->Size = System::Drawing::Size(760, 58);
			this->labelYourData->TabIndex = 0;
			this->labelYourData->Text = L"Your Data";
			this->labelYourData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelView
			// 
			this->labelView->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->labelView->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelView->ForeColor = System::Drawing::SystemColors::Control;
			this->labelView->Location = System::Drawing::Point(3, 14);
			this->labelView->Name = L"labelView";
			this->labelView->Size = System::Drawing::Size(70, 23);
			this->labelView->TabIndex = 1;
			this->labelView->Text = L"View:";
			this->labelView->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
				159)));
			this->tableLayoutPanel1->Controls->Add(this->btOK, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelView, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->comboBoxView, 1, 0);
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
			this->btOK->Location = System::Drawing::Point(560, 3);
			this->btOK->Name = L"btOK";
			this->btOK->Size = System::Drawing::Size(154, 45);
			this->btOK->TabIndex = 5;
			this->btOK->Text = L"OK";
			this->btOK->UseVisualStyleBackColor = true;
			// 
			// comboBoxView
			// 
			this->comboBoxView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxView->BackColor = System::Drawing::SystemColors::Control;
			this->comboBoxView->DropDownHeight = 400;
			this->comboBoxView->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxView->FormattingEnabled = true;
			this->comboBoxView->IntegralHeight = false;
			this->comboBoxView->ItemHeight = 26;
			this->comboBoxView->Location = System::Drawing::Point(81, 8);
			this->comboBoxView->Name = L"comboBoxView";
			this->comboBoxView->Size = System::Drawing::Size(473, 34);
			this->comboBoxView->TabIndex = 2;
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
			this->tableLayoutPanel2->Location = System::Drawing::Point(36, 159);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50.49505F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 49.50495F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(723, 115);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->btAddNewData, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(717, 52);
			this->tableLayoutPanel3->TabIndex = 5;
			// 
			// btAddNewData
			// 
			this->btAddNewData->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btAddNewData->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAddNewData->Location = System::Drawing::Point(3, 3);
			this->btAddNewData->Name = L"btAddNewData";
			this->btAddNewData->Size = System::Drawing::Size(711, 46);
			this->btAddNewData->TabIndex = 4;
			this->btAddNewData->Text = L"+ Add New Data";
			this->btAddNewData->UseVisualStyleBackColor = true;
			this->btAddNewData->Click += gcnew System::EventHandler(this, &MainForm::btAddNewData_Click);
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
			this->labelUsername->TabIndex = 4;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 678);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->labelYourData);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"MainForm";
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//label on top is set to be the username of the logged in user
	labelUsername->Text = user->username;
}
private: System::Void btAddNewData_Click(System::Object^ sender, System::EventArgs^ e) {
	//displaying the form for adding new data
	//this->Hide();
	AddNewDataForm^ addForm = gcnew AddNewDataForm(user, this);
	addForm->ShowDialog();
}
private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	//get the username in std string format
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);

	//all saved categories will be loaded into the combobox
	ifstream ifile("Data/" + stringUser + ".json"); //reading data from a file
	Json::Value actualJson;
	Json::Reader reader;
	reader.parse(ifile, actualJson);

	comboBoxView->Items->Clear();
	int i = 0; //loading the data into combobox
	while (actualJson["content"][i][0]) {
		string stdDataString = actualJson["content"][i][0].asString();
		String^ newSystemString = gcnew String(stdDataString.c_str());
		comboBoxView->Items->Add(newSystemString);
		i += 1;
	}
}
};
}
