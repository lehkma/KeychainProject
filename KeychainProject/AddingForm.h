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
	/// Summary for AddingForm
	/// </summary>
	public ref class AddingForm : public System::Windows::Forms::Form
	{
	private: User^ user;


	public:
		Form^ addNewDataForm;
		AddingForm(User^ usr, Form^ frm)
		{
			user = usr;
			addNewDataForm = frm;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btOK;
	private: System::Windows::Forms::Button^ btCancel;
	//followo
	public: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


	private: System::Windows::Forms::Label^ labelAddNewData;

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
			this->btOK = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelAddNewData = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btOK
			// 
			this->btOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btOK->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btOK->Location = System::Drawing::Point(599, 366);
			this->btOK->Name = L"btOK";
			this->btOK->Size = System::Drawing::Size(155, 45);
			this->btOK->TabIndex = 6;
			this->btOK->Text = L"OK";
			this->btOK->UseVisualStyleBackColor = true;
			// 
			// btCancel
			// 
			this->btCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCancel->Location = System::Drawing::Point(30, 366);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(155, 45);
			this->btCancel->TabIndex = 7;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			this->btCancel->Click += gcnew System::EventHandler(this, &AddingForm::btCancel_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.44928F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				68.55073F)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(30, 158);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(724, 43);
			this->tableLayoutPanel1->TabIndex = 8;
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
			this->labelAddNewData->Size = System::Drawing::Size(760, 62);
			this->labelAddNewData->TabIndex = 9;
			this->labelAddNewData->Text = L"Add New Data";
			this->labelAddNewData->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 457);
			this->Controls->Add(this->labelAddNewData);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"AddingForm";
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
