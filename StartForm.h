#pragma once

#include "Lab1Form.h"
#include "PoshDetForm.h"
#include "Lab2Form.h"
#include "Lab3Form.h"

namespace AntonCH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Lab3Btn;
	private: System::Windows::Forms::Button^ Lab2Btn;
	private: System::Windows::Forms::Button^ Lab1Btn;
	private: System::Windows::Forms::Button^ PoshDetBtn;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Lab3Btn = (gcnew System::Windows::Forms::Button());
			this->Lab2Btn = (gcnew System::Windows::Forms::Button());
			this->Lab1Btn = (gcnew System::Windows::Forms::Button());
			this->PoshDetBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label3->Location = System::Drawing::Point(380, 115);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 18);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Лабораторные работы";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label8->Location = System::Drawing::Point(421, 568);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 18);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Москва 2024г.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label7->Location = System::Drawing::Point(431, 538);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 18);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Вариант 3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label6->Location = System::Drawing::Point(547, 330);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(410, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Проверил: доцент кафедры \"Информатика\" Гуриков С.Р.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label5->Location = System::Drawing::Point(547, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(262, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Подготовил: Чукарин А. А. БМИ2301";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label4->Location = System::Drawing::Point(229, 149);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(462, 18);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Дисциплина: Информационные технологии и программирование";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label2->Location = System::Drawing::Point(375, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(185, 18);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Кафедра \"Информатика\"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
			this->label1->Location = System::Drawing::Point(154, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(668, 22);
			this->label1->TabIndex = 13;
			this->label1->Text = L"\"МОСКОВСКИЙ ТЕХНИЧЕСКИЙ УНИВЕРСИТЕТ СВЯЗИ И ИНФОРМАТИКИ\"";
			// 
			// Lab3Btn
			// 
			this->Lab3Btn->Location = System::Drawing::Point(22, 471);
			this->Lab3Btn->Name = L"Lab3Btn";
			this->Lab3Btn->Size = System::Drawing::Size(154, 31);
			this->Lab3Btn->TabIndex = 23;
			this->Lab3Btn->Text = L"Лабораторная работа 3";
			this->Lab3Btn->UseVisualStyleBackColor = true;
			this->Lab3Btn->Click += gcnew System::EventHandler(this, &StartForm::Lab3Btn_Click);
			// 
			// Lab2Btn
			// 
			this->Lab2Btn->Location = System::Drawing::Point(22, 434);
			this->Lab2Btn->Name = L"Lab2Btn";
			this->Lab2Btn->Size = System::Drawing::Size(154, 31);
			this->Lab2Btn->TabIndex = 22;
			this->Lab2Btn->Text = L"Лабораторная работа 2";
			this->Lab2Btn->UseVisualStyleBackColor = true;
			this->Lab2Btn->Click += gcnew System::EventHandler(this, &StartForm::Lab2Btn_Click);
			// 
			// Lab1Btn
			// 
			this->Lab1Btn->Location = System::Drawing::Point(22, 360);
			this->Lab1Btn->Name = L"Lab1Btn";
			this->Lab1Btn->Size = System::Drawing::Size(154, 31);
			this->Lab1Btn->TabIndex = 21;
			this->Lab1Btn->Text = L"Лабораторная работа 1";
			this->Lab1Btn->UseVisualStyleBackColor = true;
			this->Lab1Btn->Click += gcnew System::EventHandler(this, &StartForm::Lab1Btn_Click);
			// 
			// PoshDetBtn
			// 
			this->PoshDetBtn->Location = System::Drawing::Point(22, 397);
			this->PoshDetBtn->Name = L"PoshDetBtn";
			this->PoshDetBtn->Size = System::Drawing::Size(154, 31);
			this->PoshDetBtn->TabIndex = 24;
			this->PoshDetBtn->Text = L"Пошаговая детализация";
			this->PoshDetBtn->UseVisualStyleBackColor = true;
			this->PoshDetBtn->Click += gcnew System::EventHandler(this, &StartForm::PoshDetBtn_Click);
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(959, 594);
			this->Controls->Add(this->PoshDetBtn);
			this->Controls->Add(this->Lab3Btn);
			this->Controls->Add(this->Lab2Btn);
			this->Controls->Add(this->Lab1Btn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StartForm";
			this->Text = L"StartForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Lab1Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab1Form^ f = gcnew Lab1Form();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void PoshDetBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		PoshDetForm^ f = gcnew PoshDetForm();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void Lab2Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab2Form^ f = gcnew Lab2Form();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
	private: System::Void Lab3Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Lab3Form^ f = gcnew Lab3Form();
		f->Owner = this;
		f->Show();
		this->Hide();
	}
};
}
