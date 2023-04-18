#include <iostream>
#include "String.h"
#include "Array.h"
using namespace std;

int main()
{
	/*String str1;
	String str2{15};
	String str3{"Hello world"};

	cout << "1 string -> ";
	str1.Show();
	cout << "2 string -> ";
	str2.Show();
	cout << "3 string -> ";
	str3.Show();

	cout << "1 set string -> ";
	str1.SetString();
	cout << "2 set string -> ";
	str2.SetString();
	cout << "3 set string -> ";
	str3.SetString();


	cout << "1 string -> ";
	str1.Show();
	cout << "2 string -> ";
	str2.Show();
	cout << "3 string -> ";
	str3.Show();*/

	//Array arr1;
	//Array arr2{ 10 };

	/*	cout << "array 1 -> ";
		arr1.SetSize(5).InitArray().SortArray().ShowArray();
		cout << "array 2 -> ";
		arr2.SetSize(15).InitArray().SortArray().ShowArray();

		arr2.SetSize(7).ShowArray();

		cout << "array 1 -> " << "minimum = " << arr1.GetMinElem()
			<< "\nmaximum = " << arr1.GetMaxElem() << endl;
		cout << "array 2 -> " << "minimum = " << arr2.GetMinElem()
			<< "\nmaximum = " << arr2.GetMaxElem() << endl;*/

	//const Array arr3{ 5 };
	//cout << arr1.GetSize() << endl;
	//cout << arr2.GetSize() << endl;
	//cout << arr3.GetSize() << endl;

	const Array arr;
	cout << arr.GetSize();
}
