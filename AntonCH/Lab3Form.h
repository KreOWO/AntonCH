#pragma once

namespace AntonCH {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lab3Form
	/// </summary>
	public ref class Lab3Form : public System::Windows::Forms::Form
	{
	public:
		Lab3Form(void)
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
		~Lab3Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BackBtn;
	private: System::Windows::Forms::Button^ Generate3Btn;
	private: System::Windows::Forms::Button^ Solve3Btn;
	private: System::Windows::Forms::TextBox^ ArrLen3TB;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ Start3DG;
	private: System::Windows::Forms::DataGridView^ Result3DG;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ InsertValueTB;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ InsertIndexTB;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Generate4Btn;
	private: System::Windows::Forms::Button^ Solve4Btn;
	private: System::Windows::Forms::TextBox^ ArrLen4TB;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ Start4DG;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Answer4TB;
	private: System::Windows::Forms::Button^ Generate5Btn;
	private: System::Windows::Forms::Button^ Solve5Btn;
	private: System::Windows::Forms::TextBox^ ArrLen5TB;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ Start5DG;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ Answer5vTB;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ Answer5iTB;
	private: System::Windows::Forms::Button^ Generate6Btn;
	private: System::Windows::Forms::Button^ Solve6Btn;
	private: System::Windows::Forms::TextBox^ ArrLen6TB;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::DataGridView^ Start6DG;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ Generate7Btn;
	private: System::Windows::Forms::Button^ Solve7Btn;
	private: System::Windows::Forms::TextBox^ ArrLen7TB;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DataGridView^ Start7DG;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ Generate8Btn;
	private: System::Windows::Forms::Button^ Solve8Btn;
	private: System::Windows::Forms::TextBox^ ArrLen8TB;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::DataGridView^ Start8DG;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ Answer6vTB;
	private: System::Windows::Forms::TextBox^ Answer6iTB;
	private: System::Windows::Forms::TextBox^ Answer7iTB;
	private: System::Windows::Forms::TextBox^ Answer7vTB;
	private: System::Windows::Forms::TextBox^ Answer8iTB;
	private: System::Windows::Forms::TextBox^ Answer8vTB;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::DataGridView^ Result9DG;
	private: System::Windows::Forms::Button^ Generate9Btn;
	private: System::Windows::Forms::Button^ Solve9Btn;
	private: System::Windows::Forms::TextBox^ ArrLen9TB;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::DataGridView^ Start9DG;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::DataGridView^ Result10DG;
	private: System::Windows::Forms::Button^ Generate10Btn;
	private: System::Windows::Forms::Button^ Solve10Btn;
	private: System::Windows::Forms::TextBox^ ArrLen10TB;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::DataGridView^ Start10DG;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::DataGridView^ Result12DG;
	private: System::Windows::Forms::Button^ Generate12Btn;
	private: System::Windows::Forms::Button^ Solve12Btn;
	private: System::Windows::Forms::TextBox^ ArrLen12TB;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::DataGridView^ Start12DG;
private: System::Windows::Forms::Button^ DbWriteBtn;
private: System::Windows::Forms::Button^ SolveAllBtn;
private: System::Windows::Forms::Button^ GenerateAllBtn;
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
			this->BackBtn = (gcnew System::Windows::Forms::Button());
			this->Generate3Btn = (gcnew System::Windows::Forms::Button());
			this->Solve3Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen3TB = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Start3DG = (gcnew System::Windows::Forms::DataGridView());
			this->Result3DG = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->InsertValueTB = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->InsertIndexTB = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Generate4Btn = (gcnew System::Windows::Forms::Button());
			this->Solve4Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen4TB = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Start4DG = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Answer4TB = (gcnew System::Windows::Forms::TextBox());
			this->Generate5Btn = (gcnew System::Windows::Forms::Button());
			this->Solve5Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen5TB = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->Start5DG = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Answer5vTB = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->Answer5iTB = (gcnew System::Windows::Forms::TextBox());
			this->Generate6Btn = (gcnew System::Windows::Forms::Button());
			this->Solve6Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen6TB = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->Start6DG = (gcnew System::Windows::Forms::DataGridView());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Generate7Btn = (gcnew System::Windows::Forms::Button());
			this->Solve7Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen7TB = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Start7DG = (gcnew System::Windows::Forms::DataGridView());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->Generate8Btn = (gcnew System::Windows::Forms::Button());
			this->Solve8Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen8TB = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Start8DG = (gcnew System::Windows::Forms::DataGridView());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Answer6vTB = (gcnew System::Windows::Forms::TextBox());
			this->Answer6iTB = (gcnew System::Windows::Forms::TextBox());
			this->Answer7iTB = (gcnew System::Windows::Forms::TextBox());
			this->Answer7vTB = (gcnew System::Windows::Forms::TextBox());
			this->Answer8iTB = (gcnew System::Windows::Forms::TextBox());
			this->Answer8vTB = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Result9DG = (gcnew System::Windows::Forms::DataGridView());
			this->Generate9Btn = (gcnew System::Windows::Forms::Button());
			this->Solve9Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen9TB = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->Start9DG = (gcnew System::Windows::Forms::DataGridView());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->Result10DG = (gcnew System::Windows::Forms::DataGridView());
			this->Generate10Btn = (gcnew System::Windows::Forms::Button());
			this->Solve10Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen10TB = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->Start10DG = (gcnew System::Windows::Forms::DataGridView());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->Result12DG = (gcnew System::Windows::Forms::DataGridView());
			this->Generate12Btn = (gcnew System::Windows::Forms::Button());
			this->Solve12Btn = (gcnew System::Windows::Forms::Button());
			this->ArrLen12TB = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->Start12DG = (gcnew System::Windows::Forms::DataGridView());
			this->DbWriteBtn = (gcnew System::Windows::Forms::Button());
			this->SolveAllBtn = (gcnew System::Windows::Forms::Button());
			this->GenerateAllBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start3DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result3DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start4DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start5DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start6DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start7DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start8DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result9DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start9DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result10DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start10DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result12DG))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start12DG))->BeginInit();
			this->SuspendLayout();
			// 
			// BackBtn
			// 
			this->BackBtn->Location = System::Drawing::Point(12, 12);
			this->BackBtn->Name = L"BackBtn";
			this->BackBtn->Size = System::Drawing::Size(75, 23);
			this->BackBtn->TabIndex = 27;
			this->BackBtn->Text = L"Назад";
			this->BackBtn->UseVisualStyleBackColor = true;
			this->BackBtn->Click += gcnew System::EventHandler(this, &Lab3Form::BackBtn_Click);
			// 
			// Generate3Btn
			// 
			this->Generate3Btn->Location = System::Drawing::Point(596, 58);
			this->Generate3Btn->Name = L"Generate3Btn";
			this->Generate3Btn->Size = System::Drawing::Size(103, 32);
			this->Generate3Btn->TabIndex = 41;
			this->Generate3Btn->Text = L"Сгенерировать";
			this->Generate3Btn->UseVisualStyleBackColor = true;
			this->Generate3Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate3Btn_Click);
			// 
			// Solve3Btn
			// 
			this->Solve3Btn->Location = System::Drawing::Point(596, 90);
			this->Solve3Btn->Name = L"Solve3Btn";
			this->Solve3Btn->Size = System::Drawing::Size(103, 32);
			this->Solve3Btn->TabIndex = 40;
			this->Solve3Btn->Text = L"Обработать";
			this->Solve3Btn->UseVisualStyleBackColor = true;
			this->Solve3Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve3Btn_Click);
			// 
			// ArrLen3TB
			// 
			this->ArrLen3TB->Location = System::Drawing::Point(544, 59);
			this->ArrLen3TB->Name = L"ArrLen3TB";
			this->ArrLen3TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen3TB->TabIndex = 39;
			this->ArrLen3TB->Text = L"10";
			this->ArrLen3TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(414, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 13);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Количество элементов";
			// 
			// Start3DG
			// 
			this->Start3DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start3DG->Location = System::Drawing::Point(12, 58);
			this->Start3DG->Name = L"Start3DG";
			this->Start3DG->RowHeadersVisible = false;
			this->Start3DG->Size = System::Drawing::Size(396, 64);
			this->Start3DG->TabIndex = 37;
			// 
			// Result3DG
			// 
			this->Result3DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Result3DG->Location = System::Drawing::Point(717, 58);
			this->Result3DG->Name = L"Result3DG";
			this->Result3DG->RowHeadersVisible = false;
			this->Result3DG->Size = System::Drawing::Size(396, 64);
			this->Result3DG->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->Location = System::Drawing::Point(9, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(360, 17);
			this->label2->TabIndex = 43;
			this->label2->Text = L"3. ВСТАВКА ЭЛЕМЕНТОВ В ОДНОМЕРНЫЙ МАССИВ";
			// 
			// InsertValueTB
			// 
			this->InsertValueTB->Location = System::Drawing::Point(544, 80);
			this->InsertValueTB->Name = L"InsertValueTB";
			this->InsertValueTB->Size = System::Drawing::Size(35, 20);
			this->InsertValueTB->TabIndex = 45;
			this->InsertValueTB->Text = L"25";
			this->InsertValueTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::InsertValueTB_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(415, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 44;
			this->label3->Text = L"Вставляемый элемент";
			// 
			// InsertIndexTB
			// 
			this->InsertIndexTB->Location = System::Drawing::Point(544, 102);
			this->InsertIndexTB->Name = L"InsertIndexTB";
			this->InsertIndexTB->Size = System::Drawing::Size(35, 20);
			this->InsertIndexTB->TabIndex = 47;
			this->InsertIndexTB->Text = L"4";
			this->InsertIndexTB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(415, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 46;
			this->label4->Text = L"Индекс вставки";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label6->Location = System::Drawing::Point(9, 125);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(279, 17);
			this->label6->TabIndex = 54;
			this->label6->Text = L"4. ОПРЕДЕЛЕНИЕ НА МОНОТОННОСТЬ";
			// 
			// Generate4Btn
			// 
			this->Generate4Btn->Location = System::Drawing::Point(596, 145);
			this->Generate4Btn->Name = L"Generate4Btn";
			this->Generate4Btn->Size = System::Drawing::Size(103, 32);
			this->Generate4Btn->TabIndex = 59;
			this->Generate4Btn->Text = L"Сгенерировать";
			this->Generate4Btn->UseVisualStyleBackColor = true;
			this->Generate4Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate4Btn_Click);
			// 
			// Solve4Btn
			// 
			this->Solve4Btn->Location = System::Drawing::Point(596, 177);
			this->Solve4Btn->Name = L"Solve4Btn";
			this->Solve4Btn->Size = System::Drawing::Size(103, 32);
			this->Solve4Btn->TabIndex = 58;
			this->Solve4Btn->Text = L"Обработать";
			this->Solve4Btn->UseVisualStyleBackColor = true;
			this->Solve4Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve4Btn_Click);
			// 
			// ArrLen4TB
			// 
			this->ArrLen4TB->Location = System::Drawing::Point(544, 146);
			this->ArrLen4TB->Name = L"ArrLen4TB";
			this->ArrLen4TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen4TB->TabIndex = 57;
			this->ArrLen4TB->Text = L"10";
			this->ArrLen4TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(414, 147);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(124, 13);
			this->label8->TabIndex = 56;
			this->label8->Text = L"Количество элементов";
			// 
			// Start4DG
			// 
			this->Start4DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start4DG->Location = System::Drawing::Point(12, 145);
			this->Start4DG->Name = L"Start4DG";
			this->Start4DG->RowHeadersVisible = false;
			this->Start4DG->Size = System::Drawing::Size(396, 64);
			this->Start4DG->TabIndex = 55;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(782, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 13);
			this->label5->TabIndex = 61;
			this->label5->Text = L"Убывающая монотонность массива:";
			// 
			// Answer4TB
			// 
			this->Answer4TB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer4TB->Enabled = false;
			this->Answer4TB->Location = System::Drawing::Point(983, 145);
			this->Answer4TB->Name = L"Answer4TB";
			this->Answer4TB->Size = System::Drawing::Size(68, 20);
			this->Answer4TB->TabIndex = 60;
			this->Answer4TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Generate5Btn
			// 
			this->Generate5Btn->Location = System::Drawing::Point(596, 232);
			this->Generate5Btn->Name = L"Generate5Btn";
			this->Generate5Btn->Size = System::Drawing::Size(103, 32);
			this->Generate5Btn->TabIndex = 67;
			this->Generate5Btn->Text = L"Сгенерировать";
			this->Generate5Btn->UseVisualStyleBackColor = true;
			this->Generate5Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate5Btn_Click);
			// 
			// Solve5Btn
			// 
			this->Solve5Btn->Location = System::Drawing::Point(596, 264);
			this->Solve5Btn->Name = L"Solve5Btn";
			this->Solve5Btn->Size = System::Drawing::Size(103, 32);
			this->Solve5Btn->TabIndex = 66;
			this->Solve5Btn->Text = L"Обработать";
			this->Solve5Btn->UseVisualStyleBackColor = true;
			this->Solve5Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve5Btn_Click);
			// 
			// ArrLen5TB
			// 
			this->ArrLen5TB->Location = System::Drawing::Point(544, 233);
			this->ArrLen5TB->Name = L"ArrLen5TB";
			this->ArrLen5TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen5TB->TabIndex = 65;
			this->ArrLen5TB->Text = L"10";
			this->ArrLen5TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(414, 234);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 13);
			this->label9->TabIndex = 64;
			this->label9->Text = L"Количество элементов";
			// 
			// Start5DG
			// 
			this->Start5DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start5DG->Location = System::Drawing::Point(12, 232);
			this->Start5DG->Name = L"Start5DG";
			this->Start5DG->RowHeadersVisible = false;
			this->Start5DG->Size = System::Drawing::Size(396, 64);
			this->Start5DG->TabIndex = 63;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label10->Location = System::Drawing::Point(9, 212);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(416, 17);
			this->label10->TabIndex = 62;
			this->label10->Text = L"5. НАХОЖДЕНИЕ ПЕРВОГО ОТРИЦАТЕЛЬНОГО ЭЛЕМЕНТА";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(763, 258);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(238, 13);
			this->label14->TabIndex = 71;
			this->label14->Text = L"Значение первого отрицательного элемента:";
			// 
			// Answer5vTB
			// 
			this->Answer5vTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer5vTB->Enabled = false;
			this->Answer5vTB->Location = System::Drawing::Point(1009, 255);
			this->Answer5vTB->Name = L"Answer5vTB";
			this->Answer5vTB->Size = System::Drawing::Size(58, 20);
			this->Answer5vTB->TabIndex = 70;
			this->Answer5vTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(763, 232);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(228, 13);
			this->label13->TabIndex = 69;
			this->label13->Text = L"Индекс первого отрицательного элемента:";
			// 
			// Answer5iTB
			// 
			this->Answer5iTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer5iTB->Enabled = false;
			this->Answer5iTB->Location = System::Drawing::Point(1009, 229);
			this->Answer5iTB->Name = L"Answer5iTB";
			this->Answer5iTB->Size = System::Drawing::Size(58, 20);
			this->Answer5iTB->TabIndex = 68;
			this->Answer5iTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Generate6Btn
			// 
			this->Generate6Btn->Location = System::Drawing::Point(596, 319);
			this->Generate6Btn->Name = L"Generate6Btn";
			this->Generate6Btn->Size = System::Drawing::Size(103, 32);
			this->Generate6Btn->TabIndex = 77;
			this->Generate6Btn->Text = L"Сгенерировать";
			this->Generate6Btn->UseVisualStyleBackColor = true;
			this->Generate6Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate6Btn_Click);
			// 
			// Solve6Btn
			// 
			this->Solve6Btn->Location = System::Drawing::Point(596, 351);
			this->Solve6Btn->Name = L"Solve6Btn";
			this->Solve6Btn->Size = System::Drawing::Size(103, 32);
			this->Solve6Btn->TabIndex = 76;
			this->Solve6Btn->Text = L"Обработать";
			this->Solve6Btn->UseVisualStyleBackColor = true;
			this->Solve6Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve6Btn_Click);
			// 
			// ArrLen6TB
			// 
			this->ArrLen6TB->Location = System::Drawing::Point(544, 320);
			this->ArrLen6TB->Name = L"ArrLen6TB";
			this->ArrLen6TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen6TB->TabIndex = 75;
			this->ArrLen6TB->Text = L"10";
			this->ArrLen6TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(414, 321);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(124, 13);
			this->label12->TabIndex = 74;
			this->label12->Text = L"Количество элементов";
			// 
			// Start6DG
			// 
			this->Start6DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start6DG->Location = System::Drawing::Point(12, 319);
			this->Start6DG->Name = L"Start6DG";
			this->Start6DG->RowHeadersVisible = false;
			this->Start6DG->Size = System::Drawing::Size(396, 64);
			this->Start6DG->TabIndex = 73;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label15->Location = System::Drawing::Point(9, 299);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(367, 17);
			this->label15->TabIndex = 72;
			this->label15->Text = L"6. НАХОЖДЕНИЕ ПЕРВОГО НЕЧЕТНОГО ЭЛЕМЕНТА";
			// 
			// Generate7Btn
			// 
			this->Generate7Btn->Location = System::Drawing::Point(596, 406);
			this->Generate7Btn->Name = L"Generate7Btn";
			this->Generate7Btn->Size = System::Drawing::Size(103, 32);
			this->Generate7Btn->TabIndex = 85;
			this->Generate7Btn->Text = L"Сгенерировать";
			this->Generate7Btn->UseVisualStyleBackColor = true;
			this->Generate7Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate7Btn_Click);
			// 
			// Solve7Btn
			// 
			this->Solve7Btn->Location = System::Drawing::Point(596, 438);
			this->Solve7Btn->Name = L"Solve7Btn";
			this->Solve7Btn->Size = System::Drawing::Size(103, 32);
			this->Solve7Btn->TabIndex = 84;
			this->Solve7Btn->Text = L"Обработать";
			this->Solve7Btn->UseVisualStyleBackColor = true;
			this->Solve7Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve7Btn_Click);
			// 
			// ArrLen7TB
			// 
			this->ArrLen7TB->Location = System::Drawing::Point(544, 407);
			this->ArrLen7TB->Name = L"ArrLen7TB";
			this->ArrLen7TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen7TB->TabIndex = 83;
			this->ArrLen7TB->Text = L"10";
			this->ArrLen7TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(414, 408);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(124, 13);
			this->label18->TabIndex = 82;
			this->label18->Text = L"Количество элементов";
			// 
			// Start7DG
			// 
			this->Start7DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start7DG->Location = System::Drawing::Point(12, 406);
			this->Start7DG->Name = L"Start7DG";
			this->Start7DG->RowHeadersVisible = false;
			this->Start7DG->Size = System::Drawing::Size(396, 64);
			this->Start7DG->TabIndex = 81;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label19->Location = System::Drawing::Point(9, 386);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(422, 17);
			this->label19->TabIndex = 80;
			this->label19->Text = L"7. НАХОЖДЕНИЕ ПЕРВОГО ПОЛОЖИТЕЛЬНОГО ЭЛЕМЕНТА";
			// 
			// Generate8Btn
			// 
			this->Generate8Btn->Location = System::Drawing::Point(596, 493);
			this->Generate8Btn->Name = L"Generate8Btn";
			this->Generate8Btn->Size = System::Drawing::Size(103, 32);
			this->Generate8Btn->TabIndex = 93;
			this->Generate8Btn->Text = L"Сгенерировать";
			this->Generate8Btn->UseVisualStyleBackColor = true;
			this->Generate8Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate8Btn_Click);
			// 
			// Solve8Btn
			// 
			this->Solve8Btn->Location = System::Drawing::Point(596, 525);
			this->Solve8Btn->Name = L"Solve8Btn";
			this->Solve8Btn->Size = System::Drawing::Size(103, 32);
			this->Solve8Btn->TabIndex = 92;
			this->Solve8Btn->Text = L"Обработать";
			this->Solve8Btn->UseVisualStyleBackColor = true;
			this->Solve8Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve8Btn_Click);
			// 
			// ArrLen8TB
			// 
			this->ArrLen8TB->Location = System::Drawing::Point(544, 494);
			this->ArrLen8TB->Name = L"ArrLen8TB";
			this->ArrLen8TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen8TB->TabIndex = 91;
			this->ArrLen8TB->Text = L"10";
			this->ArrLen8TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(414, 495);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(124, 13);
			this->label22->TabIndex = 90;
			this->label22->Text = L"Количество элементов";
			// 
			// Start8DG
			// 
			this->Start8DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start8DG->Location = System::Drawing::Point(12, 493);
			this->Start8DG->Name = L"Start8DG";
			this->Start8DG->RowHeadersVisible = false;
			this->Start8DG->Size = System::Drawing::Size(396, 64);
			this->Start8DG->TabIndex = 89;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label23->Location = System::Drawing::Point(9, 473);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(348, 17);
			this->label23->TabIndex = 88;
			this->label23->Text = L"8. НАХОЖДЕНИЕ ПЕРВОГО ЧЕТНОГО ЭЛЕМЕНТА";
			// 
			// Answer6vTB
			// 
			this->Answer6vTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer6vTB->Enabled = false;
			this->Answer6vTB->Location = System::Drawing::Point(1009, 345);
			this->Answer6vTB->Name = L"Answer6vTB";
			this->Answer6vTB->Size = System::Drawing::Size(58, 20);
			this->Answer6vTB->TabIndex = 97;
			this->Answer6vTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Answer6iTB
			// 
			this->Answer6iTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer6iTB->Enabled = false;
			this->Answer6iTB->Location = System::Drawing::Point(1009, 319);
			this->Answer6iTB->Name = L"Answer6iTB";
			this->Answer6iTB->Size = System::Drawing::Size(58, 20);
			this->Answer6iTB->TabIndex = 96;
			this->Answer6iTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Answer7iTB
			// 
			this->Answer7iTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer7iTB->Enabled = false;
			this->Answer7iTB->Location = System::Drawing::Point(1009, 406);
			this->Answer7iTB->Name = L"Answer7iTB";
			this->Answer7iTB->Size = System::Drawing::Size(58, 20);
			this->Answer7iTB->TabIndex = 96;
			this->Answer7iTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Answer7vTB
			// 
			this->Answer7vTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer7vTB->Enabled = false;
			this->Answer7vTB->Location = System::Drawing::Point(1009, 432);
			this->Answer7vTB->Name = L"Answer7vTB";
			this->Answer7vTB->Size = System::Drawing::Size(58, 20);
			this->Answer7vTB->TabIndex = 97;
			this->Answer7vTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Answer8iTB
			// 
			this->Answer8iTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer8iTB->Enabled = false;
			this->Answer8iTB->Location = System::Drawing::Point(1009, 493);
			this->Answer8iTB->Name = L"Answer8iTB";
			this->Answer8iTB->Size = System::Drawing::Size(58, 20);
			this->Answer8iTB->TabIndex = 96;
			this->Answer8iTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Answer8vTB
			// 
			this->Answer8vTB->BackColor = System::Drawing::SystemColors::Window;
			this->Answer8vTB->Enabled = false;
			this->Answer8vTB->Location = System::Drawing::Point(1009, 519);
			this->Answer8vTB->Name = L"Answer8vTB";
			this->Answer8vTB->Size = System::Drawing::Size(58, 20);
			this->Answer8vTB->TabIndex = 97;
			this->Answer8vTB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(760, 434);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(241, 13);
			this->label7->TabIndex = 99;
			this->label7->Text = L"Значение первого положительного элемента:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(760, 408);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(231, 13);
			this->label11->TabIndex = 98;
			this->label11->Text = L"Индекс первого положительного элемента:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(791, 347);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(208, 13);
			this->label16->TabIndex = 101;
			this->label16->Text = L"Значение первого нечетного элемента:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(791, 321);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(198, 13);
			this->label17->TabIndex = 100;
			this->label17->Text = L"Индекс первого нечетного элемента:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(791, 521);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(196, 13);
			this->label20->TabIndex = 103;
			this->label20->Text = L"Значение первого четного элемента:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(791, 495);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(186, 13);
			this->label21->TabIndex = 102;
			this->label21->Text = L"Индекс первого четного элемента:";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label27->Location = System::Drawing::Point(9, 560);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(271, 17);
			this->label27->TabIndex = 110;
			this->label27->Text = L"9. СОРТИРОВКА ПРОСТОЙ ВСТАВКОЙ";
			// 
			// Result9DG
			// 
			this->Result9DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Result9DG->Location = System::Drawing::Point(717, 580);
			this->Result9DG->Name = L"Result9DG";
			this->Result9DG->RowHeadersVisible = false;
			this->Result9DG->Size = System::Drawing::Size(396, 64);
			this->Result9DG->TabIndex = 109;
			// 
			// Generate9Btn
			// 
			this->Generate9Btn->Location = System::Drawing::Point(596, 580);
			this->Generate9Btn->Name = L"Generate9Btn";
			this->Generate9Btn->Size = System::Drawing::Size(103, 32);
			this->Generate9Btn->TabIndex = 108;
			this->Generate9Btn->Text = L"Сгенерировать";
			this->Generate9Btn->UseVisualStyleBackColor = true;
			this->Generate9Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate9Btn_Click);
			// 
			// Solve9Btn
			// 
			this->Solve9Btn->Location = System::Drawing::Point(596, 612);
			this->Solve9Btn->Name = L"Solve9Btn";
			this->Solve9Btn->Size = System::Drawing::Size(103, 32);
			this->Solve9Btn->TabIndex = 107;
			this->Solve9Btn->Text = L"Обработать";
			this->Solve9Btn->UseVisualStyleBackColor = true;
			this->Solve9Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve9Btn_Click);
			// 
			// ArrLen9TB
			// 
			this->ArrLen9TB->Location = System::Drawing::Point(544, 581);
			this->ArrLen9TB->Name = L"ArrLen9TB";
			this->ArrLen9TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen9TB->TabIndex = 106;
			this->ArrLen9TB->Text = L"10";
			this->ArrLen9TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(414, 582);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(124, 13);
			this->label28->TabIndex = 105;
			this->label28->Text = L"Количество элементов";
			// 
			// Start9DG
			// 
			this->Start9DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start9DG->Location = System::Drawing::Point(12, 580);
			this->Start9DG->Name = L"Start9DG";
			this->Start9DG->RowHeadersVisible = false;
			this->Start9DG->Size = System::Drawing::Size(396, 64);
			this->Start9DG->TabIndex = 104;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label24->Location = System::Drawing::Point(9, 647);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(309, 17);
			this->label24->TabIndex = 117;
			this->label24->Text = L"10. СОРТИРОВКА БИНАРНЫМИ ВСТАВКАМИ";
			// 
			// Result10DG
			// 
			this->Result10DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Result10DG->Location = System::Drawing::Point(717, 667);
			this->Result10DG->Name = L"Result10DG";
			this->Result10DG->RowHeadersVisible = false;
			this->Result10DG->Size = System::Drawing::Size(396, 64);
			this->Result10DG->TabIndex = 116;
			// 
			// Generate10Btn
			// 
			this->Generate10Btn->Location = System::Drawing::Point(596, 667);
			this->Generate10Btn->Name = L"Generate10Btn";
			this->Generate10Btn->Size = System::Drawing::Size(103, 32);
			this->Generate10Btn->TabIndex = 115;
			this->Generate10Btn->Text = L"Сгенерировать";
			this->Generate10Btn->UseVisualStyleBackColor = true;
			this->Generate10Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate10Btn_Click);
			// 
			// Solve10Btn
			// 
			this->Solve10Btn->Location = System::Drawing::Point(596, 699);
			this->Solve10Btn->Name = L"Solve10Btn";
			this->Solve10Btn->Size = System::Drawing::Size(103, 32);
			this->Solve10Btn->TabIndex = 114;
			this->Solve10Btn->Text = L"Обработать";
			this->Solve10Btn->UseVisualStyleBackColor = true;
			this->Solve10Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve10Btn_Click);
			// 
			// ArrLen10TB
			// 
			this->ArrLen10TB->Location = System::Drawing::Point(544, 668);
			this->ArrLen10TB->Name = L"ArrLen10TB";
			this->ArrLen10TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen10TB->TabIndex = 113;
			this->ArrLen10TB->Text = L"10";
			this->ArrLen10TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(414, 669);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(124, 13);
			this->label25->TabIndex = 112;
			this->label25->Text = L"Количество элементов";
			// 
			// Start10DG
			// 
			this->Start10DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start10DG->Location = System::Drawing::Point(12, 667);
			this->Start10DG->Name = L"Start10DG";
			this->Start10DG->RowHeadersVisible = false;
			this->Start10DG->Size = System::Drawing::Size(396, 64);
			this->Start10DG->TabIndex = 111;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label26->Location = System::Drawing::Point(9, 734);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(352, 17);
			this->label26->TabIndex = 124;
			this->label26->Text = L"12. СОРТИРОВКА ПРОСТЫМ ОБМЕНОМ (1 Способ)";
			// 
			// Result12DG
			// 
			this->Result12DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Result12DG->Location = System::Drawing::Point(717, 754);
			this->Result12DG->Name = L"Result12DG";
			this->Result12DG->RowHeadersVisible = false;
			this->Result12DG->Size = System::Drawing::Size(396, 64);
			this->Result12DG->TabIndex = 123;
			// 
			// Generate12Btn
			// 
			this->Generate12Btn->Location = System::Drawing::Point(596, 754);
			this->Generate12Btn->Name = L"Generate12Btn";
			this->Generate12Btn->Size = System::Drawing::Size(103, 32);
			this->Generate12Btn->TabIndex = 122;
			this->Generate12Btn->Text = L"Сгенерировать";
			this->Generate12Btn->UseVisualStyleBackColor = true;
			this->Generate12Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Generate12Btn_Click);
			// 
			// Solve12Btn
			// 
			this->Solve12Btn->Location = System::Drawing::Point(596, 786);
			this->Solve12Btn->Name = L"Solve12Btn";
			this->Solve12Btn->Size = System::Drawing::Size(103, 32);
			this->Solve12Btn->TabIndex = 121;
			this->Solve12Btn->Text = L"Обработать";
			this->Solve12Btn->UseVisualStyleBackColor = true;
			this->Solve12Btn->Click += gcnew System::EventHandler(this, &Lab3Form::Solve12Btn_Click);
			// 
			// ArrLen12TB
			// 
			this->ArrLen12TB->Location = System::Drawing::Point(544, 755);
			this->ArrLen12TB->Name = L"ArrLen12TB";
			this->ArrLen12TB->Size = System::Drawing::Size(35, 20);
			this->ArrLen12TB->TabIndex = 120;
			this->ArrLen12TB->Text = L"10";
			this->ArrLen12TB->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Lab3Form::AnyLenTB_KeyPress);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(414, 756);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(124, 13);
			this->label29->TabIndex = 119;
			this->label29->Text = L"Количество элементов";
			// 
			// Start12DG
			// 
			this->Start12DG->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Start12DG->Location = System::Drawing::Point(12, 754);
			this->Start12DG->Name = L"Start12DG";
			this->Start12DG->RowHeadersVisible = false;
			this->Start12DG->Size = System::Drawing::Size(396, 64);
			this->Start12DG->TabIndex = 118;
			// 
			// DbWriteBtn
			// 
			this->DbWriteBtn->Location = System::Drawing::Point(355, 12);
			this->DbWriteBtn->Name = L"DbWriteBtn";
			this->DbWriteBtn->Size = System::Drawing::Size(125, 23);
			this->DbWriteBtn->TabIndex = 130;
			this->DbWriteBtn->Text = L"Записать в БД";
			this->DbWriteBtn->UseVisualStyleBackColor = true;
			this->DbWriteBtn->Click += gcnew System::EventHandler(this, &Lab3Form::DbWriteBtn_Click);
			// 
			// SolveAllBtn
			// 
			this->SolveAllBtn->Location = System::Drawing::Point(224, 12);
			this->SolveAllBtn->Name = L"SolveAllBtn";
			this->SolveAllBtn->Size = System::Drawing::Size(125, 23);
			this->SolveAllBtn->TabIndex = 129;
			this->SolveAllBtn->Text = L"Обработать все";
			this->SolveAllBtn->UseVisualStyleBackColor = true;
			this->SolveAllBtn->Click += gcnew System::EventHandler(this, &Lab3Form::SolveAllBtn_Click);
			// 
			// GenerateAllBtn
			// 
			this->GenerateAllBtn->Location = System::Drawing::Point(93, 12);
			this->GenerateAllBtn->Name = L"GenerateAllBtn";
			this->GenerateAllBtn->Size = System::Drawing::Size(125, 23);
			this->GenerateAllBtn->TabIndex = 128;
			this->GenerateAllBtn->Text = L"Сгенерировать все";
			this->GenerateAllBtn->UseVisualStyleBackColor = true;
			this->GenerateAllBtn->Click += gcnew System::EventHandler(this, &Lab3Form::GenerateAllBtn_Click);
			// 
			// Lab3Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1127, 830);
			this->Controls->Add(this->DbWriteBtn);
			this->Controls->Add(this->SolveAllBtn);
			this->Controls->Add(this->GenerateAllBtn);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->Result12DG);
			this->Controls->Add(this->Generate12Btn);
			this->Controls->Add(this->Solve12Btn);
			this->Controls->Add(this->ArrLen12TB);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->Start12DG);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->Result10DG);
			this->Controls->Add(this->Generate10Btn);
			this->Controls->Add(this->Solve10Btn);
			this->Controls->Add(this->ArrLen10TB);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->Start10DG);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->Result9DG);
			this->Controls->Add(this->Generate9Btn);
			this->Controls->Add(this->Solve9Btn);
			this->Controls->Add(this->ArrLen9TB);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->Start9DG);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Answer8vTB);
			this->Controls->Add(this->Answer7vTB);
			this->Controls->Add(this->Answer6vTB);
			this->Controls->Add(this->Answer8iTB);
			this->Controls->Add(this->Answer7iTB);
			this->Controls->Add(this->Answer6iTB);
			this->Controls->Add(this->Generate8Btn);
			this->Controls->Add(this->Solve8Btn);
			this->Controls->Add(this->ArrLen8TB);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->Start8DG);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->Generate7Btn);
			this->Controls->Add(this->Solve7Btn);
			this->Controls->Add(this->ArrLen7TB);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->Start7DG);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->Generate6Btn);
			this->Controls->Add(this->Solve6Btn);
			this->Controls->Add(this->ArrLen6TB);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->Start6DG);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->Answer5vTB);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->Answer5iTB);
			this->Controls->Add(this->Generate5Btn);
			this->Controls->Add(this->Solve5Btn);
			this->Controls->Add(this->ArrLen5TB);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Start5DG);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Answer4TB);
			this->Controls->Add(this->Generate4Btn);
			this->Controls->Add(this->Solve4Btn);
			this->Controls->Add(this->ArrLen4TB);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->Start4DG);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->InsertIndexTB);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->InsertValueTB);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Result3DG);
			this->Controls->Add(this->Generate3Btn);
			this->Controls->Add(this->Solve3Btn);
			this->Controls->Add(this->ArrLen3TB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Start3DG);
			this->Controls->Add(this->BackBtn);
			this->Name = L"Lab3Form";
			this->Text = L"Лабораторная работа 2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start3DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result3DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start4DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start5DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start6DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start7DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start8DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result9DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start9DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result10DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start10DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Result12DG))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Start12DG))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BackBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
	}
	private: System::Void AnyLenTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void InsertValueTB_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!((e->KeyChar >= '0') && (e->KeyChar <= '9') || (e->KeyChar == ',') || (e->KeyChar == '.') || (e->KeyChar == '-') || (e->KeyChar == 8))) e->KeyChar = Char(0);
	}
	private: System::Void AnyGenerateBtnClick(int arr_len, System::Windows::Forms::DataGridView^ dg) {
		int* arr = new int[arr_len];
		AntonCHDLL::Class1::FillArr(arr, arr_len, -100, 100);
		AntonCHDLL::Class1::output_mas(arr, arr_len, dg);
	}
	private: System::Void Generate3Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen3TB), Start3DG);
	}
	private: System::Void Solve3Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen3TB);
		int insertvalue = AntonCHDLL::Class1::Vvod(InsertValueTB);
		int insertind = AntonCHDLL::Class1::Vvod(InsertIndexTB);
		int* arr = new int[arr_len + 1] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start3DG);
		AntonCHDLL::Class1::L3_insert_3(arr, arr_len + 1, insertind, insertvalue);
		arr[insertind] = insertvalue;
		AntonCHDLL::Class1::output_mas(arr, arr_len + 1, Result3DG);
	}
	private: System::Void Generate4Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen4TB), Start4DG);
	}
	private: System::Void Solve4Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen4TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start4DG);
		bool Flag = AntonCHDLL::Class1::L3_monot_4(arr, arr_len);
		Answer4TB->Text = Convert::ToString(Flag);
	}
	private: System::Void Generate5Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen5TB), Start5DG);
	}
	private: System::Void Solve5Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen5TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start5DG);
		int val = 0;
		int ind = -1;
		AntonCHDLL::Class1::L3_fneg_5(arr, arr_len, &ind, &val);
		AntonCHDLL::Class1::Vivod(ind, Answer5iTB);
		AntonCHDLL::Class1::Vivod(val, Answer5vTB);
	}
	private: System::Void Generate6Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen6TB), Start6DG);
	}
	private: System::Void Solve6Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen6TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start6DG);
		int val = 0;
		int ind = -1;
		AntonCHDLL::Class1::L3_fnech_6(arr, arr_len, &ind, &val);
		AntonCHDLL::Class1::Vivod(ind, Answer6iTB);
		AntonCHDLL::Class1::Vivod(val, Answer6vTB);
	}
	private: System::Void Generate7Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen7TB), Start7DG);
	}
	private: System::Void Solve7Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen7TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start7DG);
		int val = 0;
		int ind = -1;
		AntonCHDLL::Class1::L3_fpos_7(arr, arr_len, &ind, &val);
		AntonCHDLL::Class1::Vivod(ind, Answer7iTB);
		AntonCHDLL::Class1::Vivod(val, Answer7vTB);
	}
	private: System::Void Generate8Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen8TB), Start8DG);
	}
	private: System::Void Solve8Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen8TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start8DG);
		int val = 0;
		int ind = -1;
		AntonCHDLL::Class1::L3_fchet_8(arr, arr_len, &ind, &val);
		AntonCHDLL::Class1::Vivod(ind, Answer8iTB);
		AntonCHDLL::Class1::Vivod(val, Answer8vTB);
	}
	private: System::Void Generate9Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen9TB), Start9DG);
	}
	private: System::Void Solve9Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen9TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start9DG);
		AntonCHDLL::Class1::L3_sort_9(arr, arr_len);
		AntonCHDLL::Class1::output_mas(arr, arr_len, Result9DG);
	}
	private: System::Void Generate10Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen10TB), Start10DG);
	}
	private: System::Void Solve10Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen10TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start10DG);
		AntonCHDLL::Class1::L3_sort_10(arr, arr_len);
		AntonCHDLL::Class1::output_mas(arr, arr_len, Result10DG);
	}
	private: System::Void Generate12Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		AnyGenerateBtnClick(AntonCHDLL::Class1::Vvod(ArrLen12TB), Start12DG);
	}
	private: System::Void Solve12Btn_Click(System::Object^ sender, System::EventArgs^ e) {
		int arr_len = AntonCHDLL::Class1::Vvod(ArrLen12TB);
		int* arr = new int[arr_len] {};
		AntonCHDLL::Class1::input_mas(arr, arr_len, Start12DG);
		AntonCHDLL::Class1::L3_sort_12(arr, arr_len);
		AntonCHDLL::Class1::output_mas(arr, arr_len, Result12DG);
	}
