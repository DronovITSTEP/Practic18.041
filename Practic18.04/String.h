#pragma once
#include <iostream>
using namespace std;
/*
Разработать класс String, который в дальнейшем будет 
использоваться для работы со строками.
Класс должен содержать:
? Конструктор по умолчанию, позволяющий создать строку
длиной 80 символов;
? Конструктор, позволяющий создавать строку произвольного
размера;
? Конструктор, который создаёт строку и инициализирует её
строкой, полученной от пользователя;
? Конструктор копирования.
Класс должен содержать методы для ввода строк с клавиатуры
и вывода строк на экран.
*/
class String
{
	size_t size;
	char* str;
public:
	String(size_t s):size{s}, str{new char[s]}{
		str[0] = '\0';
	}
	String() : String(80) {}
	String(const char* s) :size{ strlen(s) + 1 }, str{ new char[size] } {
		strcpy_s(str, size, s);
	}
	String(const String& obj) : String(obj.str){}

	~String() {
		if (str) delete[] str;
	}

	void Show() {
		cout << str << endl;
	}
	void SetString() {
		char temp[255];
		gets_s(temp);
		if (str) delete[] str;
		size = strlen(temp) + 1;
		str = new char[size];
		strcpy_s(str, size, temp);
	}
};

