#include <iostream>
#include "functions.h"

using namespace std;

void main()
{
	int* arr = {};
	int el;
	MyArray myArr{};

	cout << "The Array before changes:" << endl;
	myArr.create_arr(10);
	arr = myArr.get_arr();

	cout << "The Array after adding a new element:" << endl;
	myArr.add_el(30);
	myArr.get_arr();

	cout << "The Array after adding a new element by index:" << endl;
	myArr.add_el_ind(5, 20);
	myArr.get_arr();

	cout << "The Array after removing an element:" << endl;
	myArr.remove_el(4);
	myArr.get_arr();

	cout << "Getting the element of array by index:" << endl;
	el = myArr.get_arr_ind(7);
}