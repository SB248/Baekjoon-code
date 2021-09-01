#define _USE_MATH_DEFINES

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double r;

	cin >> r;

	cout << fixed; cout.precision(6);

	cout << r * r * M_PI << '\n';

	cout << 2 * r * r; cout.precision(6);

}