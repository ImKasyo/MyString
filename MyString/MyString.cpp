#include "MyString.h"

MyString::MyString()
{
	size = 80;
	str = new char[size + 1];
}

MyString::MyString(const char* str)
{
}

MyString::MyString(const MyString& obj)
{
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
