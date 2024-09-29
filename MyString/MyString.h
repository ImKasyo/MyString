#pragma once
class MyString
{
	const char* str;
	char* str1;
	int size;
public:
	MyString(); //������ � 80 ��������
	MyString(int size); //������ ������������� �������
	MyString(char* userStr); //������������� ������� ������������
	MyString(const MyString& obj); //����������� �����
	void Input();
	void Print();
	MyString(const MyString& str); //����� ������ � ���������
	int MyStrLen(); //���������� ����� ������
	void MyStrCat(MyString& b); //����������� �����
	void MyDelChr(char c); //������� ��������� ������
	~MyString();
};

