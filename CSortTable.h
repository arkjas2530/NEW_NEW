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
	Losuje liczby do tablicy
	Arg: n - wielko�� tablicy
	*/
	void menuPseudoChoice(int _n);
	/*
	Pokazuje menu glowne
	*/
	void show_menu();
	/*
	Algorytm do wprowadzania elent�w do tablicy z klawiatury
	Arg: n - wielko�� tablicy
	*/
	void menuUserChoice(int _n);
	void menu();
	/*
	Switch, g�owne menu
	*/
	void choice();
	
public:
	CSortTable();

};
