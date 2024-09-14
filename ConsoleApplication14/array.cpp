#include <iostream> 
#include "array.h" 
#include "number.h" 

using namespace std;

TArray::TArray(int n) {
	size = n;
	elements = new number[size];
	for (int i = 0; i < size; i++) {
		elements[i] = 0;
	}
}

void TArray::insertElem() {
	for (int i = 0; i < size; i++) {
		cin >> elements[i];
	}
	system("cls");
}

void TArray::midAndSKO() {
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
		sumSko += (elements[i] - average) * (elements[i] - average);
	}
	sko = sqrt((number)1 / (size - 1) * sumSko);
	cout << "�������: " << average << "\n";
	cout << "���: " << sko << "\n";
	system("pause");
}

void TArray::insertionSortAbove() {
	for (int i = 1; i < size; i++) {
		int key = elements[i];
		int j = i - 1;


			while (j >= 0 && elements[j] > key) {
				elements[j + 1] = elements[j];
				j--;
			}
		elements[j + 1] = key;
	}
}

void TArray::insertionSortBeyond() {
	for (int i = 1; i < size; i++) {
		int key = elements[i];
		int j = i - 1;

		while (j >= 0 && elements[j] < key) {
			elements[j + 1] = elements[j];
			j--;
		}
		elements[j + 1] = key;
	}
}

void TArray::changeSize(int newSize) {
	number* newElements = new number[newSize];
	for (int i = 0; i < (newSize < size ? newSize : size); i++) {
		newElements[i] = elements[i];
	}


	if (newSize > size) {
		for (int i = size; i < newSize; i++) {
			newElements[i] = 0;
		}
	}


	delete[] elements;


	elements = newElements;

	size = newSize;

	cout << "������ ������� ������� �� " << newSize << " ���������.\n";
	system("pause");
}

void TArray::changeElement(number elem, int index) {
	if (index >= 0 && index <= size - 1) {
		elements[index] = elem;
		cout << "�������!\n";
	}
	else {
		cout << "�������� � ����� �������� �� ����������\n";
	}
	system("pause");
}

void TArray::print() {
	for (int i = 0; i < size; i++) {
		cout << elements[i] << " ";
	}
	cout << endl;
}

TArray::~TArray()
{
	delete[] elements;
}