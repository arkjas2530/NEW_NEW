class CTable
{
protected:
	int *table; // tablica ktora bedzie sortowana :D

public:

	///////////////////////////////////////////////////
	// METODY
	///////////////////////////////////////////////////
	int size(); // sprawdza rozmiar tablicy
	int swap(); // zamienia dwie tablice TEGO typu


	//	Weronika
	void bubbleSort();		// Sortowanie bąbelkowe
	void selectionSort();	// Sortowanie przez wybieranie
	void quickSortH();		// Sortowanie szybkie Hoare'a

	//	Arek
	void shakerSort();		// Sortowanie bąbelkowe wariant wahadlowym
	void insertSort();		// Sortowanie przez wstawianie
	void heapSort();		// Sortowanie przez kopcowanie

	//	Dominik
	void bubbleSortCOM();	// Sortowanie bąbelkowe z ciagla kontrla monotonicznosci
	void bucketSort();		// Sortowanie kubełkowe
	void quickSortL();		// Sortowanie szybkie Lomuta


};