private: System::Void GenerateAllBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Generate3Btn_Click(sender, e);
	Generate4Btn_Click(sender, e);
	Generate5Btn_Click(sender, e);
	Generate6Btn_Click(sender, e);
	Generate7Btn_Click(sender, e);
	Generate8Btn_Click(sender, e);
	Generate9Btn_Click(sender, e);
	Generate10Btn_Click(sender, e);
	Generate12Btn_Click(sender, e);
}
	private: System::Void SolveAllBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Solve3Btn_Click(sender, e);
		Solve4Btn_Click(sender, e);
		Solve5Btn_Click(sender, e);
		Solve6Btn_Click(sender, e);
		Solve7Btn_Click(sender, e);
		Solve8Btn_Click(sender, e);
		Solve9Btn_Click(sender, e);
		Solve10Btn_Click(sender, e);
		Solve12Btn_Click(sender, e);
	}
	private: System::Void DbWriteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		int slen3 = Start3DG->Columns->Count;
		int rlen3 = Result3DG->Columns->Count;
		int slen4 = Start4DG->Columns->Count;
		int slen5 = Start5DG->Columns->Count;
		int slen6 = Start6DG->Columns->Count;
		int slen7 = Start7DG->Columns->Count;
		int slen8 = Start8DG->Columns->Count;
		int slen9 = Start9DG->Columns->Count;
		int rlen9 = Result9DG->Columns->Count;
		int slen10 = Start10DG->Columns->Count;
		int rlen10 = Result10DG->Columns->Count;
		int slen12 = Start12DG->Columns->Count;
		int rlen12 = Result12DG->Columns->Count;
		int* elements = new int[13] {slen3, rlen3, slen4, slen5, slen6, slen7, slen8, slen9, rlen9, slen10, rlen10, slen12, rlen12};
		int* sarr3 = new int[slen3] {};
		AntonCHDLL::Class1::input_mas(sarr3, slen3, Start3DG);
		int* rarr3 = new int[rlen3] {};
		AntonCHDLL::Class1::input_mas(rarr3, rlen3, Result3DG);
		int* sarr4 = new int[slen4] {};
		AntonCHDLL::Class1::input_mas(sarr4, slen4, Start4DG);
		String^ res4 = Answer4TB->Text;
		int* sarr5 = new int[slen5] {};
		AntonCHDLL::Class1::input_mas(sarr5, slen5, Start5DG);
		int res5 = AntonCHDLL::Class1::Vvod(Answer5iTB);
		int* sarr6 = new int[slen6] {};
		AntonCHDLL::Class1::input_mas(sarr6, slen6, Start6DG);
		int res6 = AntonCHDLL::Class1::Vvod(Answer6iTB);
		int* sarr7 = new int[slen7] {};
		AntonCHDLL::Class1::input_mas(sarr7, slen7, Start7DG);
		int res7 = AntonCHDLL::Class1::Vvod(Answer7iTB);
		int* sarr8 = new int[slen8] {};
		AntonCHDLL::Class1::input_mas(sarr8, slen8, Start8DG);
		int res8 = AntonCHDLL::Class1::Vvod(Answer8iTB);
		int* sarr9 = new int[slen9] {};
		AntonCHDLL::Class1::input_mas(sarr9, slen9, Start9DG);
		int* rarr9 = new int[rlen9] {};
		AntonCHDLL::Class1::input_mas(rarr9, rlen9, Result9DG);
		int* sarr10 = new int[slen10] {};
		AntonCHDLL::Class1::input_mas(sarr10, slen10, Start10DG);
		int* rarr10 = new int[rlen10] {};
		AntonCHDLL::Class1::input_mas(rarr10, rlen10, Result10DG);
		int* sarr12 = new int[slen12] {};
		AntonCHDLL::Class1::input_mas(sarr12, slen12, Start12DG);
		int* rarr12 = new int[rlen12] {};
		AntonCHDLL::Class1::input_mas(rarr12, rlen12, Result12DG);

		AntonCHDLL::Class1::add();
		AntonCHDLL::Class1::add_struct3(AntonCHDLL::Class1::findmaxlen(elements));
		AntonCHDLL::Class1::add_zap3("Start3", sarr3, slen3);
		AntonCHDLL::Class1::add_zap3("Answer3", rarr3, rlen3);
		AntonCHDLL::Class1::add_zap3("Start4", sarr4, slen4);
		AntonCHDLL::Class1::add_zap3("Answer4", res4);
		AntonCHDLL::Class1::add_zap3("Start5", sarr5, slen5);
		AntonCHDLL::Class1::add_zap3("Answer5", Convert::ToString(res5));
		AntonCHDLL::Class1::add_zap3("Start6", sarr6, slen6);
		AntonCHDLL::Class1::add_zap3("Answer6", Convert::ToString(res6));
		AntonCHDLL::Class1::add_zap3("Start7", sarr7, slen7);
		AntonCHDLL::Class1::add_zap3("Answer7", Convert::ToString(res7));
		AntonCHDLL::Class1::add_zap3("Start8", sarr8, slen8);
		AntonCHDLL::Class1::add_zap3("Answer8", Convert::ToString(res8));
		AntonCHDLL::Class1::add_zap3("Start9", sarr9, slen9);
		AntonCHDLL::Class1::add_zap3("Answer9", rarr9, rlen9);
		AntonCHDLL::Class1::add_zap3("Start10", sarr10, slen10);
		AntonCHDLL::Class1::add_zap3("Answer10", rarr10, rlen10);
		AntonCHDLL::Class1::add_zap3("Start12", sarr12, slen12);
		AntonCHDLL::Class1::add_zap3("Answer12", rarr12, rlen12);

		AntonCHDLL::Class1::ZapisWord3(sarr3, sarr4, sarr5, sarr6, sarr7, sarr8, sarr9, sarr10, sarr12,
			slen3, rlen3, slen4, slen5, slen6, slen7, slen8, slen9, slen10, slen12, rlen9, rlen10, rlen12,
			rarr3, res4, res5, res6, res7, res8, rarr9, rarr10, rarr12);

		AntonCHDLL::Class1::ZapisExcel3(sarr3, sarr4, sarr5, sarr6, sarr7, sarr8, sarr9, sarr10, sarr12,
			slen3, rlen3, slen4, slen5, slen6, slen7, slen8, slen9, slen10, slen12, rlen9, rlen10, rlen12,
			rarr3, res4, res5, res6, res7, res8, rarr9, rarr10, rarr12);
	}
};
}
