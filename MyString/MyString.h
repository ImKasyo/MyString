#pragma once
class MyString
{
	const char* str;
	int size;
public:
	MyString() {
		size = 80;
		str = new char[size + 1];
	}
};

