#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

using namespace std;

class TComplex
{
public:
	TComplex();
	TComplex(double, double);
	TComplex(int);

	TComplex operator* (TComplex);
	TComplex operator+ (TComplex);
	TComplex operator- (TComplex);
	TComplex operator/ (TComplex);
	TComplex& operator= (TComplex);
	TComplex& operator+= (TComplex);
	bool operator == (TComplex);
	bool operator> (TComplex);
	bool operator< (TComplex);

	friend TComplex sqrt(TComplex);
	double re;
	double im;

	friend ostream& operator <<(ostream&, TComplex);
	friend istream& operator >>(istream&, TComplex&);
private:
	double r_abs;
	double phi;
};

#endif // COMPLEX_H