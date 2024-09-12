#include <iostream>
#include "array.h"
#include "number.h"

using namespace std;

Array::Array() {
	size = 0;
	elements = new number[size];
	for (int i = 0; i < size; i++) {
		cin >> elements[i];
		cout << elements[i];
	}
}

Array::Array(int n) {
	size = n;
	elements = new number[size];
	for (int i = 0; i < n; i++) {
		cin >> elements[i];
		cout << elements[i];
	}
}

Array::~Array()
{
	delete[] elements;
}

void Array::print() {

}