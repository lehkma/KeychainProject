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
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for ViewingForm
	/// </summary>
	public ref class ViewingForm : public System::Windows::Forms::Form
	{
	private: User^ user;
	public:
		ViewingForm(User^ usr)
		{
			user = usr;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelUsername;
	private: System::Windows::Forms::Label^ labelCategory;
	public: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btDelete;
	private: System::Windows::Forms::Button^ btEdit;


	public:
	private:

	public:

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
			this->labelCategory = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btDelete = (gcnew System::Windows::Forms::Button());
			this->btEdit = (gcnew System::Windows::Forms::Button());
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
			this->labelUsername->TabIndex = 11;
			this->labelUsername->Text = L"username";
			this->labelUsername->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->labelCategory->Size = System::Drawing::Size(760, 62);
			this->labelCategory->TabIndex = 12;
			this->labelCategory->Text = L"category";
			this->labelCategory->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->tableLayoutPanel1->TabIndex = 15;
			// 
			// btDelete
			// 
			this->btDelete->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btDelete->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btDelete->Location = System::Drawing::Point(30, 395);
			this->btDelete->Name = L"btDelete";
			this->btDelete->Size = System::Drawing::Size(155, 45);
			this->btDelete->TabIndex = 14;
			this->btDelete->Text = L"Delete";
			this->btDelete->UseVisualStyleBackColor = true;
			this->btDelete->Click += gcnew System::EventHandler(this, &ViewingForm::btDelete_Click);
			// 
			// btEdit
			// 
			this->btEdit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btEdit->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btEdit->Location = System::Drawing::Point(599, 395);
			this->btEdit->Name = L"btEdit";
			this->btEdit->Size = System::Drawing::Size(155, 45);
			this->btEdit->TabIndex = 13;
			this->btEdit->Text = L"Edit";
			this->btEdit->UseVisualStyleBackColor = true;
			// 
			// ViewingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 486);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->btEdit);
			this->Controls->Add(this->labelCategory);
			this->Controls->Add(this->labelUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"ViewingForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &ViewingForm::ViewingForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void ViewingForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//setting the labels
	labelCategory->Text = user->selected_cat;
	labelUsername->Text = user->username;
	
	//getting necessary data
	string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);
	string cat = msclr::interop::marshal_as<std::string>(labelCategory->Text);
	int category_index = user->cat_index;

	ifstream ifile("Data/" + stringUser + ".json"); //reading data from a file
	Json::Value actualJson;
	Json::Reader reader;
	reader.parse(ifile, actualJson);
	ifile.close();

	//finding the index of selected category in the content array
	int cat_i = 0;
	bool notFound = true;
	while (actualJson["content"][cat_i][0] && notFound) {
		if (actualJson["content"][cat_i][0] == cat) {
			notFound = false;
		}
		else {
			cat_i += 1;
		}
	}

	//finding the number of parameters of selected category
	int cat_size = actualJson["content"][cat_i].size();

	//set all its properties
	this->ClientSize = System::Drawing::Size(800, 290 + 43 * cat_size);
	this->tableLayoutPanel1->RowCount = cat_size - 1;
	this->tableLayoutPanel1->Size = System::Drawing::Size(724, 43 * cat_size);
	for (int i = 0; i < cat_size; i++) {
		this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 43)));
	}

	//adding the first column
	for (int i = 1; i < cat_size; i++) {
		Label^ label1 = (gcnew Label());
		this->Controls->Add(label1);
		label1->Size = System::Drawing::Size(221, 33);
		label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
		label1->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		label1->ForeColor = System::Drawing::SystemColors::Control;
		string textStr = actualJson["content"][cat_i][i].asString();
		String^ text = gcnew String(textStr.c_str());
		label1->Text = text;
		label1->Name = L"label1" + text;
		label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		this->tableLayoutPanel1->Controls->Add(label1, 0, i - 1);
	}

	//adding the second column
	List <Label^>^ myLabels = gcnew List<Label^>();
	for (int i = 1; i < cat_size; i++) {
		Label^ label1 = (gcnew Label());
		this->Controls->Add(label1);
		label1->Size = System::Drawing::Size(221, 33);
		label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
		label1->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		label1->ForeColor = System::Drawing::SystemColors::Control;
		string textStr = actualJson[cat][category_index][actualJson["content"][cat_i][i].asString()].asString();
		String^ text = gcnew String(textStr.c_str());
		label1->Text = text;
		label1->Name = L"label1" + text;
		label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
		myLabels->Add(label1);
	}
	for (int i = 1; i < cat_size; i++) {
		this->Controls->Add(myLabels[i - 1]);
		this->tableLayoutPanel1->Controls->Add(myLabels[i - 1], 1, i - 1);
	}
}
private: System::Void btDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	//ask for confirmation
	if ((MessageBox::Show("Are you sure you want to delete this item?", "Confirm delete", MessageBoxButtons::YesNo)) == ::System::Windows::Forms::DialogResult::Yes) {
		//get the data
		string stringUser = msclr::interop::marshal_as<std::string>(this->labelUsername->Text);
		string cat = msclr::interop::marshal_as<std::string>(labelCategory->Text);
		int category_index = user->cat_index;

		ifstream ifile("Data/" + stringUser + ".json"); //reading data from a file
		Json::Value actualJson;
		Json::Reader reader;
		reader.parse(ifile, actualJson);
		ifile.close();

		//delete the current index
		actualJson[cat].removeIndex(category_index, &actualJson[cat][category_index]);

		//writing json data into a file
		ofstream outfile("Data/" + stringUser + ".json");
		Json::StyledWriter styledWriter;
		outfile << styledWriter.write(actualJson);
		outfile.close();

		this->Close();
		return;
	}
	else {
		return;
	}
}
};
}