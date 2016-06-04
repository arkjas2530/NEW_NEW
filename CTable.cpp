#include "CTable.h"

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
	return sizeof(table)/sizeof(table[0]);
}
