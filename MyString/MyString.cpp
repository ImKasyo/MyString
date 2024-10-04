#include "MyString.h"
#include <iostream>
#include <initializer_list>
using namespace std;

MyString::MyString()
{
	size = 80;
	str = new char[size + 1];
}

MyString::MyString(int size)
{
	size = size;
	str = new char[size + 1];
}

MyString::MyString(char* userStr)
{
	size = strlen(userStr);
	str = new char[size + 1];
	strcpy_s(str, size + 1, userStr);
}

MyString::MyString(const MyString& obj)
{
	size = obj.size;
	str = new char[size + 1];
	strcpy_s(str, size + 1, obj.str);
}

int MyString::MyStrLen()
{
	return strlen(str);
}

void MyString::MyStrCat(MyString& b)
{
	size_t newLength = size + b.size;
	char* newStr = new char[newLength + 1];
	strcpy_s(newStr, size + 1, str);
	strcat_s(newStr, newLength + 1, b.str);

	delete[] str;
	str = newStr;
	size = newLength;
}

void MyString::MyDelChr(char c)
{
	size_t newLength = 0;
	for (size_t i = 0; i < size; i++) {
		if (str[i] != c) {
			str[newLength++] = str[i];
		}
	}
	size = newLength;
}

MyString::MyString(initializer_list<int> a)
{
	size = a.size();
	str = new char[size];
	for (auto x = a.begin(); x != a.end(); x++) {
		*str = *x;
		str++;
	}
	str -= size;
}

MyString::~MyString()
{
	delete[] str;
}

void MyString::Input()
{
	cout << "Enter a string: ";
	cin.getline(str, size + 1);
}

void MyString::Print()
{
	cout << str << endl;
}
