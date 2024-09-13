#ifndef ARRAY_H 
#define ARRAY_H 
#include "number.h" 

class TArray
{
	int size;
	number* elements;
public:
	TArray(int n);
	~TArray();
	void insertElem();
	void midAndSKO();
	void insertionSortAbove();
	void insertionSortBeyond();
	void changeSize(int newSize);
	void changeElement(number, int);
	void print();
};

#endif // ARRAY_H 