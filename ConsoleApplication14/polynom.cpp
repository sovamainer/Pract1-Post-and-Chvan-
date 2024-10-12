#include "polynom.h"
#include <iostream>

using namespace std;

TPolynom::TPolynom()
{
	seniorCoeff = 0;
	roots;
}

void TPolynom::calcCoeff()
{
	int degree = roots.getSize();
	coeffs.changeSize(degree + 1);
	coeffs.changeElement(1, 1); // ����. �������� ������ �������
	coeffs.changeElement(roots.getElem(0) * (-1), 0);

	for (int k = 2; k <= degree; k++)
	{
		// ����. �������� ������� k
		coeffs.changeElement(coeffs.getElem(k - 1), k);
		for (int i = k - 1; i > 0; i--)
		{
			coeffs.changeElement(coeffs.getElem(i - 1) - coeffs.getElem(i) * roots.getElem(k - 1), i);
		}
		coeffs.changeElement(coeffs.getElem(0) * roots.getElem(k - 1) * (-1), 0);
	}

	for (int i = 0; i <= degree; i++)
	{
		coeffs.changeElement(coeffs.getElem(i) * seniorCoeff, i);
	}
}

TPolynom::TPolynom(number seniorC, int len)
{
	seniorCoeff = seniorC;
	TArray r(len);
	roots = r;
	calcCoeff();
}

void TPolynom::printFirst()
{
	int degree = coeffs.getSize() - 1;
	for (int i = degree; i >= 0; i--)
	{
		if (coeffs.getElem(i) != 0)
		{
			if (i != degree)
			{
				cout << (coeffs.getElem(i) > 0 ? " + " : " ");
			}
			cout << coeffs.getElem(i);
			if (i > 0)
			{
				cout << "x ^ " << i;
			}
		}
	}
	cout << "\n";
}

void TPolynom::printSecond()
{
	cout << seniorCoeff;
	int degree = roots.getSize();
	for (int i = degree - 1; i >= 0; i--)
	{
		cout << "(x - " << roots.getElem(i) << ")";
	}
}

number TPolynom::calcPolynom(number x)
{
	number res = 0;
	int degree = coeffs.getSize() - 1;
	for (int i = degree; i >= 0; i--)
	{
		res = res * x + coeffs.getElem(i);
	}
	return res;
}

void TPolynom::input()
{
	cout << "������� ����������� an: ";
	cin >> seniorCoeff;
	int n;
	cout << "������� ���������� ������ ��������: ";
	cin >> n;
	roots.changeSize(n);
	cout << "������� ����� ��������: ";
	for (int i = 0; i < n; i++)
	{
		number root;
		cin >> root;
		roots.changeElement(root, i);
	}
	calcCoeff();
}

void TPolynom::changeCoeff(number newCoeff)
{
	seniorCoeff = newCoeff;
}

void TPolynom::changeRoot(int index, number newRoot)
{
	roots.changeElement(newRoot, index);
	calcCoeff();
}

void TPolynom::changeRootSize(int newSize)
{
	roots.changeSize(newSize);
	calcCoeff();
}