#pragma once

#include <cmath>

namespace AntonCH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab2Form
	/// </summary>
	public ref class Lab2Form : public System::Windows::Forms::Form
	{
	public:
		Lab2Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lab2Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ StartDG;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ ArrLenTB;
	private: System::Windows::Forms::Button^ SolveBtn;


	private: System::Windows::Forms::DataGridView^ ResultDG;
	private: System::Windows::Forms::TextBox^ ResultTB;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ GenerateBtn;
	private: System::Windows::Forms::Button^ DbWriteBtn;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab2Form::typeid));
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->StartDG = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ArrLenTB = (gcnew System::Windows::Forms::TextBox());
			this->SolveBtn = (gcnew System::Windows::Forms::Button());
			this->ResultDG = (gcnew System::Windows::Forms::DataGridView());
			this->ResultTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->GenerateBtn = (gcnew System::Windows::Forms::Button());
			this->DbWriteBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartDG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultDG))->BeginInit();
			this->SuspendLayout();
			// 
			// BackBtn
			// 
			this->BackBtn->Location = System::Drawing::Point(12, 12);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(75, 23);
			this->BackBtn->TabIndex = 26;
			this->BackBtn->Text = L"Назад";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &Lab2Form::BackBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(646, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			// 
			// StartDG
			// 
			this->StartDG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->StartDG->Location = System::Drawing::Point(12, 181);
			this->StartDG->Name = L"StartDG";
			this->StartDG->RowHeadersVisible = false;
			this->StartDG->Size = System::Drawing::Size(396, 64);
			this->StartDG->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(428, 190);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Количество элементов";
			// 
			// ArrLenTB
			// 
			this->ArrLenTB->Location = System::Drawing::Point(558, 187);
			this->ArrLenTB->Name = L"ArrLenTB";
			this->ArrLenTB->Size = System::Drawing::Size(100, 20);
			this->ArrLenTB->TabIndex = 30;
			this->ArrLenTB->Text = L"10";
			this->ArrLenTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab2Form::ArrLenTB_KeyPress);
			// 
			// SolveBtn
			// 
			this->SolveBtn->Location = System::Drawing::Point(555, 213);
			this->SolveBtn->Name = L"SolveBtn";
			this->SolveBtn->Size = System::Drawing::Size(103, 32);
			this->SolveBtn->TabIndex = 31;
			this->SolveBtn->Text = L"Обработать";
			this->SolveBtn->UseVisualStyleBackColor = true;
			this->SolveBtn->Click += gcnew System::EventHandler(this, &Lab2Form::SolveBtn_Click);
			// 
			// ResultDG
			// 
			this->ResultDG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->ResultDG->Location = System::Drawing::Point(12, 286);
			this->ResultDG->Name = L"ResultDG";
			this->ResultDG->RowHeadersVisible = false;
			this->ResultDG->Size = System::Drawing::Size(396, 64);
			this->ResultDG->TabIndex = 32;
			// 
			// ResultTB
			// 
			this->ResultTB->Location = System::Drawing::Point(489, 330);
			this->ResultTB->Name = L"ResultTB";
			this->ResultTB->Size = System::Drawing::Size(100, 20);
			this->ResultTB->TabIndex = 34;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(447, 286);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Количество двузначных элементов,";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(457, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 13);
			this->label3->TabIndex = 35;
			this->label3->Text = L"сумма цифр которых кратна 5";
			// 
			// GenerateBtn
			// 
			this->GenerateBtn->Location = System::Drawing::Point(431, 213);
			this->GenerateBtn->Name = L"GenerateBtn";
			this->GenerateBtn->Size = System::Drawing::Size(103, 32);
			this->GenerateBtn->TabIndex = 36;
			this->GenerateBtn->Text = L"Сгенерировать";
			this->GenerateBtn->UseVisualStyleBackColor = true;
			this->GenerateBtn->Click += gcnew System::EventHandler(this, &Lab2Form::GenerateBTN_Click);
			// 
			// DbWriteBtn
			// 
			this->DbWriteBtn->Location = System::Drawing::Point(93, 12);
			this->DbWriteBtn->Name = L"DbWriteBtn";
			this->DbWriteBtn->Size = System::Drawing::Size(125, 23);
			this->DbWriteBtn->TabIndex = 129;
			this->DbWriteBtn->Text = L"Записать в БД";
			this->DbWriteBtn->UseVisualStyleBackColor = true;
			this->DbWriteBtn->Click += gcnew System::EventHandler(this, &Lab2Form::DbWriteBtn_Click);
			// 
			// Lab2Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 376);
			this->Controls->Add(this->DbWriteBtn);
			this->Controls->Add(this->GenerateBtn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ResultTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ResultDG);
			this->Controls->Add(this->SolveBtn);
			this->Controls->Add(this->ArrLenTB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->StartDG);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->BackBtn);
			this->Name = L"Lab2Form";
			this->Text = L"Лабораторная работа 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StartDG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultDG))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void ArrLenTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void SolveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLenTB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, StartDG);
		int res = AntonCHDLL::Class1::L2_find_usl_colvo(arr, arr_len);
		AntonCHDLL::Class1::Vivod(res, ResultTB);
		int newarr_len = AntonCHDLL::Class1::L2_find_newarr_len(arr, arr_len, res);
		int* newarr = new int[newarr_len] {};
		AntonCHDLL::Class1::L2_fill_newarr(arr, arr_len, res, newarr);
		AntonCHDLL::Class1::output_mas(newarr, newarr_len, ResultDG);

	}
	private: System::Void GenerateBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLenTB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::FillArr(arr, arr_len, -100, 100);
		AntonCHDLL::Class1::output_mas(arr, arr_len, StartDG);
	}
	private: System::Void DbWriteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int len1 = StartDG->Columns->Count;
		int* arr1 = new int[len1] {};
		AntonCHDLL::Class1::input_mas(arr1, len1, StartDG);
		int len2 = ResultDG->Columns->Count;
		int* arr2 = new int[len2] {};
		AntonCHDLL::Class1::input_mas(arr2, len2, ResultDG);

		AntonCHDLL::Class1::add();
		AntonCHDLL::Class1::add_struct2();
		AntonCHDLL::Class1::add_zap2(arr1, arr2, len1, len2);
		AntonCHDLL::Class1::ZapisWord2(arr1, arr2, len1, len2);
		AntonCHDLL::Class1::ZapisExcel2(arr1, arr2, len1, len2);
	}
};
}
