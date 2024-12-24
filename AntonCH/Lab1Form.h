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
	/// Сводка для Lab1Form
	/// </summary>
	public ref class Lab1Form : public System::Windows::Forms::Form
	{
	public:
		Lab1Form(void)
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
		~Lab1Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ XTB;
	private: System::Windows::Forms::TextBox^ YTB;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ STB;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ FTB;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ A1TB;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ A2TB;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ A3TB;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ A4TB;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ A5TB;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ A6TB;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ A7TB;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ A8TB;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ BackBtn;
	private: System::Windows::Forms::Button^ SolveBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Lab1Form::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->XTB = (gcnew System::Windows::Forms::TextBox());
			this->YTB = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->STB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->FTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->A1TB = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->A2TB = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->A3TB = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->A4TB = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->A5TB = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->A6TB = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->A7TB = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->A8TB = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->SolveBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(590, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 148);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"x =";
			// 
			// XTB
			// 
			this->XTB->Location = System::Drawing::Point(39, 145);
			this->XTB->Name = L"XTB";
			this->XTB->Size = System::Drawing::Size(126, 20);
			this->XTB->TabIndex = 2;
			this->XTB->Text = L"0,335";
			this->XTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab1Form::XTB_KeyPress);
			// 
			// YTB
			// 
			this->YTB->Location = System::Drawing::Point(39, 171);
			this->YTB->Name = L"YTB";
			this->YTB->Size = System::Drawing::Size(126, 20);
			this->YTB->TabIndex = 4;
			this->YTB->Text = L"0,025";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 174);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"y =";
			// 
			// STB
			// 
			this->STB->Enabled = false;
			this->STB->Location = System::Drawing::Point(39, 294);
			this->STB->Name = L"STB";
			this->STB->Size = System::Drawing::Size(126, 20);
			this->STB->TabIndex = 6;
			this->STB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab1Form::STB_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 297);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"s =";
			// 
			// FTB
			// 
			this->FTB->Enabled = false;
			this->FTB->Location = System::Drawing::Point(39, 320);
			this->FTB->Name = L"FTB";
			this->FTB->Size = System::Drawing::Size(126, 20);
			this->FTB->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 323);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"f =";
			// 
			// A1TB
			// 
			this->A1TB->Enabled = false;
			this->A1TB->Location = System::Drawing::Point(442, 145);
			this->A1TB->Name = L"A1TB";
			this->A1TB->Size = System::Drawing::Size(160, 20);
			this->A1TB->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(181, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Целая часть f =";
			// 
			// A2TB
			// 
			this->A2TB->Enabled = false;
			this->A2TB->Location = System::Drawing::Point(442, 171);
			this->A2TB->Name = L"A2TB";
			this->A2TB->Size = System::Drawing::Size(160, 20);
			this->A2TB->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(181, 174);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(98, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Дробная часть f =";
			// 
			// A3TB
			// 
			this->A3TB->Enabled = false;
			this->A3TB->Location = System::Drawing::Point(442, 197);
			this->A3TB->Name = L"A3TB";
			this->A3TB->Size = System::Drawing::Size(160, 20);
			this->A3TB->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(181, 200);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Округление вверх f =";
			// 
			// A4TB
			// 
			this->A4TB->Enabled = false;
			this->A4TB->Location = System::Drawing::Point(442, 223);
			this->A4TB->Name = L"A4TB";
			this->A4TB->Size = System::Drawing::Size(160, 20);
			this->A4TB->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(181, 226);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(109, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Округление вниз f =";
			// 
			// A5TB
			// 
			this->A5TB->Enabled = false;
			this->A5TB->Location = System::Drawing::Point(442, 249);
			this->A5TB->Name = L"A5TB";
			this->A5TB->Size = System::Drawing::Size(160, 20);
			this->A5TB->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(181, 252);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(210, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Префиксный инкремент целой части f =";
			// 
			// A6TB
			// 
			this->A6TB->Enabled = false;
			this->A6TB->Location = System::Drawing::Point(442, 275);
			this->A6TB->Name = L"A6TB";
			this->A6TB->Size = System::Drawing::Size(160, 20);
			this->A6TB->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(181, 278);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(227, 13);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Постфиксный инкремент дробной части f =";
			// 
			// A7TB
			// 
			this->A7TB->Enabled = false;
			this->A7TB->Location = System::Drawing::Point(442, 301);
			this->A7TB->Name = L"A7TB";
			this->A7TB->Size = System::Drawing::Size(160, 20);
			this->A7TB->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(181, 304);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(233, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Значение целой части после приращения f =";
			// 
			// A8TB
			// 
			this->A8TB->Enabled = false;
			this->A8TB->Location = System::Drawing::Point(442, 327);
			this->A8TB->Name = L"A8TB";
			this->A8TB->Size = System::Drawing::Size(160, 20);
			this->A8TB->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(181, 330);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(245, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Значение дробной части после приращения f =";
			// 
			// BackBtn
			// 
			this->BackBtn->Location = System::Drawing::Point(12, 12);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(75, 23);
			this->BackBtn->TabIndex = 25;
			this->BackBtn->Text = L"Назад";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &Lab1Form::BackBtn_Click);
			// 
			// SolveBtn
			// 
			this->SolveBtn->Location = System::Drawing::Point(39, 223);
			this->SolveBtn->Name = L"SolveBtn";
			this->SolveBtn->Size = System::Drawing::Size(115, 42);
			this->SolveBtn->TabIndex = 26;
			this->SolveBtn->Text = L"Посчитать";
			this->SolveBtn->UseVisualStyleBackColor = true;
			this->SolveBtn->Click += gcnew System::EventHandler(this, &Lab1Form::SolveBtn_Click);
			// 
			// Lab1Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(617, 358);
			this->Controls->Add(this->SolveBtn);
			this->Controls->Add(this->BackBtn);
			this->Controls->Add(this->A8TB);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->A7TB);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->A6TB);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->A5TB);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->A4TB);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->A3TB);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->A2TB);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->A1TB);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->FTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->STB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->YTB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->XTB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Lab1Form";
			this->Text = L"Лабораторная работа 1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void SolveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, y, s, f;
		try  //Начало блока обработки исключения
		{
			//x = Convert::ToDouble(XTB->Text->Replace('.', ','));
			//y = Convert::ToDouble(YTB->Text->Replace('.', ','));
			x = AntonCHDLL::Class1::Vvod(XTB);
			y = AntonCHDLL::Class1::Vvod(YTB);
			//double s = 1 + x + pow(x, 2)/2 + pow(x, 3) / 6 + pow(x, 4) / 24;
			//double f = x * (sin(pow(x, 3)) + pow(cos(y), 2));
			//Вывод данных
			s = 0;
			f = 0;
			AntonCHDLL::Class1::FindSF(&s, &f, x, y);
			AntonCHDLL::Class1::Vivod(s, STB);
			AntonCHDLL::Class1::Vivod(f, FTB);
			//lbl_z_answer->Text = Convert::ToString(z);
			//lbl_w_answer->Text = Convert::ToString(w);


			int intf = floor(f);
			double doublef = f - intf;
			AntonCHDLL::Class1::Vivod(intf, A1TB);
			AntonCHDLL::Class1::Vivod(doublef, A2TB);
			AntonCHDLL::Class1::Vivod(ceil(f), A3TB);
			AntonCHDLL::Class1::Vivod(floor(f), A4TB);
			AntonCHDLL::Class1::Vivod(++intf, A5TB);
			AntonCHDLL::Class1::Vivod(doublef++, A6TB);
			AntonCHDLL::Class1::Vivod(intf, A7TB);
			AntonCHDLL::Class1::Vivod(doublef, A8TB);

		}
		catch (System::FormatException^ ex)  //Обрабатываем ошибку исключения
		{
			MessageBox::Show("Ошибка при вводе данных. Введите число!", "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}}
	private: System::Void XTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '.') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void STB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '.') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
};
}
