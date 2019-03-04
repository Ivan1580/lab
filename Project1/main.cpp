#include <iostream>
#include "Func.h"
using namespace std;
int main()
{
	system("chcp 1251");
	system("cls");
	double x1, y1, x2, y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	Complex x = { x1, y1 };
	Complex y = { x2, y2 };
	Complex addition = add(x, y);
	Complex subtraction = subtract(x, y);
	Complex multiplication = multiply(x, y);
	Complex division = divide(x, y);
	cout << addition.Re << " + (" << addition.Im << ")i" << endl;
	cout << subtraction.Re << " + (" << subtraction.Im << ")i" << endl;
	cout << multiplication.Re << " + (" << multiplication.Im << ")i" << endl;
	cout << division.Re << " + (" << division.Im << ")i";
	system("pause");


}