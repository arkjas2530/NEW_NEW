#include <iostream>
#include "CTable.h"

class CSortTable:public CTable
{
private:
	char sign;
	/*
	Tworzy tablice dynamiczn�
	Arg: n - wielko�� tablicy
	*/
	int *creatTable(int _n);
	/*
	Arg: n - wielko�� tablicy
	*/
	void menuPseudoChoice(int _n);
	void show_menu();
	void menuUserChoice(int _n);
	void menu();
	void choice();
	
public:
	CSortTable();

};
