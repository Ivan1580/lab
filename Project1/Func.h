#pragma once
#ifndef COMPLEX_H
#define COMPLEX_H
struct Complex
{
	double Re;
	double Im;
};

Complex add(Complex x, Complex y);
Complex subtract(Complex x, Complex y);
Complex multiply(Complex x, Complex y);
Complex divide(Complex x, Complex y);
#endif