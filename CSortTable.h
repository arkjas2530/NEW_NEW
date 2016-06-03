#include <iostream>
#include "CTable.h"

class CSortTable:public CTable
{
private:
	char sign;

	int *creatTable(int _n);
	void menuSort();
	void show_menu();
	void menuUserChoice();
	void menu();
	void choice();
public:
	CSortTable();

};
