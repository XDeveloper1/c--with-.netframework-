#pragma once
#include "user.h"
namespace sca {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for adminlogin
	/// </summary>
	public ref class adminlogin : public System::Windows::Forms::Form
	{
	public:
		adminlogin(void)
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
		~adminlogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ College_id;
	private: System::Windows::Forms::TextBox^ collede_idt;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::Button^ btnok;
	private: System::Windows::Forms::Button^ btncancel;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->College_id = (gcnew System::Windows::Forms::Label());
			this->collede_idt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->btncancel = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-3, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(490, 44);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Login";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &adminlogin::label1_Click);
			// 
			// College_id
			// 
			this->College_id->AutoSize = true;
			this->College_id->Location = System::Drawing::Point(12, 91);
			this->College_id->Name = L"College_id";
			this->College_id->Size = System::Drawing::Size(134, 31);
			this->College_id->TabIndex = 1;
			this->College_id->Text = L"College id";
			this->College_id->Click += gcnew System::EventHandler(this, &adminlogin::label2_Click);
			// 
			// collede_idt
			// 
			this->collede_idt->Location = System::Drawing::Point(169, 85);
			this->collede_idt->Name = L"collede_idt";
			this->collede_idt->Size = System::Drawing::Size(318, 37);
			this->collede_idt->TabIndex = 2;
			this->collede_idt->TextChanged += gcnew System::EventHandler(this, &adminlogin::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(169, 144);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(318, 37);
			this->password->TabIndex = 4;
			this->password->TextChanged += gcnew System::EventHandler(this, &adminlogin::textBox2_TextChanged);
			// 
			// btnok
			// 
			this->btnok->Location = System::Drawing::Point(151, 210);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(156, 46);
			this->btnok->TabIndex = 5;
			this->btnok->Text = L"OK";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &adminlogin::btnok_Click);
			// 
			// btncancel
			// 
			this->btncancel->Location = System::Drawing::Point(347, 210);
			this->btncancel->Name = L"btncancel";
			this->btncancel->Size = System::Drawing::Size(140, 46);
			this->btncancel->TabIndex = 6;
			this->btncancel->Text = L"Cancel";
			this->btncancel->UseVisualStyleBackColor = true;
			this->btncancel->Click += gcnew System::EventHandler(this, &adminlogin::btncancel_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(367, 296);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(152, 31);
			this->linkLabel1->TabIndex = 7;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Next_demo";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &adminlogin::linkLabel1_LinkClicked);
			// 
			// adminlogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(531, 336);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btncancel);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->collede_idt);
			this->Controls->Add(this->College_id);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"adminlogin";
			this->Text = L"SCA LOGIN";
			this->Load += gcnew System::EventHandler(this, &adminlogin::loginform_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	public: User^ user = nullptr;
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btncancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void btnok_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	public:bool switchtoadminpage = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchtoadminpage = true;
		this->Close();
	}
	private: System::Void loginform_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
