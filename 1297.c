#include<stdio.h>
#include<math.h>

int main()
{
	int an[2] = { 0, };
	double x, y, n; //항상 너비x가 높이y보다 크다. 

	scanf("%lf %lf %lf", &n, &x, &y);

	// i * sqrt(x*x + y*y) == n;  sqrt(x*x) == x

	n = n / sqrt(x * x + y * y);

	an[0] = x * n;
	an[1] = y * n;


	printf("%d %d", an[0], an[1]);
}
