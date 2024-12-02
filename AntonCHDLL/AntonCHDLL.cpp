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

    double Class1::get_ugol(int x1, int y1, int x2, int y2) {
        return acos(((x1 * x2) + (y1 * y2)) / (sqrt(pow(x1, 2) + pow(y1, 2)) * sqrt(pow(x2, 2) + pow(y2, 2)))) * 180.0 / 3.14;
    }

    int Class1::L2_find_usl_colvo(int* arr, int arr_len) {
        int res = 0;
        for (int i = 0; i < arr_len; i++) {
            if (abs(arr[i]) > 9 && abs(arr[i]) < 100) {
                int fnum = abs(arr[i] % 10);
                int snum = abs((arr[i]) - fnum) / 10;
                if ((fnum + snum) % 5 == 0) {
                    res += 1;
                }
            }
        }
        return res;
    }

    int Class1::L2_find_newarr_len(int* arr, int arr_len, int res) {
        int newarr_len = 0;
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] < res) {
                newarr_len++;
            }
        }
        return newarr_len;
    }

    void Class1::L2_fill_newarr(int* arr, int arr_len, int res, int* newarr) {
        int ni = 0;
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] < res) {
                newarr[ni] = arr[i];
                ni++;
            }
        }
    }

    void Class1::L3_insert_3(int* arr, int arr_len, int inserdind, int insertvalue) {
        for (int i = arr_len; i > inserdind; i--) {
            arr[i] = arr[i - 1];
        }
        arr[inserdind] = insertvalue;
    }

    bool Class1::L3_monot_4(int* arr, int arr_len) {
        bool Flag = true;
        for (int i = 1; i < arr_len; i++) {
            if (arr[i] > arr[i - 1]) {
                Flag = false;
                break;
            }
        }
        return Flag;
    }

    void Class1::L3_fneg_5(int* arr, int arr_len, int* ind, int* val) {
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] < 0) {
                *ind = i;
                *val = arr[i];
                break;
            }
        }
    }

    void Class1::L3_fnech_6(int* arr, int arr_len, int* ind, int* val) {
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] % 2 != 0) {
                *ind = i;
                *val = arr[i];
                break;
            }
        }
    }

    void Class1::L3_fpos_7(int* arr, int arr_len, int* ind, int* val) {
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] > 0) {
                *ind = i;
                *val = arr[i];
                break;
            }
        }
    }

    void Class1::L3_fchet_8(int* arr, int arr_len, int* ind, int* val) {
        for (int i = 0; i < arr_len; i++) {
            if (arr[i] % 2 == 0) {
                *ind = i;
                *val = arr[i];
                break;
            }
        }
    }

    void Class1::L3_sort_9(int* arr, int arr_len) {
        for (int i = 1; i < arr_len; ++i) {
            int key = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }

    void Class1::L3_sort_10(int* arr, int arr_len) {

        for (int i = 1; i < arr_len; ++i) {
            int key = arr[i];
            int left = 0;
            int right = i - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (arr[mid] > key) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            for (int j = i - 1; j >= left; --j) {
                arr[j + 1] = arr[j];
            }
            arr[left] = key;
        }

    }

    void Class1::L3_sort_12(int* arr, int arr_len) {
        for (int i = 0; i < arr_len - 1; ++i) {
            for (int j = 0; j < arr_len - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int t = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = t;
                }
            }
        }
    }
}