#pragma once
class MyString
{
	const char* str;
	int size;
public:
	MyString(); //строка в 80 символов
	MyString(int size); //строка произвольного размера
	MyString(const char* userStr); //инициализация строкой пользователя
	MyString(const MyString& obj); //копирование строк
	void Input();
	void Print();
	MyString(const MyString& str); //поиск строки в подстроке
	int MyStrLen(); //возвращает длину строки
	void MyStrCat(MyString& b); //обьединение строк
	void MyDelChr(char c); //удаляет указанный символ
	~MyString();
};

