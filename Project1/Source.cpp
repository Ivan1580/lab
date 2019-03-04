#include <iostream>
#include "Func.h"

Complex add(Complex x, Complex y)
{
	Complex summ;
	summ.Re = x.Re + y.Re;
	summ.Im = x.Im + y.Im;
	return summ;
}
Complex subtract(Complex x, Complex y)
{
    Complex razn;
	razn.Re = x.Re - y.Re;
	razn.Im = x.Im - y.Im;
	return razn;
}
Complex multiply(Complex x, Complex y)
{
	Complex ymnog;
	ymnog.Re = x.Re * y.Re - x.Im * y.Im;
	ymnog.Im = x.Im * y.Re + x.Re * y.Im;
	return ymnog;
    
}
Complex divide(Complex x, Complex y)
{
	Complex delen;
	delen.Re = (x.Re * y.Re + x.Im * y.Im)/ (y.Re * y.Re + y.Im * y.Im);
	delen.Im = -((x.Re * y.Im - x.Im * y.Re)/(y.Re * y.Re + y.Im * y.Im));
	return delen;
}
