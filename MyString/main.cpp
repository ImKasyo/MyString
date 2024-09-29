#include <iostream>
using namespace std;
#include "MyString.h"

int main() {
    MyString str1;
    cout << "Testing default constructor (size = 80) and Input:" << endl;
    str1.Input();
    cout << "You entered: ";
    str1.Print();
    cout << "Length of str1: " << str1.MyStrLen() << endl;

    // Тест конструктора с произвольным размером
    MyString str2(50);
    cout << "\nTesting constructor with custom size (50) and Input:" << endl;
    str2.Input();
    cout << "You entered: ";
    str2.Print();
    cout << "Length of str2: " << str2.MyStrLen() << endl;

    // Тест конструктора, инициализирующего строкой пользователя
    MyString str3("tfyguhji");
    cout << "\nTesting constructor with string \"Hello, World!\": ";
    str3.Print();

    // Тест конструктора копирования
    MyString str4(str3);
    cout << "\nTesting copy constructor (copy of str3): ";
    str4.Print();

    // Тест конкатенации строк
    cout << "\nTesting concatenation (str1 + str2):" << endl;
    str1.MyStrCat(str2);
    cout << "Result of str1 concatenated with str2: ";
    str1.Print();

    // Тест удаления символа
    cout << "\nTesting character deletion (deleting 'o' from str4):" << endl;
    str4.MyDelChr('o');
    cout << "Result of deleting 'o' from str4: ";
    str4.Print();
}