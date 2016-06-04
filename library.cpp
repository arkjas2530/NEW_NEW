#include "library.h"

int *Libery::creatTable(int _n)
{
	int *board = nullptr;
	try
	{
		board = new int[_n];
	}
	catch(std::bad_alloc &e)
	{
		cout << &e << endl;
	}

	return table;
}
