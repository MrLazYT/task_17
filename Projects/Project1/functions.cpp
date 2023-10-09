#include "functions.h"

void MyArray::create_arr(int s)
{
	srand(time(0));

	size = s;

	arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 200 - 100;
	}
}

void MyArray::add_el(int el)
{
	int* temp = arr;

	size++;

	arr = new int[size];

	for (int i = 0; i < size - 1; i++)
	{
		arr[i] = temp[i];
	}

	arr[size - 1] = el;

	if (temp != nullptr)
	{
		delete[] temp;
	}
}

void MyArray::add_el_ind(int ind, int el)
{
	int* temp = arr;

	size++;

	arr = new int[size];

	for (int i = 0; i < ind; i++)
	{
		arr[i] = temp[i];
	}

	arr[ind] = el;

	for (int i = ind + 1; i < size; i++)
	{
		arr[i] = temp[i - 1];
	}

	if (temp != nullptr)
	{
		delete[] temp;
	}
}

void MyArray::remove_el(int ind)
{
	if (size != 0)
	{
		int* temp = arr;

		size--;

		arr = new int[size];

		for (int i = 0; i < ind; i++)
		{
			arr[i] = temp[i];
		}

		for (int i = ind + 1; i < size + 1; i++)
		{
			arr[i - 1] = temp[i];
		}

		if (temp != nullptr)
		{
			delete[] temp;
		}
	}
}

int* MyArray::get_arr()
{
	cout << "[";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i];

		if (i < size - 1)
		{
			cout << ", ";
		}
	}

	cout << "]" << endl;

	return arr;
}

int MyArray::get_arr_ind(int ind)
{
	cout << "array[" << ind << "} = " << arr[ind];

	return arr[ind];
}

void MyArray::clear_arr()
{
	size = 0;

	arr = new int[size];
}