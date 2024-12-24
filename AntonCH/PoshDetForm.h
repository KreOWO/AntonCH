#pragma once

#include <cmath>

namespace AntonCH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace AntonCHDLL;

	/// <summary>
	/// Сводка для PoshDetForm
	/// </summary>
	public ref class PoshDetForm : public System::Windows::Forms::Form
	{
	public:
		PoshDetForm(void)
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
		~PoshDetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ BackBtn;
	private: System::Windows::Forms::Button^ SolveBtn;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ ABTB;
	private: System::Windows::Forms::TextBox^ BCTB;
	private: System::Windows::Forms::TextBox^ CATB;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PoshDetForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->SolveBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ABTB = (gcnew System::Windows::Forms::TextBox());
			this->BCTB = (gcnew System::Windows::Forms::TextBox());
			this->CATB = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 55);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(700, 114);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// BackBtn
			// 
			this->BackBtn->Location = System::Drawing::Point(12, 12);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(75, 23);
			this->BackBtn->TabIndex = 26;
			this->BackBtn->Text = L"Назад";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &PoshDetForm::BackBtn_Click);
			// 
			// SolveBtn
			// 
			this->SolveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->SolveBtn->Location = System::Drawing::Point(233, 244);
			this->SolveBtn->Name = L"SolveBtn";
			this->SolveBtn->Size = System::Drawing::Size(115, 42);
			this->SolveBtn->TabIndex = 27;
			this->SolveBtn->Text = L"Посчитать";
			this->SolveBtn->UseVisualStyleBackColor = true;
			this->SolveBtn->Click += gcnew System::EventHandler(this, &PoshDetForm::SolveBtn_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label1->Location = System::Drawing::Point(35, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 20);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Вектор a = (2; 5)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(35, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(130, 20);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Вектор b = (7; 6)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(35, 302);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 20);
			this->label3->TabIndex = 30;
			this->label3->Text = L"Вектор a = (9; 3)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(417, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 20);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Угол между a и b =";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label5->Location = System::Drawing::Point(417, 244);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 20);
			this->label5->TabIndex = 32;
			this->label5->Text = L"Угол между b и c =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label6->Location = System::Drawing::Point(417, 302);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 20);
			this->label6->TabIndex = 33;
			this->label6->Text = L"Угол между c и a =";
			// 
			// ABTB
			// 
			this->ABTB->Enabled = false;
			this->ABTB->Location = System::Drawing::Point(573, 191);
			this->ABTB->Name = L"ABTB";
			this->ABTB->Size = System::Drawing::Size(100, 20);
			this->ABTB->TabIndex = 34;
			// 
			// BCTB
			// 
			this->BCTB->Enabled = false;
			this->BCTB->Location = System::Drawing::Point(573, 244);
			this->BCTB->Name = L"BCTB";
			this->BCTB->Size = System::Drawing::Size(100, 20);
			this->BCTB->TabIndex = 35;
			// 
			// CATB
			// 
			this->CATB->Enabled = false;
			this->CATB->Location = System::Drawing::Point(572, 302);
			this->CATB->Name = L"CATB";
			this->CATB->Size = System::Drawing::Size(100, 20);
			this->CATB->TabIndex = 36;
			// 
			// PoshDetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 348);
			this->Controls->Add(this->CATB);
			this->Controls->Add(this->BCTB);
			this->Controls->Add(this->ABTB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->SolveBtn);
			this->Controls->Add(this->BackBtn);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PoshDetForm";
			this->Text = L"PoshDetForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	
#pragma endregion
	private: System::Void SolveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// a = (2; 5), b = (7; 6), c = (9; 3)
		double ab, bc, ca;
		ab = AntonCHDLL::Class1::get_ugol(2, 5, 7, 6);
		bc = AntonCHDLL::Class1::get_ugol(7, 6, 9, 3);
		ca = AntonCHDLL::Class1::get_ugol(9, 3, 2, 5);
		AntonCHDLL::Class1::Vivod(ab, ABTB);
		AntonCHDLL::Class1::Vivod(bc, BCTB);
		AntonCHDLL::Class1::Vivod(ca, CATB);
		
	}
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
};
}
