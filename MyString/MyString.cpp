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
	return 0;
}

void MyString::MyStrCat(MyString& b)
{
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
