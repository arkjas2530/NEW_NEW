#include "CTable.h"
#include<iostream>

CTable::CTable()
{
	table = nullptr;
}

CTable::~CTable()
{
	delete[] table;
}

int CTable::size()
{
	return sizeTable;
}

void CTable::bubbleSort()
{
	
	using std::cout;
	int sum; //zmienna optymalizujaca algorytm
	int a=0;
	int comp=0;//liczba porownan
	int temp;//zmienna przechowujaca wartosc tab

	for (int i = 0; i <  sizeTable- 1; i++)
	{
		sum = 0;

		for (int j = 0; j < sizeTable - 1-i; j++)
		{
			if (table[j] > table[j + 1])
			{
				temp = table[j];
				table[j] = table[j + 1];
				table[j + 1] = temp;
				a++;
				sum++;
			}
			comp++;
		}

		if (sum == 0)
			break;
	}

	
	cout << "tablica : ";
	for (int i = 0; i < sizeTable; i++)
		cout << table[i] << " ";

	cout << std::endl;
	cout << "Liczba przestawien = " << a << std::endl;
	cout << "Liczba porownan = " << comp << std::endl;

}
void CTable::selectionSort()
{
}
void CTable::quickSortH()
{}
void CTable::shakerSort()
{}
void CTable::insertSort()
{
	using std::cout;
	int temp;
	int j;
	int sum;
	int a=0;
	int comp = 0;

	for (int i = 0; i < sizeTable - 1; i++)
	{
		temp = table[i + 1];//zmienna porównywana z posortowana tab
		j = i;
		sum = 0;


		while (j >= 0 && table[j] > temp)
		{
			table[j + 1] = table[j];
			table[j] = temp;
			j--;
			a++;
			sum++;
		}

		if (j == -1) // w momencie w ktorym nie nastapi przestawienie( bo while zostanie spelniony trzeba dodac 1)
			comp += sum;
		else
			comp = comp + 1 + sum;

	}
	
	cout << "tablica : ";
	for (int i = 0; i < sizeTable; i++)
		cout << table[i] << " ";

	cout << std::endl;
	cout <<"Liczba przestawien = "<< a << std::endl;
	cout <<"Liczba porownan = "<< comp << std::endl;
}
void CTable::heapSort()
{}					
void CTable::bubbleSortCOM()
{}
void CTable::bucketSort()
{}
void CTable::quickSortL()
{}