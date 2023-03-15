#include <iostream>
#include "Complex.h"


int main()
{
	Complex a(1, 2), b = 3;
	cout << a << ", " << b << endl;
	cout << "\n" << endl;

	Complex c(1, 2);
	cout << a - c << endl;
	cout << a / c << endl;
	cout << c.Conjugate() << endl;
	cout << c.Mod() << endl;
	cout << c.Arg() << endl;
	cout << "\n" << endl;

	Complex v[4]{ 1,2, Complex(2,3) };
	for (int i = 0; i < 4; i++)
		cout << v[i] << "; ";
	cout << "\n" << endl;

	Complex* pc;

	pc = new Complex(1);
	cout << *pc << endl;
	cout << "Re: " << pc->Re << endl;
	cout << "Im: " << pc->Im << endl;
	delete pc;
	cout << "\n" << endl;

	pc = new Complex;
	cout << *pc << endl;
	cout << "Re: " << pc->Re << endl;
	cout << "Im: " << pc->Im << endl;
	delete pc;
	cout << "\n" << endl;

	pc = new Complex(1,2);
	cout << *pc << endl;
	cout << "Re: " << pc->Re << endl;
	cout << "Im: " << pc->Im << endl;
	delete pc;
	cout << "\n" << endl;

	pc = new Complex[3];
	cout << pc[1].Re << endl;
	delete[] pc;
	pc = new Complex[3]{ 1,2, Complex(2,3) };
	cout << pc[1].Re << endl;
	delete[] pc;
}

