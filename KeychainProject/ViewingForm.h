#pragma once

namespace KeychainProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewingForm
	/// </summary>
	public ref class ViewingForm : public System::Windows::Forms::Form
	{
	public:
		ViewingForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ btClose;
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
			this->btClose = (gcnew System::Windows::Forms::Button());
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
			// 
			// btEdit
			// 
			this->btEdit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btEdit->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btEdit->Location = System::Drawing::Point(317, 395);
			this->btEdit->Name = L"btEdit";
			this->btEdit->Size = System::Drawing::Size(155, 45);
			this->btEdit->TabIndex = 13;
			this->btEdit->Text = L"Edit";
			this->btEdit->UseVisualStyleBackColor = true;
			// 
			// btClose
			// 
			this->btClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btClose->Font = (gcnew System::Drawing::Font(L"Rubik", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btClose->Location = System::Drawing::Point(599, 395);
			this->btClose->Name = L"btClose";
			this->btClose->Size = System::Drawing::Size(155, 45);
			this->btClose->TabIndex = 16;
			this->btClose->Text = L"Close";
			this->btClose->UseVisualStyleBackColor = true;
			// 
			// ViewingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->ClientSize = System::Drawing::Size(784, 486);
			this->Controls->Add(this->btClose);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btDelete);
			this->Controls->Add(this->btEdit);
			this->Controls->Add(this->labelCategory);
			this->Controls->Add(this->labelUsername);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MinimumSize = System::Drawing::Size(800, 39);
			this->Name = L"ViewingForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
