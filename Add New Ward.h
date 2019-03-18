#pragma once
#include "stdafx.h"
#include "portfolio1.h"

namespace HospitalManagementSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for AddNewWard
	/// </summary>
	public ref class AddNewWard : public System::Windows::Forms::Form
	{
	public:
		AddNewWard(void)
		{
			InitializeComponent();
			Filllist();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddNewWard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  r_txt;
	private: System::Windows::Forms::TextBox^  c_txt;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  buildi_txt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->r_txt = (gcnew System::Windows::Forms::TextBox());
			this->c_txt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buildi_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->r_txt);
			this->groupBox1->Controls->Add(this->c_txt);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->buildi_txt);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(196, 130);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(235, 206);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add New";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(23, 95);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 15);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Room No :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(51, 138);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 15);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Cost :";
			// 
			// r_txt
			// 
			this->r_txt->Location = System::Drawing::Point(90, 92);
			this->r_txt->Name = L"r_txt";
			this->r_txt->Size = System::Drawing::Size(121, 21);
			this->r_txt->TabIndex = 24;
			// 
			// c_txt
			// 
			this->c_txt->Location = System::Drawing::Point(90, 135);
			this->c_txt->Name = L"c_txt";
			this->c_txt->Size = System::Drawing::Size(121, 21);
			this->c_txt->TabIndex = 23;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(26, 54);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 15);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Building :";
			// 
			// buildi_txt
			// 
			this->buildi_txt->Location = System::Drawing::Point(90, 51);
			this->buildi_txt->Name = L"buildi_txt";
			this->buildi_txt->Size = System::Drawing::Size(121, 21);
			this->buildi_txt->TabIndex = 22;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(500, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(229, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Add Room Details";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(709, 130);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(343, 238);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddNewWard::listBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1204, 634);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(78, 26);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Close";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddNewWard::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(196, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 27);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddNewWard::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(356, 396);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 27);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AddNewWard::button3_Click);
			// 
			// AddNewWard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::AntiqueWhite;
			this->ClientSize = System::Drawing::Size(1284, 661);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"AddNewWard";
			this->Text = L"AddNewWard";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 String^ listval=listBox1->Text;

			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * database.newroom where name= '"+listval+"';",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 if(myReader->Read())
					 {
						 String^ vrn=myReader->GetInt32("room_no");
						 r_txt->Text=vrn;

						 String^ vbuild=myReader->GetString("building");
						 buildi_txt->Text=vbuild;

						 String^ vcos=myReader->GetInt32("cost").ToString();
						 c_txt->Text=vcos;

					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into database.newroom (buliding,room_no,cost) values('"+this->buildi_txt->Text+"','"+this->r_txt->Text+"','"+this->c_txt->Text+"');",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("update database.newroom set building='"+this->buildi_txt->Text+"',room_no='"+this->r_txt->Text+"',cost='"+this->c_txt->Text+"' where room_no='"+this->r_txt->Text+"';",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					MessageBox::Show("Data Saved");
					 while(myReader->Read())
					 {
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }
		 }
		 private : void Filllist(void){
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * database.newroom;",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 String^ rno;
						 myReader->GetInt32("room_no").ToString();
						 listBox1->Items->Add(rno);
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         portfolio^ pf=gcnew portfolio();
			 pf->ShowDialog();
		 }
};
}
