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
        static double get_ugol(int x1, int y1, int x2, int y2);
        static int L2_find_usl_colvo(int* arr, int arr_len);
        static int L2_find_newarr_len(int* arr, int arr_len, int res);
        static void L2_fill_newarr(int* arr, int arr_len, int res, int* newarr);
        static void L3_insert_3(int* arr, int arr_len, int inserdind, int insertvalue);
        static bool L3_monot_4(int* arr, int arr_len);
        static void L3_fneg_5(int* arr, int arr_len, int* ind, int* val);
        static void L3_fnech_6(int* arr, int arr_len, int* ind, int* val);
        static void L3_fpos_7(int* arr, int arr_len, int* ind, int* val);
        static void L3_fchet_8(int* arr, int arr_len, int* ind, int* val);
        static void L3_sort_9(int* arr, int arr_len);
        static void L3_sort_10(int* arr, int arr_len);
        static void L3_sort_12(int* arr, int arr_len);
    };
}
