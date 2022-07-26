#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "MyFunctions.h"
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <json/value.h>
#include <json/json.h>
#include "ProfileForm.h"
#include <locale>
#include <codecvt>

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
	public:
		User^ user;
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
	private: System::Windows::Forms::Label^ labelCatName;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ tbCatName;
	private: System::Windows::Forms::Label^ labelParameters;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::PictureBox^ toolTipBox;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::TextBox^ tbParameters;
	private: System::Windows::Forms::Button^ btCreate;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TextBox^ tbMainParameter;
	private: System::Windows::Forms::Label^ labelMainParameter;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ picProfile;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Label^ labelCreateCustomCat;
	private: System::Windows::Forms::Button^ btCancel;
	private: System::ComponentModel::IContainer^ components;
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
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->labelCatName = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbMainParameter = (gcnew System::Windows::Forms::TextBox());
			this->labelMainParameter = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tbCatName = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelParameters = (gcnew System::Windows::Forms::Label());
			this->toolTipBox = (gcnew System::Windows::Forms::PictureBox());
			this->tbParameters = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->btCreate = (gcnew System::Windows::Forms::Button());
			this->picProfile = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toolTipBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->BeginInit();
			this->SuspendLayout();
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUsername->Location = System::Drawing::Point(199, 26);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(498, 44);
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
			// btCancel
			// 
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCancel->Location = System::Drawing::Point(30, 512);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(153, 45);
			this->btCancel->TabIndex = 8;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			this->btCancel->Click += gcnew System::EventHandler(this, &CustomCatForm::btBack_Click);
			// 
			// labelCatName
			// 
			this->labelCatName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
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
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tbParameters, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(30, 155);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 51.54639F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 48.45361F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 44)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 194)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(723, 336);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				499)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				37)));
			this->tableLayoutPanel4->Controls->Add(this->tbMainParameter, 1, 0);
			this->tableLayoutPanel4->Controls->Add(this->labelMainParameter, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->pictureBox1, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 53);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(717, 35);
			this->tableLayoutPanel4->TabIndex = 13;
			// 
			// tbMainParameter
			// 
			this->tbMainParameter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbMainParameter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbMainParameter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMainParameter->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbMainParameter->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbMainParameter->Location = System::Drawing::Point(184, 3);
			this->tbMainParameter->MaxLength = 16;
			this->tbMainParameter->Name = L"tbMainParameter";
			this->tbMainParameter->Size = System::Drawing::Size(493, 32);
			this->tbMainParameter->TabIndex = 10;
			this->tbMainParameter->WordWrap = false;
			// 
			// labelMainParameter
			// 
			this->labelMainParameter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->labelMainParameter->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMainParameter->ForeColor = System::Drawing::SystemColors::Control;
			this->labelMainParameter->Location = System::Drawing::Point(3, 0);
			this->labelMainParameter->Name = L"labelMainParameter";
			this->labelMainParameter->Size = System::Drawing::Size(175, 35);
			this->labelMainParameter->TabIndex = 9;
			this->labelMainParameter->Text = L"Main Parameter:";
			this->labelMainParameter->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(683, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 29);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox1, resources->GetString(L"pictureBox1.ToolTip"));
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				499)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				36)));
			this->tableLayoutPanel2->Controls->Add(this->pictureBox2, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->tbCatName, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->labelCatName, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(717, 35);
			this->tableLayoutPanel2->TabIndex = 10;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(684, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 29);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox2, L"No spaces should be included in the name.\r\nThe length of the name should not \r\nex"
				L"ceed 16 characters.\r\n");
			// 
			// tbCatName
			// 
			this->tbCatName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbCatName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbCatName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCatName->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCatName->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbCatName->Location = System::Drawing::Point(185, 3);
			this->tbCatName->MaxLength = 16;
			this->tbCatName->Name = L"tbCatName";
			this->tbCatName->Size = System::Drawing::Size(493, 32);
			this->tbCatName->TabIndex = 10;
			this->tbCatName->WordWrap = false;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				94.83961F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				5.16039F)));
			this->tableLayoutPanel3->Controls->Add(this->labelParameters, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->toolTipBox, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 100);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(717, 37);
			this->tableLayoutPanel3->TabIndex = 12;
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
			this->labelParameters->Size = System::Drawing::Size(300, 37);
			this->labelParameters->TabIndex = 11;
			this->labelParameters->Text = L"Write Your Parameters Here:";
			this->labelParameters->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// toolTipBox
			// 
			this->toolTipBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->toolTipBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolTipBox.Image")));
			this->toolTipBox->Location = System::Drawing::Point(683, 3);
			this->toolTipBox->Name = L"toolTipBox";
			this->toolTipBox->Size = System::Drawing::Size(30, 31);
			this->toolTipBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->toolTipBox->TabIndex = 12;
			this->toolTipBox->TabStop = false;
			this->toolTip1->SetToolTip(this->toolTipBox, resources->GetString(L"toolTipBox.ToolTip"));
			// 
			// tbParameters
			// 
			this->tbParameters->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbParameters->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->tbParameters->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbParameters->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbParameters->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->tbParameters->Location = System::Drawing::Point(3, 144);
			this->tbParameters->Multiline = true;
			this->tbParameters->Name = L"tbParameters";
			this->tbParameters->Size = System::Drawing::Size(717, 189);
			this->tbParameters->TabIndex = 11;
			// 
			// btCreate
			// 
			this->btCreate->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCreate->Location = System::Drawing::Point(600, 512);
			this->btCreate->Name = L"btCreate";
			this->btCreate->Size = System::Drawing::Size(153, 45);
			this->btCreate->TabIndex = 11;
			this->btCreate->Text = L"Create";
			this->btCreate->UseVisualStyleBackColor = true;
			this->btCreate->Click += gcnew System::EventHandler(this, &CustomCatForm::btCreate_Click);
			// 
			// picProfile
			// 
			this->picProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->picProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picProfile.Image")));
			this->picProfile->Location = System::Drawing::Point(699, 26);
			this->picProfile->Name = L"picProfile";
			this->picProfile->Size = System::Drawing::Size(44, 44);
			this->picProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picProfile->TabIndex = 12;
			this->picProfile->TabStop = false;
			this->picProfile->Click += gcnew System::EventHandler(this, &CustomCatForm::picProfile_Click);
			// 
			// CustomCatForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 585);
			this->Controls->Add(this->picProfile);
			this->Controls->Add(this->btCreate);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->labelCreateCustomCat);
			this->Controls->Add(this->labelUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 624);
			this->MinimumSize = System::Drawing::Size(800, 624);
			this->Name = L"CustomCatForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CustomCatForm::CustomCatForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CustomCatForm::CustomCatForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toolTipBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->EndInit();
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
private: System::Void btCreate_Click(System::Object^ sender, System::EventArgs^ e) {
	//get the data from the textboxes to std strings
	string catName = sysStringToString(this->tbCatName->Text);
	string mainParameter = sysStringToString(this->tbMainParameter->Text);
	string parameters = sysStringToString(this->tbParameters->Text);

	//empty check
	if (catName.length() == 0 || parameters.length() == 0 || mainParameter.length() == 0) {
		MessageBox::Show("Please enter the name of your category and specify the parameters below", "Name or parameters are empty", MessageBoxButtons::OK);
		return;
	}

	//name duplicity check
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);
	Json::Value actualJson = json_parse(stringUser, user->password);

	int i = 0;
	while (actualJson["content"][i][0]) {
		if (actualJson["content"][i][0].asString() == catName) {
			MessageBox::Show("Category with this name already exists. Please change the name.", "Existing category name", MessageBoxButtons::OK);
			return;
		}
		i += 1;
	}
	
	if (catName == "login" || catName == "content") {
		MessageBox::Show("Category cannot have this name. Please change it.", "Invalid category", MessageBoxButtons::OK);
		return;
	}

	//load the name of the category and main parameter to json
	catName.erase(remove(catName.begin(), catName.end(), ' '), catName.end());
	mainParameter.erase(remove(mainParameter.begin(), mainParameter.end(), ' '), mainParameter.end());
	if (catName != "" && mainParameter != "") {
		actualJson["content"][i][0] = catName;
		actualJson["content"][i][1] = mainParameter;
	}
	else {
		MessageBox::Show("The name your category and the main parameter cannot consist of spaces only!", "Invalid input", MessageBoxButtons::OK);
		return;
	}
	
	//getting the parameters names from the textbox
	parameters.erase(remove(parameters.begin(), parameters.end(), ' '), parameters.end());
	parameters.erase(remove(parameters.begin(), parameters.end(), '\n'), parameters.end());
	parameters.erase(remove(parameters.begin(), parameters.end(), '\r'), parameters.end());
	size_t pos = 0;
	int j = 2;
	string name;
	while ((pos = parameters.find(";")) != string::npos) {
		name = parameters.substr(0, pos);
		if (name != "") {
			actualJson["content"][i][j] = name;
			j += 1;
		}
		parameters.erase(0, pos + 1);
	}
	if (j == 2 && parameters == "") {
		MessageBox::Show("Enter at least one parameter in the last text box", "Invalid input", MessageBoxButtons::OK);
		return;
	}
	if (parameters != "") {
		actualJson["content"][i][j] = parameters;
		j += 1;
	}
	
	//parameters duplicity check and parameters length check
	std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
	for (int m = 0; m < j; m++) {
		std::wstring wstr = converter.from_bytes(actualJson["content"][i][m].asString());
		if (wstr.length() > 16) {
			MessageBox::Show("The length of name of each parameter should not exceed 16 characters", "Parameter name is too long", MessageBoxButtons::OK);
			return;
		}
		for (int n = m + 1; n < j; n++) {
			if (actualJson["content"][i][m] == actualJson["content"][i][n]) {
				MessageBox::Show("The name of the category and its parameters must be all unique", "Duplicate parameters", MessageBoxButtons::OK);
				return;
			}
		}
	}

	//writing json data into the file
	json_write(stringUser, actualJson, user->password);
	
	this->Close();
	return;
}
private: System::Void picProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	ProfileForm^ profileForm = gcnew ProfileForm(user);
	profileForm->ShowDialog();
}
};
}
