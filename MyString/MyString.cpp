#include "MyString.h"
#include <iostream>
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
}

MyString::~MyString()
{
}

void MyString::Input()
{
}

void MyString::Print()
{
}
