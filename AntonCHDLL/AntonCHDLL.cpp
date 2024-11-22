#include "pch.h"

#include "AntonCHDLL.h"

#include <cmath>

using namespace System;
using namespace System::Windows::Forms;

namespace AntonCHDLL {
    double Class1::Vvod(TextBox^ t)
    {
        return Convert::ToDouble(t->Text->Replace('.', ','));
    }

    void Class1::Vivod(double x, TextBox^ t)
    {
        t->Text = Convert::ToString(x);
    }

    double Class1::FindS(double x)
    {
        double s = 1 + x + pow(x, 2)/2 + pow(x, 3) / 6 + pow(x, 4) / 24;
        return s;
    }

    void Class1::FindF(double* f, double x, double y)
    {
        *f = x * (sin(pow(x, 3)) + pow(cos(y), 2));
    }

    void Class1::FindSF(double* s, double* f, double x, double y)
    {
        *s = Class1::FindS(x);
        Class1::FindF(f, x, y);
    }

    void Class1::CreateDGCols(int arrlen, System::Windows::Forms::DataGridView^ dg) {
        dg->Columns->Clear();
        for (int i = 0; i < arrlen; i++) {
            System::Windows::Forms::DataGridViewTextBoxColumn^ newcol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            newcol->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            newcol->HeaderText = Convert::ToString(i);
            newcol->MinimumWidth = 10;
            newcol->Name = L"column" + Convert::ToString(i);
            newcol->Width = 10;
            dg->Columns->Add(newcol);

        }
    }

    void Class1::FillArr(int* arr, int arrlen, int min, int max) {
        for (int i = 0; i < arrlen; i++) {
            arr[i] = min + (std::rand() % (max - min + 1));
        }
    }

    void Class1::output_mas(int* arr, int arrlen, System::Windows::Forms::DataGridView^ dg) {
        Class1::CreateDGCols(arrlen, dg);
        for (int i = 0; i < arrlen; i++) {
            dg->Rows[0]->Cells[i]->Value = arr[i];
        }
    }

    void Class1::input_mas(int* arr, int arrlen, System::Windows::Forms::DataGridView^ dg) {
        for (int i = 0; i < arrlen; i++) {
            arr[i] = Convert::ToInt32(dg->Rows[0]->Cells[i]->Value);
        }
    }
}