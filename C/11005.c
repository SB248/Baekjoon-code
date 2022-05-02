#include<stdio.h>
#include<math.h>

int main()
{
	short an[120] = { 0, };
	long long int n = 0;
	int b = 0, i;

	scanf("%lld %d", &n, &b);


	for (i = 0; n > 0; i++)
	{
		an[i] = n % b ;
		an[i] = (an[i] > 9) ? (an[i] + 'A' - 10) : an[i] + '0';
		n /= b;
		
	}

	for (--i; i >= 0; i--)
		printf("%c", an[i]);
	

}