#include "dbconn.h";
#pragma once

namespace AshesiMSApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class AdminDashboard : public System::Windows::Forms::Form
	{  
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
	private: System::Windows::Forms::TabPage^ generateReport;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::TabPage^ manageFinancial;
	private: System::Windows::Forms::Button^ btnDelete;

	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnAdd;



	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::Button^ btnSaveReport;
		   MySqlDataAdapter^ sqlDta = gcnew MySqlDataAdapter();

	public:
		AdminDashboard(void)
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
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ manage;
	protected:

	private: System::Windows::Forms::TabPage^ manageStudents;
	private: System::Windows::Forms::TabPage^ manageFaculty;
	private: System::Windows::Forms::TabPage^ managaCourses;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ btnDeleteStudent;

	private: System::Windows::Forms::Button^ btnEditStudent;

	private: System::Windows::Forms::Button^ btnAddStudent;
	private: System::Windows::Forms::Button^ btnDeleteFaculty;

	private: System::Windows::Forms::Button^ btnEditFaculty;

	private: System::Windows::Forms::Button^ btnAddFaculty;
	private: System::Windows::Forms::Button^ btnDeleteCourse;

	private: System::Windows::Forms::Button^ btnEditCourse;

	private: System::Windows::Forms::Button^ btnAddCourse;




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
			this->manage = (gcnew System::Windows::Forms::TabControl());
			this->manageStudents = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteStudent = (gcnew System::Windows::Forms::Button());
			this->btnEditStudent = (gcnew System::Windows::Forms::Button());
			this->btnAddStudent = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->manageFaculty = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteFaculty = (gcnew System::Windows::Forms::Button());
			this->btnEditFaculty = (gcnew System::Windows::Forms::Button());
			this->btnAddFaculty = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->managaCourses = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteCourse = (gcnew System::Windows::Forms::Button());
			this->btnEditCourse = (gcnew System::Windows::Forms::Button());
			this->btnAddCourse = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->generateReport = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->manageFinancial = (gcnew System::Windows::Forms::TabPage());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->btnSaveReport = (gcnew System::Windows::Forms::Button());
			this->manage->SuspendLayout();
			this->manageStudents->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->manageFaculty->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->managaCourses->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->generateReport->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->manageFinancial->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// manage
			// 
			this->manage->Controls->Add(this->manageStudents);
			this->manage->Controls->Add(this->manageFaculty);
			this->manage->Controls->Add(this->managaCourses);
			this->manage->Controls->Add(this->generateReport);
			this->manage->Controls->Add(this->manageFinancial);
			this->manage->Location = System::Drawing::Point(4, 35);
			this->manage->Name = L"manage";
			this->manage->SelectedIndex = 0;
			this->manage->Size = System::Drawing::Size(716, 581);
			this->manage->TabIndex = 0;
			// 
			// manageStudents
			// 
			this->manageStudents->Controls->Add(this->btnDeleteStudent);
			this->manageStudents->Controls->Add(this->btnEditStudent);
			this->manageStudents->Controls->Add(this->btnAddStudent);
			this->manageStudents->Controls->Add(this->dataGridView1);
			this->manageStudents->Location = System::Drawing::Point(4, 25);
			this->manageStudents->Name = L"manageStudents";
			this->manageStudents->Padding = System::Windows::Forms::Padding(3);
			this->manageStudents->Size = System::Drawing::Size(708, 552);
			this->manageStudents->TabIndex = 0;
			this->manageStudents->Text = L"Manage Students";
			this->manageStudents->UseVisualStyleBackColor = true;
			// 
			// btnDeleteStudent
			// 
			this->btnDeleteStudent->Location = System::Drawing::Point(408, 410);
			this->btnDeleteStudent->Name = L"btnDeleteStudent";
			this->btnDeleteStudent->Size = System::Drawing::Size(108, 48);
			this->btnDeleteStudent->TabIndex = 3;
			this->btnDeleteStudent->Text = L"Delete Student";
			this->btnDeleteStudent->UseVisualStyleBackColor = true;
			// 
			// btnEditStudent
			// 
			this->btnEditStudent->Location = System::Drawing::Point(285, 410);
			this->btnEditStudent->Name = L"btnEditStudent";
			this->btnEditStudent->Size = System::Drawing::Size(108, 48);
			this->btnEditStudent->TabIndex = 2;
			this->btnEditStudent->Text = L"Edit Student";
			this->btnEditStudent->UseVisualStyleBackColor = true;
			// 
			// btnAddStudent
			// 
			this->btnAddStudent->Location = System::Drawing::Point(162, 410);
			this->btnAddStudent->Name = L"btnAddStudent";
			this->btnAddStudent->Size = System::Drawing::Size(108, 48);
			this->btnAddStudent->TabIndex = 1;
			this->btnAddStudent->Text = L"Add Student";
			this->btnAddStudent->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(692, 335);
			this->dataGridView1->TabIndex = 0;
			// 
			// manageFaculty
			// 
			this->manageFaculty->Controls->Add(this->btnDeleteFaculty);
			this->manageFaculty->Controls->Add(this->btnEditFaculty);
			this->manageFaculty->Controls->Add(this->btnAddFaculty);
			this->manageFaculty->Controls->Add(this->dataGridView2);
			this->manageFaculty->Location = System::Drawing::Point(4, 25);
			this->manageFaculty->Name = L"manageFaculty";
			this->manageFaculty->Padding = System::Windows::Forms::Padding(3);
			this->manageFaculty->Size = System::Drawing::Size(708, 552);
			this->manageFaculty->TabIndex = 1;
			this->manageFaculty->Text = L"Manage Faculty";
			this->manageFaculty->UseVisualStyleBackColor = true;
			this->manageFaculty->Click += gcnew System::EventHandler(this, &AdminDashboard::manageFaculty_Click);
			// 
			// btnDeleteFaculty
			// 
			this->btnDeleteFaculty->Location = System::Drawing::Point(401, 402);
			this->btnDeleteFaculty->Name = L"btnDeleteFaculty";
			this->btnDeleteFaculty->Size = System::Drawing::Size(108, 48);
			this->btnDeleteFaculty->TabIndex = 6;
			this->btnDeleteFaculty->Text = L"Delete Faculty";
			this->btnDeleteFaculty->UseVisualStyleBackColor = true;
			// 
			// btnEditFaculty
			// 
			this->btnEditFaculty->Location = System::Drawing::Point(278, 402);
			this->btnEditFaculty->Name = L"btnEditFaculty";
			this->btnEditFaculty->Size = System::Drawing::Size(108, 48);
			this->btnEditFaculty->TabIndex = 5;
			this->btnEditFaculty->Text = L"Edit Faculty";
			this->btnEditFaculty->UseVisualStyleBackColor = true;
			// 
			// btnAddFaculty
			// 
			this->btnAddFaculty->Location = System::Drawing::Point(155, 402);
			this->btnAddFaculty->Name = L"btnAddFaculty";
			this->btnAddFaculty->Size = System::Drawing::Size(108, 48);
			this->btnAddFaculty->TabIndex = 4;
			this->btnAddFaculty->Text = L"Add Faculty";
			this->btnAddFaculty->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(3, 40);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(692, 325);
			this->dataGridView2->TabIndex = 1;
			// 
			// managaCourses
			// 
			this->managaCourses->Controls->Add(this->btnDeleteCourse);
			this->managaCourses->Controls->Add(this->btnEditCourse);
			this->managaCourses->Controls->Add(this->btnAddCourse);
			this->managaCourses->Controls->Add(this->dataGridView3);
			this->managaCourses->Location = System::Drawing::Point(4, 25);
			this->managaCourses->Name = L"managaCourses";
			this->managaCourses->Size = System::Drawing::Size(708, 552);
			this->managaCourses->TabIndex = 2;
			this->managaCourses->Text = L"Manage Courses";
			this->managaCourses->UseVisualStyleBackColor = true;
			// 
			// btnDeleteCourse
			// 
			this->btnDeleteCourse->Location = System::Drawing::Point(412, 413);
			this->btnDeleteCourse->Name = L"btnDeleteCourse";
			this->btnDeleteCourse->Size = System::Drawing::Size(108, 48);
			this->btnDeleteCourse->TabIndex = 9;
			this->btnDeleteCourse->Text = L"Delete Course";
			this->btnDeleteCourse->UseVisualStyleBackColor = true;
			// 
			// btnEditCourse
			// 
			this->btnEditCourse->Location = System::Drawing::Point(289, 413);
			this->btnEditCourse->Name = L"btnEditCourse";
			this->btnEditCourse->Size = System::Drawing::Size(108, 48);
			this->btnEditCourse->TabIndex = 8;
			this->btnEditCourse->Text = L"Edit Course";
			this->btnEditCourse->UseVisualStyleBackColor = true;
			// 
			// btnAddCourse
			// 
			this->btnAddCourse->Location = System::Drawing::Point(166, 413);
			this->btnAddCourse->Name = L"btnAddCourse";
			this->btnAddCourse->Size = System::Drawing::Size(108, 48);
			this->btnAddCourse->TabIndex = 7;
			this->btnAddCourse->Text = L"Add Course";
			this->btnAddCourse->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(6, 44);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(692, 331);
			this->dataGridView3->TabIndex = 1;
			// 
			// generateReport
			// 
			this->generateReport->Controls->Add(this->btnSaveReport);
			this->generateReport->Controls->Add(this->dataGridView4);
			this->generateReport->Location = System::Drawing::Point(4, 25);
			this->generateReport->Name = L"generateReport";
			this->generateReport->Size = System::Drawing::Size(708, 552);
			this->generateReport->TabIndex = 3;
			this->generateReport->Text = L"Generate Report";
			this->generateReport->UseVisualStyleBackColor = true;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(6, 17);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(692, 331);
			this->dataGridView4->TabIndex = 2;
			// 
			// manageFinancial
			// 
			this->manageFinancial->Controls->Add(this->btnDelete);
			this->manageFinancial->Controls->Add(this->btnEdit);
			this->manageFinancial->Controls->Add(this->btnAdd);
			this->manageFinancial->Controls->Add(this->dataGridView5);
			this->manageFinancial->Location = System::Drawing::Point(4, 25);
			this->manageFinancial->Name = L"manageFinancial";
			this->manageFinancial->Size = System::Drawing::Size(708, 552);
			this->manageFinancial->TabIndex = 4;
			this->manageFinancial->Text = L"Manage Financial";
			this->manageFinancial->UseVisualStyleBackColor = true;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(412, 397);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(108, 48);
			this->btnDelete->TabIndex = 13;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// btnEdit
			// 
			this->btnEdit->Location = System::Drawing::Point(289, 397);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(108, 48);
			this->btnEdit->TabIndex = 12;
			this->btnEdit->Text = L"Edit";
			this->btnEdit->UseVisualStyleBackColor = true;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(166, 397);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(108, 48);
			this->btnAdd->TabIndex = 11;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(6, 28);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(692, 331);
			this->dataGridView5->TabIndex = 10;
			// 
			// btnSaveReport
			// 
			this->btnSaveReport->Location = System::Drawing::Point(263, 391);
			this->btnSaveReport->Name = L"btnSaveReport";
			this->btnSaveReport->Size = System::Drawing::Size(108, 48);
			this->btnSaveReport->TabIndex = 12;
			this->btnSaveReport->Text = L"Save Report";
			this->btnSaveReport->UseVisualStyleBackColor = true;
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(718, 612);
			this->Controls->Add(this->manage);
			this->Name = L"AdminDashboard";
			this->Text = L"AdminDashboard";
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
			this->manage->ResumeLayout(false);
			this->manageStudents->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->manageFaculty->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->managaCourses->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->generateReport->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->manageFinancial->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void manageFaculty_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void AdminDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	// Establish a connection using MySQL
	MySqlConnection^ connection = DatabaseConnection::GetConnection(); // Using the static method to get the connection

	// Load students
	MySqlDataAdapter^ studentAdapter = gcnew MySqlDataAdapter("SELECT * FROM Students", connection);
	DataTable^ studentTable = gcnew DataTable();
	studentAdapter->Fill(studentTable);
	dataGridView1->DataSource = studentTable;  

	// Load faculty
	MySqlDataAdapter^ facultyAdapter = gcnew MySqlDataAdapter("SELECT * FROM Faculty", connection);
	DataTable^ facultyTable = gcnew DataTable();
	facultyAdapter->Fill(facultyTable);
	dataGridView2->DataSource = facultyTable;  

	// Load courses
	MySqlDataAdapter^ courseAdapter = gcnew MySqlDataAdapter("SELECT * FROM Courses", connection);
	DataTable^ courseTable = gcnew DataTable();
	courseAdapter->Fill(courseTable);
	dataGridView3->DataSource = courseTable;  
}

};
}
