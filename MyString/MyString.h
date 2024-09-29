#pragma once
class MyString
{
	const char* str;
	int size;
public:
	MyString();
	MyString(const char* str);
	MyString(const char* userStr);
	MyString(const MyString& obj);
	void Input();
	void Print();
	MyString(const MyString& str);
	int MyStrLen();
	void MyStrCat(MyString& b);
	~MyString();
};

