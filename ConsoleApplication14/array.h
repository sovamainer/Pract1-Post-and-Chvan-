#ifndef ARRAY_H
#define ARRAY_H
#include "number.h"
#include <vector>

class Array
{
public:
	Array();
	Array(int n);
	~Array();

	void print();
protected:
	int size;
	number* elements;

};

#endif // ARRAY_H