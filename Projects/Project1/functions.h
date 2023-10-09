#include <iostream>

using namespace std;

struct MyArray
{
	int* arr;
	int size{};

	void create_arr(int);
	void add_el(int);
	void add_el_ind(int, int);
	void remove_el(int);
	int* get_arr();
	int get_arr_ind(int);
	void clear_arr();
};