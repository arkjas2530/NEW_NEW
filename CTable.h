#include "CSortTable.h"

class CTable
{
private:
	int *table; // tablica ktora bedzie sortowana :D

public:
	///////////////////////////////////////////////////
	// KONSTRUKOTRY
	///////////////////////////////////////////////////
	CTable(int n); // odpowiada za tworzenie tablicy 

	///////////////////////////////////////////////////
	// DESTRUKTORY
	///////////////////////////////////////////////////
	~CTable();
	

	///////////////////////////////////////////////////
	// METODY
	///////////////////////////////////////////////////
	int size(); // sprawdza rozmiar tablicy
	int swap(); // zamienia dwie tablice TEGO typu


	//	Weronika
	void bubbleSort();		// Sortowanie bombelkowe
	void selectionSort();	// Sortowanie przez wybieranie
	void quickSortH();		// Sortowanie szybkie Hoare'a

	//	Arek
	void shakerSort();		// Sortowanie bombelkowe wariant wahadlowym
	void insertSort();		// Sortowanie przez wstawianie
	void heapSort();		// Sortowanie przez kopcowanie

	//	Dominik
	void bubbleSortCOM();	// Sortowanie bombelkowe z ciagla kontrla monotonicznosci
	void bucketSort();		// Sortowanie kube³kowe
	void quickSortL();		// Sortowanie szybkie Lomuta


};