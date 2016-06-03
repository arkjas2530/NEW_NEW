#include <iostream>
#include "CTable.h"

class CSortTable:public CTable
{
private:
	char sign;
	/*
	Tworzy tablice dynamiczn¹
	Arg: n - wielkoœæ tablicy
	*/
	int *creatTable(int _n);
	/*
	Arg: n - wielkoœæ tablicy
	*/
	void menuPseudoChoice(int _n);
	void show_menu();
	void menuUserChoice(int _n);
	void menu();
	void choice();
	
public:
	CSortTable();

};
