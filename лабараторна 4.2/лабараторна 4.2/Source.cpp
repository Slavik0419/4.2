// Lab_04_2.cpp
// < Царук В'ячеслав >
// Лабораторна робота № 4.2
// Цикли
// Варіант 25 
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		A = 8.1+x*x*x;
		if (x < -3.5)
			B = 1-pow(x,-5);
		else
			if (-3.5<=x<1 )
				B = cos(abs(x+1))/sin(abs(x + 1)) ;
			else
				B = atan(2*x)-log(x/2);
		y = A + B;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
