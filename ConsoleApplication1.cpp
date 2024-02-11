#define _CRT_SECURE_NO_WARNINGS
#define _UNICODE
#include <windows.h>
#include <tchar.h>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    //1. Дана строка символов. Заменить в ней все пробелы на табуляцию
    /*
    _TCHAR str[] = _TEXT("AUDI FOREWER. NO SOMETIME - ALWAYS");
    wcout << str;
    wcout << '\n';

    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }

    wcout << str;

    */


    //2. Дана строка символов. Определить количество букв, количество цифр и количество остальных символов, 
    // присутствующих в строке.

    /*
    _TCHAR str[] = _TEXT("AUDI FOREWER. NO SOMETIME - ALWAYS");
    int numbers = 0;
    int letters = 0;
    int symbols = 0;
    int space = 0;

    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            letters++;
        }
        if (str[i] >= 48 && str[i] <= 57)
        {
            numbers++;
        }
        if (str[i] >= 33 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126)
        {
            symbols++;
        }
        if (str[i] == ' ')
        {
            space++;
        }
    }
    wcout << "Букв: " << letters << "Чисел: " << numbers << "Символов: " << symbols << "Пробелы: " << space;
    */

    //3. Подсчитать кол-во слов в веденном предложении
     
    /*
    _TCHAR str[50];
    int space = 0;
    cout << "Напиши предложение:";
    wcin.getline(str, 50);
   

    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] == ' ')
        {
            space++;
       }
    }
    
    wcout << space + 1 << endl;
    */

    //4. Написать функцию для подсчета гласных букв в тексте, введенном с клавиатуры
    /*
    _TCHAR str[100];
    cout << "Напиши предложение: ";
    wcin.getline(str, 100);
    int letter = 0;
    int letters[] = {63, 161, 168, 169, 183, 184, 214, 215, 222, 224, 231, 232, 241, 242, 247, 248 };
    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] == 160) {
            letter++;
        }
    }
    cout << "Число букв: " << letter << endl;
    */

    //5. Дана строка символов. Проверить, является ли эта строка палиндромом

    /*_TCHAR str[] = _TEXT("privet tevirp");
    wcout << str;
    int len = _tcslen(str)-1;
    int check = 0;
    for (int i = 0; i < _tcslen(str)/2; i++)
    {
        if (str[i] == str[len]) {
           check++;
        }
        --len;
    }
    if (check == len) {
        wcout << "Да";
    }
    else {
        wcout << "Нет";
    }*/


    //6.Написать функцию, которая удаляет из строки символ с заданным номером
/*
    _TCHAR str[] = _TEXT("AUDI FOREWER. NO SOMETIME - ALWAYS");
    wcout << str;
    int num;
    wcout << "Введи число от 0 до 32" ;
    wcin >> num;
    int j = 0;
    const int len = _tcslen(str);
    _TCHAR *rez = new _TCHAR[len];
    for (int i = 0; i < _tcslen(str); i++)
    {
        if (j == len)
        {
            rez[j] = '/0';
        }
        else
        {
            if (i != num)
            {
                rez[j] = str[i];
                j++;
            }
            else
            {
            }
        }
    }

    wcout << rez << endl;
    delete[] rez;
    */

    //7. Написать функцию, которая удаляет из строки все вхождения в нее заданного символа
/*
    _TCHAR str[] = _TEXT("AUDI FOREWER. NO SOMETIME - ALWAYS");
    wcout << str;
    _TCHAR ch;
    wcout << "Введи символ:";
    wcin >> ch;
    int j = 0;
    int len = 0;
    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] != str[ch])
        {
            len++;
        }
    }
    _TCHAR *rez = new _TCHAR[len+1];
    for (int i = 0; i < _tcslen(str); i++)
    {
        if (str[i] != ch)
        {
            if (j == len)
            {
                rez[j] = '/0';
            }
            else 
            {
                rez[j] = str[i];
                j++;
            }
        }
    }
    wcout  << rez << endl;
    delete[] rez;
    */

    //8. Написать функцию, которая вставляет в строку в указанную позицию заданный символ
    /*
    _TCHAR str[] = _TEXT("AUDI FOREWER. NO SOMETIME - ALWAYS");
    wcout << str;
    _TCHAR ch;
    int pos;
    wcout << "Введи символ:  ";
    wcin >> ch;
    wcout << "Введи позицию: ";
    wcin >> pos;
    int j = 0;
    int len = _tcslen(str)+1;
    _TCHAR *rez = new _TCHAR[len];
    for (int i = 0; i < _tcslen(str)+1; i++)
    {
        if (j == len - 1)
        {
            rez[j] = '/0';
        }
        else
        {
            if (i != pos)
            {
                rez[j] = str[i];
                j++;
            }
           else 
            {
                rez[j] = ch;
                j++;
                rez[j + 1] = str[i];
                j++;
            }
        }  
    }
    wcout << rez << endl;
    delete[] rez;
    */
}
