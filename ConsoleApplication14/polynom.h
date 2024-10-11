#ifndef POLYNOM_H
#define POLYNOM_H
#include "array.h"
#include "number.h"

class TPolynom
{
public:
	TPolynom();
	TPolynom(number, int);

	void printFirst();
	void printSecond();
	number calcPolynom(number);

private:
	TArray roots;
	number seniorCoeff;
	TArray coeffs;

	void calcCoeff();
};

#endif // POLYNOM_H