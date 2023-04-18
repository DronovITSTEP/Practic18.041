#pragma once
#include <iostream>
using namespace std;

/*
Создайте класс Array (или используйте ранее созданный вами).
Класс Array – это класс динамического массива.
Размер массива может быть передан в качестве параметра или
задан с помощью вызова функции-члена.
Класс должен позволять заполнять массив значениями,
отображать содержимое массива, изменять размер массива,
сортировать массив, определять минимальное и максимальное значение.
Класс должен содержать набор конструкторов
(конструктор копирования обязателен), деструктор
*/
class Array
{
	int size;
	int* array;
public:
	Array(int s) :size{ s }, array{ s ? new int[s] : nullptr } {}
	Array() :Array(0) {}
	Array(const Array& arr) :Array(arr.size) {
		for (int i = 0; i < size; i++) {
			array[i] = arr.array[i];
		}
	}
	~Array() { 
		if(array) 
			delete[] array; 
	}

	Array& SetSize(int s) {
		int* temp = new int[s];
		for (int i = 0; i < min(size, s); i++) {
			temp[i] = array[i];
		}
		delete[]array;
		array = temp;
		size = s;
		return *this;
	}
	Array& InitArray() {
		for (int i = 0; i < size; i++) {
			array[i] = rand() % 10;
		}
		return *this;
	}
	void ShowArray() {
		for (int i = 0; i < size; i++) {
			cout << array[i] << " ";
		}
		cout << endl;
	}
	Array& SortArray() {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1; j++) {
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);
			}
		}
		return *this;
	}
	int GetMinElem() {
		int min = array[0];
		for (int i = 1; i < size; i++) {
			if (min > array[i]) min = array[i];
		}
		return min;
	}
	int GetMaxElem() {
		int max = array[0];
		for (int i = 1; i < size; i++) {
			if (max < array[i]) max = array[i];
		}
		return max;
	}

	int GetSize() const { 
		return size;
	}
};

