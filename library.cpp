#include "library.cpp",0

int *Libery::creatTable(int _n)
{
	table = nullptr;
	try
	{
		table = new int[_n];
	}
	catch(std::bad_alloc &e)
	{
		cout << &e << endl;
	}

	return table;
}
