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
	/// Summary for DoctorRegistration
	/// </summary>
	public ref class DoctorRegistration : public System::Windows::Forms::Form
	{
	public:
		DoctorRegistration(void)
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
		~DoctorRegistration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  nam_txt;
	private: System::Windows::Forms::TextBox^  dep_txt;


	private: System::Windows::Forms::TextBox^  id_txt;


	private: System::Windows::Forms::ListBox^  listBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DoctorRegistration::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nam_txt = (gcnew System::Windows::Forms::TextBox());
			this->dep_txt = (gcnew System::Windows::Forms::TextBox());
			this->id_txt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(490, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(250, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Doctor Registration";
			this->label1->Click += gcnew System::EventHandler(this, &DoctorRegistration::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 200);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->nam_txt);
			this->groupBox1->Controls->Add(this->dep_txt);
			this->groupBox1->Controls->Add(this->id_txt);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(326, 203);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(297, 257);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Details";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 212);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 27);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Update";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DoctorRegistration::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(82, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Name :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 15);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Department :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(59, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Doctor ID :";
			// 
			// nam_txt
			// 
			this->nam_txt->Location = System::Drawing::Point(129, 103);
			this->nam_txt->Name = L"nam_txt";
			this->nam_txt->Size = System::Drawing::Size(134, 21);
			this->nam_txt->TabIndex = 4;
			// 
			// dep_txt
			// 
			this->dep_txt->Location = System::Drawing::Point(129, 157);
			this->dep_txt->Name = L"dep_txt";
			this->dep_txt->Size = System::Drawing::Size(134, 21);
			this->dep_txt->TabIndex = 3;
			// 
			// id_txt
			// 
			this->id_txt->Location = System::Drawing::Point(129, 49);
			this->id_txt->Name = L"id_txt";
			this->id_txt->Size = System::Drawing::Size(134, 21);
			this->id_txt->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(36, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 27);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DoctorRegistration::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(827, 209);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(348, 251);
			this->listBox1->TabIndex = 4;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DoctorRegistration::listBox1_SelectedIndexChanged);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1193, 633);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(90, 27);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &DoctorRegistration::button3_Click);
			// 
			// DoctorRegistration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightYellow;
			this->ClientSize = System::Drawing::Size(1284, 661);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Name = L"DoctorRegistration";
			this->Text = L"DoctorRegistration";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into database.doctors_details (doctor_id,name,department) values('"+this->id_txt->Text+"','"+this->nam_txt->Text+"','"+this->dep_txt->Text+"');",conDataBase);
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

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("update database.doctors_details set doctor_id='"+this->id_txt->Text+"',name='"+this->nam_txt->Text+"',department='"+this->dep_txt->Text+"' where name='"+this->nam_txt->Text+"';",conDataBase);
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
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         portfolio^ pf=gcnew portfolio();
			 pf->ShowDialog();
		 }
private : void Filllist(void){
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * database.doctors_details;",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 while(myReader->Read())
					 {
						 String^ pname;
						 myReader->GetString("name");
						 listBox1->Items->Add(pname);
					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String^ listval=listBox1->Text;

			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("select * database.doctors_details where name= '"+listval+"';",conDataBase);
			 MySqlDataReader^ myReader;
				 try
				 {
					conDataBase ->Open();
					myReader=cmdDataBase->ExecuteReader();
					 if(myReader->Read())
					 {
						 String^ vnam=myReader->GetString("name");
						 nam_txt->Text=vnam;

						 String^ vdep=myReader->GetString("department");
						 dep_txt->Text=vdep;

						 String^ vid=myReader->GetInt32("doctor_id").ToString();
						 id_txt->Text=vid;

					 }
				 }
				 catch(Exception^ex)
				 {
					 MessageBox::Show("Error !!");

		 }

		 }
};
}
