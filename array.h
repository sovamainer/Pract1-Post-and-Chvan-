#ifndef ARRAY_H 
#define ARRAY_H 
#include "number.h" 
#include <vector> 

class Array
{
	int size;
	number* elements;
public:
	Array(int n);

	void insertElem();
	void midAndSKO();
	void insertionSortAbove();
	void insertionSortBeyond();
	void changeSize(int newSize);
	void changeElement(number elem, int index);
	void print();
};

#endif // ARRAY_H 