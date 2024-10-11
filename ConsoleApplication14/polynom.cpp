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
	coeffs.changeElement(roots.getElem(0), 0);

	for (int k = 2; k < degree; k++)
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

}

number TPolynom::calcPolynom(number x)
{

}