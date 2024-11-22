#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace AntonCHDLL {
    public ref class Class1
    {
    public:
        static double Vvod(TextBox^ t);
        static void Vivod(double x, TextBox^ t);
        static double FindS(double x);
        static void FindF(double* f, double x, double y);
        static void FindSF(double* s, double* f, double x, double y);
        static void CreateDGCols(int arrlen, System::Windows::Forms::DataGridView^ dg);
        static void output_mas(int* arr, int arrlen, System::Windows::Forms::DataGridView^ dg);
        static void FillArr(int* arr, int arrlen, int min, int max);
        static void input_mas(int* arr, int arrlen, System::Windows::Forms::DataGridView^ dg);
    };
}
