#pragma once
#include "stdafx.h"
#include "Patients Registration.h"
#include "Doctor Registration.h"
#include "Patients Info.h"
#include "Add New Ward.h"
#include "form1.h"
namespace HospitalManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for portfolio
	/// </summary>
	public ref class portfolio : public System::Windows::Forms::Form
	{
	public:
		portfolio(void)
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
		~portfolio()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(portfolio::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(38, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Patients Registration";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &portfolio::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(38, 326);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Room Info";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &portfolio::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(38, 113);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Doctor Registration";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &portfolio::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(38, 171);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Patients Info";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &portfolio::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(38, 267);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Add New Ward";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &portfolio::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(38, 381);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Logout";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &portfolio::button7_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 661);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Menu";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkRed;
			this->label1->Location = System::Drawing::Point(653, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(174, 42);
			this->label1->TabIndex = 8;
			this->label1->Text = L"About us";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)), 
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(319, 124);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(775, 412);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// portfolio
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1284, 661);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"portfolio";
			this->Text = L"portfolio";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         Patients Info^ pifo=gcnew Patients Info();
			 pifo->ShowDialog();

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         Patients Registration^ par=gcnew Patients Registration();
			 par->ShowDialog();	

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         Doctor Registration^ dor=gcnew Doctor Registration();
			 dor->ShowDialog();

		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         Add New Ward^ anw=gcnew Add New Ward();
			 anw->ShowDialog();
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         form1^ fr=gcnew form1();
			 fr->ShowDialog();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         Add New Ward^ anw=gcnew Add New Ward();
			 anw->ShowDialog();

		 }
};
}
