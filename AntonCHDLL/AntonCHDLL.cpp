#include "pch.h"
#include "AntonCHDLL.h"
#include <cmath>

#define SQLPATH "D:\\Downloads\\AN\\New_DB.mdb"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
using namespace Microsoft::Office::Interop;
using namespace Microsoft::VisualBasic;
using namespace System::IO;

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

    void Class1::add()
    {
        ADOX::Catalog^ k = gcnew ADOX::CatalogClass();
        try {
            k->Create("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + SQLPATH);
            MessageBox::Show("База данных успешно создана");
        }
        catch (System::Runtime::InteropServices::COMException^ situation)
        {
            MessageBox::Show(situation->Message);
        }
        finally
        {
            k = nullptr;
        }
    }

    void Class1::add_struct2()
    {
        auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + SQLPATH);
        p->Open();
        auto c = gcnew OleDbCommand("CREATE TABLE [Massivs2] ([Номер элемента] counter, [Исходный массив] char(200), [Результирующий массив] char(200))", p);
        try
        {
            c->ExecuteNonQuery(); //Возвращает количество измененных записей
            MessageBox::Show("Структура базы данных записана");
        }
        catch (Exception^ situation)
        {
            MessageBox::Show(situation->Message);
        }
        p->Close();
    }

    void Class1::add_zap2(int* arr1, int* arr2, int len1, int len2)
    {
        auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + SQLPATH);
        p->Open();
        for (int i = 0; i < len1; i++)
        {
            if (i < len2)
            {
                auto c = gcnew OleDbCommand("INSERT INTO [Massivs2]([Исходный массив],[Результирующий массив]) VALUES ('" + arr1[i] + "','" + arr2[i] + "')");
                c->Connection = p;
                c->ExecuteNonQuery(); //Выход из SQL - команды 

            }
            else
            {
                auto c = gcnew OleDbCommand("INSERT INTO [Massivs2]([Исходный массив]) VALUES ('" + arr1[i] + "')");
                c->Connection = p;
                c->ExecuteNonQuery(); // Выход из SQL - команды

            }
        }
        p->Close(); //Закрываем подключение к БД  
        MessageBox::Show("В таблицу 'Массивы2' добавлена запись");
    }

    void Class1::ZapisWord2(int* arr1, int* arr2, int len1, int len2)
    {
        auto Wrd = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
        Wrd->Visible = true;
        auto inf = Type::Missing;
        String^ str;

        auto Doc = Wrd->Documents->Add(inf, inf, inf, inf);
        Wrd->Selection->TypeText("Исходный массив");
        Wrd->Selection->TypeParagraph();
        Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
        Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Microsoft::Office::Interop::Word::Table^ tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[2]->Range, 2, len1, t1, t2);
        for (int i = 0; i < len1; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", arr1[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        String^ str2;
        Wrd->Selection->TypeText("Результирующий массив");
        Microsoft::Office::Interop::Word::Table^ tbl2 = Wrd->ActiveDocument->Tables->Add(Wrd->Selection->Range, 2, len2, t1, t2);
        for (int i = 0; i < len2; i++)
        {
            tbl2->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str2 = String::Format("{0:f0}", arr2[i]);
            tbl2->Cell(2, i + 1)->Range->InsertAfter(str2);
        }

    }

    void Class1::ZapisExcel2(int* arr1, int* arr2, int len1, int len2) {
        auto XL = gcnew Microsoft::Office::Interop::Excel::Application();
        XL->Visible = true;
        Object^ t = Type::Missing;
        auto Workbook = XL->Workbooks->Add(t);
        String^ str;
        XL->Cells[1, 1] = "Исходный массив";
        for (int i = 0; i < len1; i++)
        {
            XL->Cells[2, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", arr1[i]);
            XL->Cells[3, i + 1] = str;
        }
        XL->Cells[5, 1] = "Результирующий массив";
        for (int i = 0; i < len1; i++)
        {
            XL->Cells[6, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", arr1[i]);
            XL->Cells[7, i + 1] = str;
        }
    }

    int Class1::findmaxlen(int* elements) {
        int maxim = -1;
        for (int i = 0; i < 13; i++)
        {
            if (elements[i] > maxim) {
                maxim = elements[i];
            }
        }
        return maxim;
    }

    void Class1::add_struct3(int maxlen)
    {
        auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + SQLPATH);
        p->Open();
        String^ rescom = "CREATE TABLE [Massivs3] ([Номер элемента] counter";
        int* tasks = new int [9] {3, 4, 5, 6, 7, 8, 9, 10, 12};
        for (int i = 0; i < 9; i++) {
            rescom += ", [Start" + tasks[i] + "] char(100), [Answer" + tasks[i] + "] char(100)";
        }
        rescom += ")";
        auto c = gcnew OleDbCommand(rescom, p);
        try
        {
            c->ExecuteNonQuery();
        }
        catch (Exception^ situation)
        {
            MessageBox::Show(situation->Message);
        }
        for (int i = 0; i < maxlen; i++)
        {
            auto c = gcnew OleDbCommand("INSERT INTO [Massivs3] ([Start3]) VALUES ('')");
            c->Connection = p;
            c->ExecuteNonQuery();

        }
        p->Close();
    }

    void Class1::add_zap3(String^ name, int* arr1, int len1)
    {
        auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + SQLPATH);
        p->Open();
        for (int i = 0; i < len1; i++)
        {
            auto c = gcnew OleDbCommand("UPDATE [Massivs3] SET [" + name + "] = " + arr1[i] + " WHERE [Номер элемента] = " + (i + 1), p);
            c->Connection = p;
            c->ExecuteNonQuery();
        }
        p->Close(); //Закрываем подключение к БД  
        MessageBox::Show("В таблицу 'Массивы3' добавлена запись");
    }

    void Class1::add_zap3(String^ name, String^ value)
    {
        auto p = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + SQLPATH);
        p->Open();
        auto c = gcnew OleDbCommand("UPDATE [Massivs3] SET [" + name + "] = " + value + " WHERE [Номер элемента] = 1", p);
        c->Connection = p;
        c->ExecuteNonQuery();
        p->Close(); //Закрываем подключение к БД  
        MessageBox::Show("В таблицу 'Массивы3' добавлена запись");
    }

    void Class1::ZapisWord3(int* sarr3, int* sarr4, int* sarr5, int* sarr6, int* sarr7, int* sarr8, int* sarr9, int* sarr10, int* sarr12,
        int len3s, int len3r, int len4s, int len5s, int len6s, int len7s, int len8s, int len9s, int len10s, int len12s, int len9r, int len10r, int len12r,
        int* rarr3, String^ res4, int res5, int res6, int res7, int res8, int* rarr9, int* rarr10, int* rarr12)
    {
        auto Wrd = gcnew Microsoft::Office::Interop::Word::ApplicationClass();
        Wrd->Visible = true;
        auto inf = Type::Missing;
        auto Doc = Wrd->Documents->Add(inf, inf, inf, inf);
        Wrd->Selection->TypeText("Исходный массив 3");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Object^ t1 = Microsoft::Office::Interop::Word::WdDefaultTableBehavior::wdWord9TableBehavior;
        Object^ t2 = Microsoft::Office::Interop::Word::WdAutoFitBehavior::wdAutoFitContent;
        String^ str;
        Microsoft::Office::Interop::Word::Table^ tbl;
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len3s, t1, t2);
        for (int i = 0; i < len3s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr3[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Результирующий массив 3");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len3r, t1, t2);
        for (int i = 0; i < len3r; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", rarr3[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }

        Wrd->Selection->TypeText("Исходный массив 4");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len4s, t1, t2);
        for (int i = 0; i < len4s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr4[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Ответ 4");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeText(Convert::ToString(res4));
        Wrd->Selection->TypeParagraph();

        Wrd->Selection->TypeText("Исходный массив 5");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len5s, t1, t2);
        for (int i = 0; i < len5s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr5[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Ответ 5");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeText(Convert::ToString(res5));
        Wrd->Selection->TypeParagraph();

        Wrd->Selection->TypeText("Исходный массив 6");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len6s, t1, t2);
        for (int i = 0; i < len6s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr6[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Ответ 6");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeText(Convert::ToString(res6));
        Wrd->Selection->TypeParagraph();

        Wrd->Selection->TypeText("Исходный массив 7");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len7s, t1, t2);
        for (int i = 0; i < len7s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr7[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Ответ 7");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeText(Convert::ToString(res7));
        Wrd->Selection->TypeParagraph();

        Wrd->Selection->TypeText("Исходный массив 8");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len8s, t1, t2);
        for (int i = 0; i < len8s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr8[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Ответ 8");
        Wrd->Selection->TypeText(Convert::ToString(res8));
        Wrd->Selection->TypeParagraph();

        Wrd->Selection->TypeText("Исходный массив 9");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len9s, t1, t2);
        for (int i = 0; i < len9s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr9[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Результирующий массив 9");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len9r, t1, t2);
        for (int i = 0; i < len9r; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", rarr9[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }

        Wrd->Selection->TypeText("Исходный массив 10");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len10s, t1, t2);
        for (int i = 0; i < len10s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr10[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Результирующий массив 10");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len10r, t1, t2);
        for (int i = 0; i < len10r; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", rarr10[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }

        Wrd->Selection->TypeText("Исходный массив 12");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len12s, t1, t2);
        for (int i = 0; i < len12s; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", sarr12[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }
        Wrd->Selection->TypeText("Результирующий массив 12");
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        Wrd->Selection->TypeParagraph();
        tbl = Wrd->ActiveDocument->Tables->Add(Wrd->ActiveDocument->Paragraphs[Wrd->ActiveDocument->Paragraphs->Count - 2]->Range, 2, len12r, t1, t2);
        for (int i = 0; i < len12r; i++)
        {
            tbl->Cell(1, i + 1)->Range->InsertAfter("[" + Convert::ToString(i) + "]");
            str = String::Format("{0:f0}", rarr12[i]);
            tbl->Cell(2, i + 1)->Range->InsertAfter(str);
        }

    }

    void Class1::ZapisExcel3(int* sarr3, int* sarr4, int* sarr5, int* sarr6, int* sarr7, int* sarr8, int* sarr9, int* sarr10, int* sarr12,
        int len3s, int len3r, int len4s, int len5s, int len6s, int len7s, int len8s, int len9s, int len10s, int len12s, int len9r, int len10r, int len12r,
        int* rarr3, String^ res4, int res5, int res6, int res7, int res8, int* rarr9, int* rarr10, int* rarr12)
    {
        auto XL = gcnew Microsoft::Office::Interop::Excel::Application();
        XL->Visible = true;
        Object^ t = Type::Missing;
        auto Workbook = XL->Workbooks->Add(t);
        String^ str;

        XL->Cells[1, 1] = "Исходный массив 3";
        for (int i = 0; i < len3s; i++)
        {
            XL->Cells[2, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr3[i]);
            XL->Cells[3, i + 1] = str;
        }
        XL->Cells[5, 1] = "Результирующий массив 3";
        for (int i = 0; i < len3r; i++)
        {
            XL->Cells[6, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", rarr3[i]);
            XL->Cells[7, i + 1] = str;
        }

        XL->Cells[9, 1] = "Исходный массив 4";
        for (int i = 0; i < len4s; i++)
        {
            XL->Cells[10, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr4[i]);
            XL->Cells[11, i + 1] = str;
        }
        XL->Cells[13, 1] = "Ответ 4";
        XL->Cells[14, 1] = Convert::ToString(res4);

        XL->Cells[16, 1] = "Исходный массив 5";
        for (int i = 0; i < len5s; i++)
        {
            XL->Cells[17, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr5[i]);
            XL->Cells[18, i + 1] = str;
        }
        XL->Cells[20, 1] = "Ответ 5";
        XL->Cells[21, 1] = Convert::ToString(res5);

        XL->Cells[23, 1] = "Исходный массив 6";
        for (int i = 0; i < len6s; i++)
        {
            XL->Cells[24, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr6[i]);
            XL->Cells[25, i + 1] = str;
        }
        XL->Cells[27, 1] = "Ответ 6";
        XL->Cells[28, 1] = Convert::ToString(res6);

        XL->Cells[30, 1] = "Исходный массив 7";
        for (int i = 0; i < len7s; i++)
        {
            XL->Cells[31, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr7[i]);
            XL->Cells[32, i + 1] = str;
        }
        XL->Cells[34, 1] = "Ответ 7";
        XL->Cells[35, 1] = Convert::ToString(res7);

        XL->Cells[37, 1] = "Исходный массив 8";
        for (int i = 0; i < len8s; i++)
        {
            XL->Cells[38, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr8[i]);
            XL->Cells[39, i + 1] = str;
        }
        XL->Cells[41, 1] = "Ответ 8";
        XL->Cells[42, 1] = Convert::ToString(res8);

        XL->Cells[44, 1] = "Исходный массив 9";
        for (int i = 0; i < len9s; i++)
        {
            XL->Cells[45, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr9[i]);
            XL->Cells[46, i + 1] = str;
        }
        XL->Cells[48, 1] = "Результирующий массив 9";
        for (int i = 0; i < len9r; i++)
        {
            XL->Cells[49, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", rarr9[i]);
            XL->Cells[50, i + 1] = str;
        }

        XL->Cells[52, 1] = "Исходный массив 10";
        for (int i = 0; i < len10s; i++)
        {
            XL->Cells[53, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr10[i]);
            XL->Cells[54, i + 1] = str;
        }
        XL->Cells[56, 1] = "Результирующий массив 10";
        for (int i = 0; i < len10r; i++)
        {
            XL->Cells[57, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", rarr10[i]);
            XL->Cells[58, i + 1] = str;
        }

        XL->Cells[60, 1] = "Исходный массив 12";
        for (int i = 0; i < len12s; i++)
        {
            XL->Cells[61, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", sarr12[i]);
            XL->Cells[62, i + 1] = str;
        }
        XL->Cells[64, 1] = "Результирующий массив 12";
        for (int i = 0; i < len12r; i++)
        {
            XL->Cells[65, i + 1] = Convert::ToString(i);
            str = String::Format("{0:f0}", rarr12[i]);
            XL->Cells[66, i + 1] = str;
        }
    }
}