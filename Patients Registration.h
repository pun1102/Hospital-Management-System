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
	/// Summary for PatientsRegistration
	/// </summary>
	public ref class PatientsRegistration : public System::Windows::Forms::Form
	{
	public:
		PatientsRegistration(void)
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
		~PatientsRegistration()
		{
			if (components)
			{
				delete components;
			}
		}
		string ^Gender;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;


	private: System::Windows::Forms::TextBox^  pid;
	private: System::Windows::Forms::TextBox^  p_name;
	private: System::Windows::Forms::TextBox^  build_txt;
	private: System::Windows::Forms::TextBox^  cost_txt;




	private: System::Windows::Forms::TextBox^  p_dis;
	private: System::Windows::Forms::TextBox^  room_txt;



	private: System::Windows::Forms::TextBox^  p_add;

	private: System::Windows::Forms::TextBox^  p_cont;

	private: System::Windows::Forms::TextBox^  p_age;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(PatientsRegistration::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pid = (gcnew System::Windows::Forms::TextBox());
			this->p_name = (gcnew System::Windows::Forms::TextBox());
			this->build_txt = (gcnew System::Windows::Forms::TextBox());
			this->cost_txt = (gcnew System::Windows::Forms::TextBox());
			this->p_dis = (gcnew System::Windows::Forms::TextBox());
			this->room_txt = (gcnew System::Windows::Forms::TextBox());
			this->p_add = (gcnew System::Windows::Forms::TextBox());
			this->p_cont = (gcnew System::Windows::Forms::TextBox());
			this->p_age = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(500, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Patients Registration";
			this->label1->Click += gcnew System::EventHandler(this, &PatientsRegistration::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Patient ID :";
			this->label2->Click += gcnew System::EventHandler(this, &PatientsRegistration::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name :";
			this->label4->Click += gcnew System::EventHandler(this, &PatientsRegistration::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(49, 94);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Age :";
			this->label5->Click += gcnew System::EventHandler(this, &PatientsRegistration::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(7, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(82, 17);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Contact No :";
			this->label6->Click += gcnew System::EventHandler(this, &PatientsRegistration::label6_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->pid);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(110, 113);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(224, 113);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Registration ID";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &PatientsRegistration::groupBox1_Enter);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Date :";
			this->label3->Click += gcnew System::EventHandler(this, &PatientsRegistration::label3_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyyy-MM-dd";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(87, 70);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(121, 21);
			this->dateTimePicker1->TabIndex = 9;
			this->dateTimePicker1->Value = System::DateTime(2017, 11, 5, 10, 16, 33, 0);
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &PatientsRegistration::dateTimePicker1_ValueChanged);
			// 
			// pid
			// 
			this->pid->Location = System::Drawing::Point(87, 33);
			this->pid->Name = L"pid";
			this->pid->Size = System::Drawing::Size(121, 21);
			this->pid->TabIndex = 7;
			this->pid->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::pid_TextChanged);
			// 
			// p_name
			// 
			this->p_name->Location = System::Drawing::Point(91, 43);
			this->p_name->Name = L"p_name";
			this->p_name->Size = System::Drawing::Size(121, 24);
			this->p_name->TabIndex = 8;
			this->p_name->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::p_name_TextChanged);
			// 
			// build_txt
			// 
			this->build_txt->Location = System::Drawing::Point(114, 38);
			this->build_txt->Name = L"build_txt";
			this->build_txt->Size = System::Drawing::Size(121, 21);
			this->build_txt->TabIndex = 9;
			this->build_txt->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::build_txt_TextChanged);
			// 
			// cost_txt
			// 
			this->cost_txt->Location = System::Drawing::Point(114, 122);
			this->cost_txt->Name = L"cost_txt";
			this->cost_txt->Size = System::Drawing::Size(121, 21);
			this->cost_txt->TabIndex = 10;
			this->cost_txt->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::cost_txt_TextChanged);
			// 
			// p_dis
			// 
			this->p_dis->Location = System::Drawing::Point(90, 316);
			this->p_dis->Name = L"p_dis";
			this->p_dis->Size = System::Drawing::Size(121, 24);
			this->p_dis->TabIndex = 12;
			this->p_dis->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::p_dis_TextChanged);
			// 
			// room_txt
			// 
			this->room_txt->Location = System::Drawing::Point(114, 79);
			this->room_txt->Name = L"room_txt";
			this->room_txt->Size = System::Drawing::Size(121, 21);
			this->room_txt->TabIndex = 13;
			this->room_txt->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::room_txt_TextChanged);
			// 
			// p_add
			// 
			this->p_add->Location = System::Drawing::Point(90, 219);
			this->p_add->Multiline = true;
			this->p_add->Name = L"p_add";
			this->p_add->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->p_add->Size = System::Drawing::Size(121, 63);
			this->p_add->TabIndex = 14;
			this->p_add->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::p_add_TextChanged);
			// 
			// p_cont
			// 
			this->p_cont->Location = System::Drawing::Point(91, 169);
			this->p_cont->Name = L"p_cont";
			this->p_cont->Size = System::Drawing::Size(121, 24);
			this->p_cont->TabIndex = 15;
			this->p_cont->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::p_cont_TextChanged);
			// 
			// p_age
			// 
			this->p_age->Location = System::Drawing::Point(90, 90);
			this->p_age->Name = L"p_age";
			this->p_age->Size = System::Drawing::Size(121, 24);
			this->p_age->TabIndex = 16;
			this->p_age->TextChanged += gcnew System::EventHandler(this, &PatientsRegistration::p_age_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->p_add);
			this->groupBox2->Controls->Add(this->p_dis);
			this->groupBox2->Controls->Add(this->p_cont);
			this->groupBox2->Controls->Add(this->p_age);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->p_name);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(112, 279);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(233, 375);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Patient Details";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &PatientsRegistration::groupBox2_Enter);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(153, 132);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 21);
			this->radioButton2->TabIndex = 23;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Female";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &PatientsRegistration::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(93, 132);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(57, 21);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Male";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &PatientsRegistration::radioButton1_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(30, 132);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 17);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Gender :";
			this->label9->Click += gcnew System::EventHandler(this, &PatientsRegistration::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(26, 222);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 17);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Address :";
			this->label10->Click += gcnew System::EventHandler(this, &PatientsRegistration::label10_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(27, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(60, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Disease :";
			this->label7->Click += gcnew System::EventHandler(this, &PatientsRegistration::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(50, 41);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 15);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Building :";
			this->label8->Click += gcnew System::EventHandler(this, &PatientsRegistration::label8_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::Transparent;
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->room_txt);
			this->groupBox3->Controls->Add(this->cost_txt);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->build_txt);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(624, 142);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(291, 170);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Room Details";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &PatientsRegistration::groupBox3_Enter);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(47, 82);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 15);
			this->label12->TabIndex = 21;
			this->label12->Text = L"Room No :";
			this->label12->Click += gcnew System::EventHandler(this, &PatientsRegistration::label12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(75, 125);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(36, 15);
			this->label11->TabIndex = 20;
			this->label11->Text = L"Cost :";
			this->label11->Click += gcnew System::EventHandler(this, &PatientsRegistration::label11_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(738, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 30);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PatientsRegistration::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1193, 629);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 30);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &PatientsRegistration::button3_Click);
			// 
			// PatientsRegistration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1284, 661);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"PatientsRegistration";
			this->Text = L"PatientsRegistration";
			this->Load += gcnew System::EventHandler(this, &PatientsRegistration::PatientsRegistration_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
	         portfolio^ pf=gcnew portfolio();
			 pf->ShowDialog();

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ constring=L"datasource=localhost;port=3306;username=root;password=1234";
			 MySqlConnection^ conDataBase=gcnew MySqlConnection(constring);
			 MySqlCommand^ cmdDataBase=gcnew MySqlCommand("insert into database.patdetails (date,pid,name,age,gender,contact,address,disease,room_no,building,cost) values('"+this->dateTimePicker1->Text+"','"+this->pid->Text+"','"+this->p_name->Text+"','"+this->p_age->Text+"','"+Gender+"','"+this->p_cont->Text+"','"+this->p_add->Text+"','"+this->p_dis->Text+"''"+this->room_txt->Text+"','"+this->build_txt->Text+"','"+this->cost_txt->Text+"');",conDataBase);
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
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Gender="Male";
		 }
private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 Gender="Female";
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pid_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void p_name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void build_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void cost_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void p_dis_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void room_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void p_add_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void p_cont_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void p_age_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void PatientsRegistration_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
