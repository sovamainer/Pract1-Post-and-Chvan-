#include <iostream>
#include "array.h"
#include "number.h"

using namespace std;

Array::Array() {
	size = 0;
	elements = new number[size];
	for (int i = 0; i < size; i++) {
		cin >> elements[i];
	}
}

Array::Array(int n) {
	size = n;
	elements = new number[size];
	for (int i = 0; i < size; i++)
	{
		cin >> elements[i];
	}
}

Array::~Array()
{
	delete[] elements;
}

void Array::print()
{
	for (int i = 0; i < size; i++)
	{
		cout << elements[i] << " ";
	}
}

void Array::averAndSko()
{
	number sum = 0;
	number average = 0;
	number sumSko = 0;
	number sko = 0;
	for (int i = 0; i < size; i++)
	{
		sum += elements[i];
	}
	average = sum / size;
	for (int i = 0; i < size; i++)
	{
		sumSko += sumSko + (elements[i] - average) * (elements[i] - average);
	}
	sko = sqrt(1 / (size - 1) * sumSko);
	cout << "Среднее значение элементов: " << average << "\n";
	cout << "СКО элементов: " << sko << "\n";
}