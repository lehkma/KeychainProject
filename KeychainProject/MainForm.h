#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "MyFunctions.h"
#include <fstream>
#include <iostream>
#include <string>
#include <json/value.h>
#include <json/json.h>
#include "AddNewDataForm.h"
#include "ViewingForm.h"
#include "ProfileForm.h"

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
	private: 
		List <Label^>^ myLabels = gcnew List<Label^>();
		int noOfInputs = 0;
	public:
		User^ user;
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
	private: System::Windows::Forms::PictureBox^ picProfile;
	private: System::Windows::Forms::Label^ labelYourData;
	private: System::Windows::Forms::Label^ labelView;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::ComboBox^ comboBoxView;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btAddNewData;
	private: System::Windows::Forms::Button^ btOK;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ label;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->labelYourData = (gcnew System::Windows::Forms::Label());
			this->labelView = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btOK = (gcnew System::Windows::Forms::Button());
			this->comboBoxView = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btAddNewData = (gcnew System::Windows::Forms::Button());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->picProfile = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->BeginInit();
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
			this->labelView->Size = System::Drawing::Size(67, 23);
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
				181)));
			this->tableLayoutPanel1->Controls->Add(this->btOK, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->labelView, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->comboBoxView, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 61);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(707, 51);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// btOK
			// 
			this->btOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btOK->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btOK->Location = System::Drawing::Point(528, 3);
			this->btOK->Name = L"btOK";
			this->btOK->Size = System::Drawing::Size(176, 45);
			this->btOK->TabIndex = 1;
			this->btOK->Text = L"OK";
			this->btOK->UseVisualStyleBackColor = true;
			this->btOK->Click += gcnew System::EventHandler(this, &MainForm::btOK_Click);
			// 
			// comboBoxView
			// 
			this->comboBoxView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->comboBoxView->BackColor = System::Drawing::SystemColors::Control;
			this->comboBoxView->DropDownHeight = 200;
			this->comboBoxView->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxView->FormattingEnabled = true;
			this->comboBoxView->IntegralHeight = false;
			this->comboBoxView->ItemHeight = 26;
			this->comboBoxView->Location = System::Drawing::Point(76, 8);
			this->comboBoxView->Name = L"comboBoxView";
			this->comboBoxView->Size = System::Drawing::Size(446, 34);
			this->comboBoxView->TabIndex = 0;
			this->comboBoxView->Text = L"Select your category here";
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
			this->tableLayoutPanel2->Size = System::Drawing::Size(713, 115);
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
			this->tableLayoutPanel3->Size = System::Drawing::Size(707, 52);
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
			this->btAddNewData->Size = System::Drawing::Size(701, 46);
			this->btAddNewData->TabIndex = 0;
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
			this->labelUsername->Location = System::Drawing::Point(205, 26);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(492, 44);
			this->labelUsername->TabIndex = 0;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->flowLayoutPanel1->Controls->Add(this->label);
			this->flowLayoutPanel1->Location = System::Drawing::Point(36, 314);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(713, 235);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// label
			// 
			this->label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->label->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label->ForeColor = System::Drawing::SystemColors::Control;
			this->label->Location = System::Drawing::Point(3, 0);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(680, 36);
			this->label->TabIndex = 8;
			this->label->Text = L"Select the data you want to view above.";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// picProfile
			// 
			this->picProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->picProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picProfile.Image")));
			this->picProfile->Location = System::Drawing::Point(699, 26);
			this->picProfile->Name = L"picProfile";
			this->picProfile->Size = System::Drawing::Size(44, 44);
			this->picProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picProfile->TabIndex = 6;
			this->picProfile->TabStop = false;
			this->picProfile->Click += gcnew System::EventHandler(this, &MainForm::picProfile_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 585);
			this->Controls->Add(this->picProfile);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->labelYourData);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(800, 624);
			this->MinimumSize = System::Drawing::Size(800, 624);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Activated += gcnew System::EventHandler(this, &MainForm::MainForm_Activated);
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//label on top is set to be the username of the logged in user
	labelUsername->Text = user->username;
}
private: System::Void btAddNewData_Click(System::Object^ sender, System::EventArgs^ e) {
	//displaying the form for adding new data
	this->Hide();
	AddNewDataForm^ addForm = gcnew AddNewDataForm(user, this);
	addForm->ShowDialog();
}
private: System::Void MainForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	//don't activate form, when the user is signing out
	if (user->signedOut) {
		return;
	}

	//get the username in std string format
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);
	string cat = sysStringToString(this->comboBoxView->Text);

	//all saved categories will be loaded into the combobox
	Json::Value actualJson = json_parse(stringUser, user->password);

	bool currCatDeleted = true;
	comboBoxView->Items->Clear();
	int i = 0; //loading the data into combobox
	while (actualJson["content"][i][0]) {
		string stdDataString = actualJson["content"][i][0].asString();
		if (stdDataString == cat) {
			currCatDeleted = false;
		}
		String^ newSystemString = stdStrToSysStr(stdDataString);
		comboBoxView->Items->Add(newSystemString);
		i += 1;
	}

	if (currCatDeleted) {
		this->comboBoxView->Text = "Select your category here";
		this->flowLayoutPanel1->Controls->Clear();
		Label^ lbl = gcnew Label();
		lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
		lbl->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lbl->ForeColor = System::Drawing::SystemColors::Control;
		lbl->Size = System::Drawing::Size(680, 36);
		lbl->Text = L"Select the data you want to view above.";
		lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->Controls->Add(lbl);
		this->flowLayoutPanel1->Controls->Add(lbl);
	}

	//when form gets activated, the flowPanel gets refreshed
	if (this->comboBoxView->Text != "" && this->comboBoxView->Text != "Select your category here") {
		btOK_Click(sender, e);
	}
}
private: System::Void btOK_Click(System::Object^ sender, System::EventArgs^ e) {
	//get the name of selected category from the textbox
	string cat = sysStringToString(this->comboBoxView->Text);
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);
	user->selected_cat = this->comboBoxView->Text;

	//empty check
	if (cat == "" || cat == "Select your category here") {
		MessageBox::Show("To view data the category must be selected first", "Category not selected", MessageBoxButtons::OK);
		return;
	}

	//emptying the panel from other labels
	this->flowLayoutPanel1->Controls->Clear();
	myLabels->Clear();

	Json::Value actualJson = json_parse(stringUser, user->password);

	//finding the index of selected category in the content array
	int cat_index = find_index_in_content(actualJson, cat);

	//check if the selected category exists
	if (cat_index == -1) {
		MessageBox::Show("Select a listed category from the drop down.", "Invalid category", MessageBoxButtons::OK);
		this->comboBoxView->Text = "Select your category here";
		return;
	}

	//find the number of inputs from selected category
	noOfInputs = actualJson[cat].size();

	//displaying a label if no data is available
	if (noOfInputs == 0) {
		Label^ lbl = gcnew Label();
		lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
		lbl->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lbl->ForeColor = System::Drawing::SystemColors::Control;
		lbl->Size = System::Drawing::Size(680, 36);
		lbl->Text = "No data to view in selected category.";
		lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->Controls->Add(lbl);
		this->flowLayoutPanel1->Controls->Add(lbl);
		return;
	}

	//for each saved input adding a label into the flowpanel
	for (int i = 0; i < noOfInputs; i++) {
		Label^ lbl = gcnew Label();
		lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
		lbl->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		lbl->ForeColor = System::Drawing::SystemColors::Control;
		lbl->Size = System::Drawing::Size(680, 36);
		String^ text = stdStrToSysStr(actualJson[cat][i][actualJson["content"][cat_index][1].asString()].asString());
		lbl->Text = text;
		lbl->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		myLabels->Add(lbl);
	}
	for (int i = 0; i < noOfInputs; i++) {
		this->Controls->Add(myLabels[i]);
		this->flowLayoutPanel1->Controls->Add(myLabels[i]);
		myLabels[i]->Click += gcnew System::EventHandler(this, &MainForm::label_Click);
		myLabels[i]->MouseEnter += gcnew System::EventHandler(this, &MainForm::label_MouseEnter);
		myLabels[i]->MouseLeave += gcnew System::EventHandler(this, &MainForm::label_MouseLeave);
	}
}
private: System::Void label_Click(System::Object^ sender, System::EventArgs^ e) {
	//finding out which label has triggered the event, getting its index
	for (int i = 0; i < noOfInputs; i++) {
		if (sender == myLabels[i]) {
			user->cat_index = i;
		}
	}

	//create a form
	ViewingForm^ viewingForm = gcnew ViewingForm(user);
	viewingForm->ShowDialog();
}
private: System::Void picProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	ProfileForm^ profileForm = gcnew ProfileForm(user);
	profileForm->ShowDialog();
}
private: System::Void label_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	Label^ label = (Label^)sender;
	label->ForeColor = System::Drawing::SystemColors::ControlDark;
}
private: System::Void label_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	Label^ label = (Label^)sender;
	label->ForeColor = System::Drawing::SystemColors::Control;
}
private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	if (user->signedOut == false){
		Application::Exit();
	}
	else {
		return;
	}
}
};
}
