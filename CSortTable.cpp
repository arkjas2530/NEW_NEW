#include "CSortTable.h"
#include <cstdlib>

using std::cout;
using std::endl;
using std::cin;


CSortTable::CSortTable()
{
	for (;;)
	{
		show_menu();
		choice();
		cout << "Nacisnij Enter aby kontynuowac..." << endl;
		system("pause");
		system("cls");
	}
}

void CSortTable::choice()
{
	int n;
	cin >> sign;
	switch (sign)
	{
	case '1':
		cout << "Podaj iloœæ elementów do tablicy: " << endl;
		cin >> n;
		menuUserChoice();
		break;

	case '2':
		cout << "Podaj ilosc elementow do losowanie: " << endl;
		cin >> n;
		menuSort();
		break;
	case '3':
		menu();
		// TWORZENIE TABELKI Z DANYMI
		break;
	case'0':
		exit(0);
	default:
		cout << "Brak wyboru w menu. " << endl;

	}
}

// Do sprawdzenia jeszcze bo nie mam kompilatora :v
void CSortTable::menuUserChoice()
{
	cout << "Podaj ilosc element do posortowania: ";
	int n; cin >> n;
	
	for(int i = 0; i < n; i++)
		cin >> *table++;
}

void CSortTable::menuSort()
{
	cout << "Podaj ilosc element do posortowania: ";
	int n; cin >> n;
	
	// JAKAS GENERACJA LOSOWANIA, nie pisze bo nie mam jak tego sprawdzic
}

void CSortTable::show_menu()
{
	cout << "Menu Glowne" << endl;
	cout << "1. Realizacja algorytmow przy pomocy recznie uzupelnionej tablicy" << endl;
	cout << "2. Realizacja algorytmow przy pomocy tablicy uzupelnionej liczbami losowymi" << endl;
	cout << "3. Tworzenie tabeli" << endl;
	cout << "0. Opuszczenie programu" << endl;
}

void CSortTable::menuUserChoice()
{
}

void CSortTable::menu()
{
}

