#pragma once
#include <msclr\marshal_cppstd.h>
#include "User.h"
#include "MyFunctions.h"
#include <fstream>
#include <iostream>
#include <string>
#include <json/value.h>
#include <json/json.h>
#include "ProfileForm.h"

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for AddingForm
	/// </summary>
	public ref class AddingForm : public System::Windows::Forms::Form
	{ 
	public:
		User^ user;
		List <TextBox^>^ textBoxesList;
		AddingForm(User^ usr, List <TextBox^>^ tb)
		{
			user = usr;
			textBoxesList = tb;
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
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::PictureBox^ picProfile;
	private: System::Windows::Forms::Button^ btAdd;
	private: System::Windows::Forms::Button^ btCancel;
	public: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ labelCategory;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddingForm::typeid));
			this->btAdd = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->labelCategory = (gcnew System::Windows::Forms::Label());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->picProfile = (gcnew System::Windows::Forms::PictureBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btAdd
			// 
			this->btAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btAdd->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btAdd->Location = System::Drawing::Point(748, 570);
			this->btAdd->Name = L"btAdd";
			this->btAdd->Size = System::Drawing::Size(155, 45);
			this->btAdd->TabIndex = 6;
			this->btAdd->Text = L"Add";
			this->btAdd->UseVisualStyleBackColor = true;
			this->btAdd->Click += gcnew System::EventHandler(this, &AddingForm::btOK_Click);
			// 
			// btCancel
			// 
			this->btCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btCancel->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btCancel->Location = System::Drawing::Point(44, 570);
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
				39.09416F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				60.90584F)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 43)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(822, 43);
			this->tableLayoutPanel1->TabIndex = 8;
			// 
			// labelCategory
			// 
			this->labelCategory->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCategory->ForeColor = System::Drawing::SystemColors::Control;
			this->labelCategory->Location = System::Drawing::Point(12, 74);
			this->labelCategory->Name = L"labelCategory";
			this->labelCategory->Size = System::Drawing::Size(920, 62);
			this->labelCategory->TabIndex = 9;
			this->labelCategory->Text = L"category";
			this->labelCategory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelUsername
			// 
			this->labelUsername->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelUsername->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUsername->ForeColor = System::Drawing::SystemColors::Control;
			this->labelUsername->Location = System::Drawing::Point(363, 26);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(494, 44);
			this->labelUsername->TabIndex = 10;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// picProfile
			// 
			this->picProfile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->picProfile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picProfile.Image")));
			this->picProfile->Location = System::Drawing::Point(859, 26);
			this->picProfile->Name = L"picProfile";
			this->picProfile->Size = System::Drawing::Size(44, 44);
			this->picProfile->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picProfile->TabIndex = 11;
			this->picProfile->TabStop = false;
			this->picProfile->Click += gcnew System::EventHandler(this, &AddingForm::picProfile_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->tableLayoutPanel1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(44, 158);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(859, 374);
			this->flowLayoutPanel1->TabIndex = 12;
			// 
			// AddingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(944, 661);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->picProfile);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->labelCategory);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btAdd);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"AddingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &AddingForm::AddingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picProfile))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void AddingForm_Load(System::Object^ sender, System::EventArgs^ e) {
	labelCategory->Text = user->selected_cat;
	labelUsername->Text = user->username;
}
private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btOK_Click(System::Object^ sender, System::EventArgs^ e) {
	//getting the username and selected category
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);
	string category = sysStringToString(labelCategory->Text);

	//empty check
	for each (TextBox^ tb in textBoxesList) {
		if (tb->Text == "") {
			MessageBox::Show("Please enter all the required parameters", "Parameters are empty", MessageBoxButtons::OK);
			return;
		}
	}

	Json::Value actualJson = json_parse(stringUser, user->password);

	//finding the index of selected category in the content array
	int cat_index = find_index_in_content(actualJson, category);

	//finding the number of parameters of selected category
	int cat_size = actualJson["content"][cat_index].size();
	
	//finding the index where to put the new data
	int pos = actualJson[category].size();

	//entering provided data to json
	for (int i = 1; i < cat_size; i++) {
		actualJson[category][pos][actualJson["content"][cat_index][i].asString()] = sysStringToString(this->textBoxesList[i - 1]->Text);;
	}

	//writing json data into a file
	json_write(stringUser, actualJson, user->password);

	this->Close();
}
private: System::Void picProfile_Click(System::Object^ sender, System::EventArgs^ e) {
	ProfileForm^ profileForm = gcnew ProfileForm(user);
	profileForm->ShowDialog();
}
};
}
