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
	private: System::Windows::Forms::Label^ labelCatName;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ tbCatName;
	private: System::Windows::Forms::Label^ labelParameters;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ toolTipBox;
	private: System::Windows::Forms::ToolTip^ toolTip1;

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
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CustomCatForm::typeid));
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelCreateCustomCat = (gcnew System::Windows::Forms::Label());
			this->btBack = (gcnew System::Windows::Forms::Button());
			this->labelCatName = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbCatName = (gcnew System::Windows::Forms::TextBox());
			this->labelParameters = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->toolTipBox = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toolTipBox))->BeginInit();
			this->SuspendLayout();
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
			// labelCatName
			// 
			this->labelCatName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->labelCatName->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCatName->ForeColor = System::Drawing::SystemColors::Control;
			this->labelCatName->Location = System::Drawing::Point(3, 0);
			this->labelCatName->Name = L"labelCatName";
			this->labelCatName->Size = System::Drawing::Size(176, 35);
			this->labelCatName->TabIndex = 9;
			this->labelCatName->Text = L"Category Name:";
			this->labelCatName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25.72614F)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(30, 155);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 62.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 37.5F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 177)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(723, 285);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				535)));
			this->tableLayoutPanel2->Controls->Add(this->tbCatName, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelCatName, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(717, 35);
			this->tableLayoutPanel2->TabIndex = 10;
			// 
			// tbCatName
			// 
			this->tbCatName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbCatName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbCatName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCatName->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCatName->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbCatName->Location = System::Drawing::Point(185, 3);
			this->tbCatName->Name = L"tbCatName";
			this->tbCatName->Size = System::Drawing::Size(529, 32);
			this->tbCatName->TabIndex = 10;
			this->tbCatName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbCatName->WordWrap = false;
			// 
			// labelParameters
			// 
			this->labelParameters->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->labelParameters->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelParameters->ForeColor = System::Drawing::SystemColors::Control;
			this->labelParameters->Location = System::Drawing::Point(3, 0);
			this->labelParameters->Name = L"labelParameters";
			this->labelParameters->Size = System::Drawing::Size(288, 36);
			this->labelParameters->TabIndex = 11;
			this->labelParameters->Text = L"Write Your Parameters Here:";
			this->labelParameters->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				41.00418F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				58.99582F)));
			this->tableLayoutPanel3->Controls->Add(this->labelParameters, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->toolTipBox, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 68);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(717, 36);
			this->tableLayoutPanel3->TabIndex = 12;
			// 
			// toolTipBox
			// 
			this->toolTipBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipBox.Image")));
			this->toolTipBox->Location = System::Drawing::Point(297, 3);
			this->toolTipBox->Name = L"toolTipBox";
			this->toolTipBox->Size = System::Drawing::Size(30, 30);
			this->toolTipBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->toolTipBox->TabIndex = 12;
			this->toolTipBox->TabStop = false;
			this->toolTip1->SetToolTip(this->toolTipBox, resources->GetString(L"toolTipBox.ToolTip"));
			// 
			// CustomCatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 629);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btBack);
			this->Controls->Add(this->labelCreateCustomCat);
			this->Controls->Add(this->labelUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"CustomCatForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CustomCatForm::CustomCatForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CustomCatForm::CustomCatForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toolTipBox))->EndInit();
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
