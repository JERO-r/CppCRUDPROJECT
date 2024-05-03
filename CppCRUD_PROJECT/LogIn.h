#pragma once
#include "MyForm.h"
namespace CppCRUDPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LogIn
	/// </summary>
	public ref class LogIn : public System::Windows::Forms::Form
	{
	public:
		LogIn(void)
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
		~LogIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::PictureBox^ picMySQL;
	private: System::Windows::Forms::Label^ ServiceLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtPassword;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogIn::typeid));
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->picMySQL = (gcnew System::Windows::Forms::PictureBox());
			this->ServiceLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMySQL))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(210, 161);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(75, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Log in";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LogIn::btnLogin_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(326, 161);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(75, 23);
			this->btnCancel->TabIndex = 1;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LogIn::btnCancel_Click);
			// 
			// picMySQL
			// 
			this->picMySQL->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picMySQL->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picMySQL.Image")));
			this->picMySQL->Location = System::Drawing::Point(12, 12);
			this->picMySQL->Name = L"picMySQL";
			this->picMySQL->Padding = System::Windows::Forms::Padding(2);
			this->picMySQL->Size = System::Drawing::Size(107, 90);
			this->picMySQL->TabIndex = 2;
			this->picMySQL->TabStop = false;
			// 
			// ServiceLabel
			// 
			this->ServiceLabel->AutoSize = true;
			this->ServiceLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ServiceLabel->Location = System::Drawing::Point(137, 71);
			this->ServiceLabel->Name = L"ServiceLabel";
			this->ServiceLabel->Size = System::Drawing::Size(64, 16);
			this->ServiceLabel->TabIndex = 3;
			this->ServiceLabel->Text = L"Service:";
			this->ServiceLabel->Click += gcnew System::EventHandler(this, &LogIn::ServiceLabel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(157, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"User:";
			this->label1->Click += gcnew System::EventHandler(this, &LogIn::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(122, 124);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(125, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(254, 40);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Please enter password for the \r\nfollowing service:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(207, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Mysql@localhost:3306";
			this->label4->Click += gcnew System::EventHandler(this, &LogIn::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(207, 98);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 15);
			this->label5->TabIndex = 8;
			this->label5->Text = L"root";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(207, 123);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(205, 20);
			this->txtPassword->TabIndex = 9;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// LogIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 219);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ServiceLabel);
			this->Controls->Add(this->picMySQL);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnLogin);
			this->Name = L"LogIn";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Connect to MySQL Server";
			this->Load += gcnew System::EventHandler(this, &LogIn::LogIn_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picMySQL))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogIn_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			MyForm^ frm2 = gcnew MyForm(txtPassword->Text);

			frm2->Show();
			this->Hide();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ServiceLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnHide_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void btnUnhide_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	try {
		iExit = MessageBox::Show("Confirm if you want to exit", "Data Entry Form", MessageBoxButtons::YesNo,
			MessageBoxIcon::Question);

		if (iExit == System::Windows::Forms::DialogResult::Yes)
		{
			Application::Exit();
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}
};
}
