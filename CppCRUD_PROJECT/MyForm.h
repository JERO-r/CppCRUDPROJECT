#pragma once

namespace CppCRUDPROJECT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable ();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
	private: System::Windows::Forms::Button^ btnRefresh;
	private: System::Windows::Forms::TextBox^ txtBill;
	private: System::Windows::Forms::TextBox^ txtANum;
	private: System::Windows::Forms::DateTimePicker^ dtAssignDate;

	private: System::Windows::Forms::ComboBox^ cbJCode;
	private: System::Windows::Forms::ComboBox^ cbPNum;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;

	private: System::Windows::Forms::Button^ btnSortPROJ;
	private: System::Windows::Forms::Button^ btnSortEMP;
	private: System::Windows::Forms::Button^ btnSortASS;
	private: System::Windows::Forms::Button^ btnSortJOB;
	private: System::Windows::Forms::Label^ pwData;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnRefresh2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private:







		   MySqlDataReader^ sqlRd;

	public:
		MyForm(String^ passdata)
		{
			InitializeComponent();
			pwData->Text = passdata;
			MembershipDB();
		}
		MyForm(void)
		{
			InitializeComponent();
			MembershipDB();
		}

		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;


	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ btnAddNew;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnSearch;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::TextBox^ txtEFName;




	private: System::Windows::Forms::Label^ label7;





	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtELName;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtENum;


	private: System::Windows::Forms::Label^ label3;












	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label11;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnRefresh = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->pwData = (gcnew System::Windows::Forms::Label());
			this->cbPNum = (gcnew System::Windows::Forms::ComboBox());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->cbJCode = (gcnew System::Windows::Forms::ComboBox());
			this->txtBill = (gcnew System::Windows::Forms::TextBox());
			this->txtANum = (gcnew System::Windows::Forms::TextBox());
			this->btnAddNew = (gcnew System::Windows::Forms::Button());
			this->dtAssignDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtEFName = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtELName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtENum = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnRefresh2 = (gcnew System::Windows::Forms::Button());
			this->btnSortJOB = (gcnew System::Windows::Forms::Button());
			this->btnSortASS = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnSortPROJ = (gcnew System::Windows::Forms::Button());
			this->btnSortEMP = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnRefresh);
			this->panel1->Controls->Add(this->btnDelete);
			this->panel1->Controls->Add(this->btnReset);
			this->panel1->Controls->Add(this->pwData);
			this->panel1->Controls->Add(this->cbPNum);
			this->panel1->Controls->Add(this->btnUpdate);
			this->panel1->Controls->Add(this->cbJCode);
			this->panel1->Controls->Add(this->txtBill);
			this->panel1->Controls->Add(this->txtANum);
			this->panel1->Controls->Add(this->btnAddNew);
			this->panel1->Controls->Add(this->dtAssignDate);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->txtEFName);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->txtELName);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->txtENum);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(383, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(975, 261);
			this->panel1->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::Red;
			this->btnExit->Location = System::Drawing::Point(805, 206);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(152, 41);
			this->btnExit->TabIndex = 15;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnRefresh
			// 
			this->btnRefresh->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnRefresh->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRefresh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnRefresh->Location = System::Drawing::Point(173, 206);
			this->btnRefresh->Name = L"btnRefresh";
			this->btnRefresh->Size = System::Drawing::Size(152, 41);
			this->btnRefresh->TabIndex = 11;
			this->btnRefresh->Text = L"Refresh";
			this->btnRefresh->UseVisualStyleBackColor = false;
			this->btnRefresh->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::Red;
			this->btnDelete->Location = System::Drawing::Point(647, 206);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(152, 41);
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &MyForm::btnDelete_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnReset->Location = System::Drawing::Point(489, 206);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(152, 41);
			this->btnReset->TabIndex = 13;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// pwData
			// 
			this->pwData->AutoSize = true;
			this->pwData->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 2.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pwData->ForeColor = System::Drawing::Color::Transparent;
			this->pwData->Location = System::Drawing::Point(946, 256);
			this->pwData->Name = L"pwData";
			this->pwData->Size = System::Drawing::Size(9, 3);
			this->pwData->TabIndex = 10;
			this->pwData->Text = L"label2";
			// 
			// cbPNum
			// 
			this->cbPNum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbPNum->FormattingEnabled = true;
			this->cbPNum->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"16", L"22", L"32", L"44" });
			this->cbPNum->Location = System::Drawing::Point(222, 16);
			this->cbPNum->Name = L"cbPNum";
			this->cbPNum->Size = System::Drawing::Size(258, 37);
			this->cbPNum->TabIndex = 1;
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnUpdate->Location = System::Drawing::Point(331, 206);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(152, 41);
			this->btnUpdate->TabIndex = 12;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MyForm::btnUpdate_Click);
			// 
			// cbJCode
			// 
			this->cbJCode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cbJCode->FormattingEnabled = true;
			this->cbJCode->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"101", L"102", L"103", L"104", L"105", L"106", L"107" });
			this->cbJCode->Location = System::Drawing::Point(697, 16);
			this->cbJCode->Name = L"cbJCode";
			this->cbJCode->Size = System::Drawing::Size(258, 37);
			this->cbJCode->TabIndex = 5;
			// 
			// txtBill
			// 
			this->txtBill->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBill->Location = System::Drawing::Point(697, 159);
			this->txtBill->Name = L"txtBill";
			this->txtBill->Size = System::Drawing::Size(258, 35);
			this->txtBill->TabIndex = 8;
			// 
			// txtANum
			// 
			this->txtANum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtANum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtANum->Location = System::Drawing::Point(697, 69);
			this->txtANum->Name = L"txtANum";
			this->txtANum->Size = System::Drawing::Size(258, 35);
			this->txtANum->TabIndex = 6;
			// 
			// btnAddNew
			// 
			this->btnAddNew->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnAddNew->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->btnAddNew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddNew->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnAddNew->Location = System::Drawing::Point(15, 206);
			this->btnAddNew->Name = L"btnAddNew";
			this->btnAddNew->Size = System::Drawing::Size(152, 41);
			this->btnAddNew->TabIndex = 10;
			this->btnAddNew->Text = L"Add New";
			this->btnAddNew->UseVisualStyleBackColor = false;
			this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
			// 
			// dtAssignDate
			// 
			this->dtAssignDate->CustomFormat = L"yyyy-MM-dd";
			this->dtAssignDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtAssignDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtAssignDate->Location = System::Drawing::Point(697, 115);
			this->dtAssignDate->Name = L"dtAssignDate";
			this->dtAssignDate->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dtAssignDate->Size = System::Drawing::Size(258, 35);
			this->dtAssignDate->TabIndex = 7;
			this->dtAssignDate->Value = System::DateTime(2024, 5, 23, 0, 0, 0, 0);
			this->dtAssignDate->ValueChanged += gcnew System::EventHandler(this, &MyForm::dtAssignDate_ValueChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(491, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(182, 29);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Assignment No:";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(491, 118);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(200, 29);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Assignment Date:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(491, 159);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 29);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Bill PH:";
			// 
			// txtEFName
			// 
			this->txtEFName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEFName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEFName->Location = System::Drawing::Point(222, 115);
			this->txtEFName->Name = L"txtEFName";
			this->txtEFName->Size = System::Drawing::Size(258, 35);
			this->txtEFName->TabIndex = 3;
			this->txtEFName->TextChanged += gcnew System::EventHandler(this, &MyForm::txtAddress_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(20, 118);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(195, 29);
			this->label7->TabIndex = 12;
			this->label7->Text = L"EMP First Name:";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(491, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 29);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Job Code:";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// txtELName
			// 
			this->txtELName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtELName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtELName->Location = System::Drawing::Point(222, 156);
			this->txtELName->Name = L"txtELName";
			this->txtELName->Size = System::Drawing::Size(258, 35);
			this->txtELName->TabIndex = 4;
			this->txtELName->TextChanged += gcnew System::EventHandler(this, &MyForm::txtMobile_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(20, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 29);
			this->label6->TabIndex = 6;
			this->label6->Text = L"EMP Last Name:";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// txtENum
			// 
			this->txtENum->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtENum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtENum->Location = System::Drawing::Point(222, 66);
			this->txtENum->Name = L"txtENum";
			this->txtENum->Size = System::Drawing::Size(258, 35);
			this->txtENum->TabIndex = 2;
			this->txtENum->TextChanged += gcnew System::EventHandler(this, &MyForm::txtLastname_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(20, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"EMP No:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(20, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Project No:";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->AutoSize = true;
			this->btnSearch->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->Location = System::Drawing::Point(311, 210);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(37, 37);
			this->btnSearch->TabIndex = 1;
			this->btnSearch->UseVisualStyleBackColor = true;
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->BackColor = System::Drawing::SystemColors::Window;
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(18, 212);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(287, 35);
			this->txtSearch->TabIndex = 9;
			this->txtSearch->TextChanged += gcnew System::EventHandler(this, &MyForm::txtSearch_TextChanged);
			this->txtSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtSearch_KeyPress);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->panel3);
			this->panel4->Controls->Add(this->dataGridView1);
			this->panel4->Location = System::Drawing::Point(12, 279);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1346, 458);
			this->panel4->TabIndex = 3;
			// 
			// btnRefresh2
			// 
			this->btnRefresh2->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnRefresh2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRefresh2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRefresh2->Location = System::Drawing::Point(12, 374);
			this->btnRefresh2->Name = L"btnRefresh2";
			this->btnRefresh2->Size = System::Drawing::Size(127, 60);
			this->btnRefresh2->TabIndex = 15;
			this->btnRefresh2->Text = L"Refresh";
			this->btnRefresh2->UseVisualStyleBackColor = false;
			this->btnRefresh2->Click += gcnew System::EventHandler(this, &MyForm::btnRefresh2_Click);
			// 
			// btnSortJOB
			// 
			this->btnSortJOB->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnSortJOB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSortJOB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSortJOB->Location = System::Drawing::Point(12, 197);
			this->btnSortJOB->Name = L"btnSortJOB";
			this->btnSortJOB->Size = System::Drawing::Size(127, 60);
			this->btnSortJOB->TabIndex = 13;
			this->btnSortJOB->Text = L"Job";
			this->btnSortJOB->UseVisualStyleBackColor = false;
			this->btnSortJOB->Click += gcnew System::EventHandler(this, &MyForm::btnSortJOB_Click);
			// 
			// btnSortASS
			// 
			this->btnSortASS->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnSortASS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSortASS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSortASS->Location = System::Drawing::Point(12, 274);
			this->btnSortASS->Name = L"btnSortASS";
			this->btnSortASS->Size = System::Drawing::Size(127, 60);
			this->btnSortASS->TabIndex = 14;
			this->btnSortASS->Text = L"Assignment";
			this->btnSortASS->UseVisualStyleBackColor = false;
			this->btnSortASS->Click += gcnew System::EventHandler(this, &MyForm::btnSortASS_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::WhiteSmoke;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(162, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1179, 450);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick_1);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// btnSortPROJ
			// 
			this->btnSortPROJ->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnSortPROJ->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSortPROJ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSortPROJ->Location = System::Drawing::Point(12, 41);
			this->btnSortPROJ->Name = L"btnSortPROJ";
			this->btnSortPROJ->Size = System::Drawing::Size(127, 60);
			this->btnSortPROJ->TabIndex = 11;
			this->btnSortPROJ->Text = L"Project";
			this->btnSortPROJ->UseVisualStyleBackColor = false;
			this->btnSortPROJ->Click += gcnew System::EventHandler(this, &MyForm::btnSortPROJ_Click);
			// 
			// btnSortEMP
			// 
			this->btnSortEMP->BackColor = System::Drawing::Color::AntiqueWhite;
			this->btnSortEMP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSortEMP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSortEMP->Location = System::Drawing::Point(12, 119);
			this->btnSortEMP->Name = L"btnSortEMP";
			this->btnSortEMP->Size = System::Drawing::Size(127, 60);
			this->btnSortEMP->TabIndex = 12;
			this->btnSortEMP->Text = L"Employee";
			this->btnSortEMP->UseVisualStyleBackColor = false;
			this->btnSortEMP->Click += gcnew System::EventHandler(this, &MyForm::btnSortEMP_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::AntiqueWhite;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->btnSearch);
			this->panel2->Controls->Add(this->txtSearch);
			this->panel2->Location = System::Drawing::Point(12, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(365, 260);
			this->panel2->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(8, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 20);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Sort:";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Wheat;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->btnSortASS);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->btnSortEMP);
			this->panel3->Controls->Add(this->btnRefresh2);
			this->panel3->Controls->Add(this->btnSortPROJ);
			this->panel3->Controls->Add(this->btnSortJOB);
			this->panel3->Location = System::Drawing::Point(5, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(151, 450);
			this->panel3->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(5, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(355, 203);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(1411, 749);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CRUDApp_ITS131L";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void MembershipDB()
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
				sqlConn->Open();
				
				sqlCmd->Connection=sqlConn;
				sqlCmd->CommandText = "SELECT PROJECT.*, EMPLOYEE.EMP_NUM, EMPLOYEE.EMP_FNAME, EMPLOYEE.EMP_LNAME, JOB.JOB_CODE, JOB.JOB_CLASS, ASSIGNMENT.ASSIGN_NUM, ASSIGNMENT.ASSIGN_DATE, ASSIGNMENT.BILL_PH FROM ASSIGNMENT, PROJECT, EMPLOYEE, JOB WHERE ASSIGNMENT.PROJ_NUM = PROJECT.PROJ_NUM AND ASSIGNMENT.EMP_NUM = EMPLOYEE.EMP_NUM AND EMPLOYEE.JOB_CODE = JOB.JOB_CODE;";
				sqlRd = sqlCmd->ExecuteReader();
				sqlDt->Load(sqlRd);
				sqlRd->Close();
				sqlConn->Close();
				dataGridView1->DataSource = sqlDt;
		}

	private: System::Void RefreshDB()
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= "+pwData->Text+" ; database=its131l";
			sqlCmd->Connection = sqlConn;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT PROJECT.*, EMPLOYEE.EMP_NUM, EMPLOYEE.EMP_FNAME, EMPLOYEE.EMP_LNAME, JOB.JOB_CODE, JOB.JOB_CLASS, ASSIGNMENT.ASSIGN_NUM, ASSIGNMENT.ASSIGN_DATE, ASSIGNMENT.BILL_PH FROM ASSIGNMENT, PROJECT, EMPLOYEE, JOB WHERE ASSIGNMENT.PROJ_NUM = PROJECT.PROJ_NUM AND ASSIGNMENT.EMP_NUM = EMPLOYEE.EMP_NUM AND EMPLOYEE.JOB_CODE = JOB.JOB_CODE", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}	
	private: System::Void SortProjectTB()
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM PROJECT", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void SortJobTB()
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM JOB", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void SortEmployeeTB()
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM EMPLOYEE", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void SortAssignmentTB()
	{
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter("SELECT * FROM ASSIGNMENT", sqlConn);
			DataTable^ sqlDt = gcnew DataTable();
			sqlDtA->Fill(sqlDt);
			dataGridView1->DataSource = sqlDt;
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnAddNew_Click(System::Object^ sender, System::EventArgs^ e) {

		sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
		sqlConn->Open();

		sqlCmd->Connection = sqlConn;
		try
		{
			sqlCmd->CommandText = "insert into EMPLOYEE (EMP_NUM, EMP_FNAME, EMP_LNAME, JOB_CODE)"
			"values ('" + txtENum->Text + "','" + txtEFName->Text + "','" + txtELName->Text + "','" + cbJCode->Text + "')";

		sqlCmd->ExecuteNonQuery();

			sqlCmd->CommandText = "insert into ASSIGNMENT (ASSIGN_NUM, ASSIGN_DATE, PROJ_NUM, EMP_NUM, BILL_PH)"
			"values ('" + txtANum->Text + "','" + dtAssignDate->Text + "','" + cbPNum->Text + "','" + txtENum->Text + "','" + txtBill->Text + "')";
			
		sqlCmd->ExecuteNonQuery();
		sqlConn->Close();
		MembershipDB();
		RefreshDB();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}

		

	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("EMP_FNAME like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();	

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			String^ PNum = cbPNum->Text;
			String^ ENum = txtENum->Text;
			String^ EFName = txtEFName->Text;
			String^ ELName = txtELName->Text;
			String^ JCode = cbJCode->Text;
			String^ ANum = txtANum->Text;
			String^ ADate = dtAssignDate->Text;
			String^ Bill = txtBill->Text;

			sqlCmd->CommandText = "update EMPLOYEE set EMP_NUM ='" + ENum + "', EMP_LNAME = '" + ELName + "', EMP_FNAME = '" + EFName + "', JOB_CODE = '" + JCode +"' WHERE EMP_NUM =" + ENum + "", sqlConn;


			sqlConn->Open();
			sqlCmd->ExecuteReader();
			sqlConn->Close();

			MembershipDB();
			RefreshDB();

			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			sqlCmd->CommandText = "update ASSIGNMENT set ASSIGN_NUM ='" + ANum + "', ASSIGN_DATE = '" + ADate + "', PROJ_NUM = '" + PNum + "', EMP_NUM = '" + ENum +
			"', BILL_PH ='" + Bill + "' WHERE ASSIGN_NUM =" + ANum + "", sqlConn;

			sqlConn->Open();
			sqlCmd->ExecuteReader();
			sqlConn->Close();

			MembershipDB();
			RefreshDB();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			sqlConn->ConnectionString = "datasource = localhost; port =3306; username =root; password= " + pwData->Text + " ; database=its131l";
			sqlCmd->Connection = sqlConn;

			String^ ENum = txtENum->Text;
			String^ ANum = txtANum->Text;

			MySqlCommand^ sqlCmd = gcnew MySqlCommand("delete from EMPLOYEE where EMP_NUM =" + ENum + "", sqlConn);

			sqlCmd->CommandText = "delete from ASSIGNMENT where ASSIGN_NUM = " + ANum + "", sqlConn;

			sqlConn->Open();

			sqlRd = sqlCmd->ExecuteReader();
			MessageBox::Show("Record Deleted", "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
			sqlConn->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		RefreshDB();

		}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {

		try
		{
			cbPNum->Text = "";
			txtENum->Text = "";
			txtEFName->Text = "";
			txtELName->Text = "";
			cbJCode->Text = "";
			txtANum->Text = "";
			dtAssignDate->ResetText();
			txtBill->Text = "";
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		}
		}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtMobile_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtDateReg_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void txtRef_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtFirstname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtLastname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtAddress_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cboProve_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
	cbPNum->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
	txtENum->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
	txtEFName->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
	txtELName->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
	cbJCode->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
	txtANum->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
	dtAssignDate->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
	txtBill->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}	

}
private: System::Void btnRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDB();
}
private: System::Void txtSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

	try
	{
		if (e->KeyChar == (Char)13)
		{
			DataView^ dv = sqlDt->DefaultView;
			dv->RowFilter = String::Format("EMP_NUM like '%{0}%'", txtSearch->Text);
			dataGridView1->DataSource = dv->ToTable();

		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "Data Entry Form", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
	}
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dtAssignDate_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSortPROJ_Click(System::Object^ sender, System::EventArgs^ e) {
	SortProjectTB();
}
private: System::Void btnSortEMP_Click(System::Object^ sender, System::EventArgs^ e) {
	SortEmployeeTB();
}
private: System::Void btnSortJOB_Click(System::Object^ sender, System::EventArgs^ e) {
	SortJobTB();
}
private: System::Void btnSortASS_Click(System::Object^ sender, System::EventArgs^ e) {
	SortAssignmentTB();
}
private: System::Void dataGridView1_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		cbPNum->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		txtENum->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		txtEFName->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		txtELName->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		cbJCode->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		txtANum->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		dtAssignDate->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		txtBill->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
	}
	catch (Exception^ ex)
	{
		
	}
}
private: System::Void MyForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
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
private: System::Void btnRefresh2_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDB();
}
};
}
