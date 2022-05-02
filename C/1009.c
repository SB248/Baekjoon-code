#include<stdio.h>

int main()
{
	long long int n;
	int t, a, b;
	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%d %d", &a, &b);

		if (a % 10 == 0)
		{
			n = 10;
		}
		else
		{
			n = a;
			while (--b > 0)
			{
				n *= a;
				n %= 10;
			}
		}
		if (n == 10)
			printf("10\n");
		else
			printf("%lld\n", n % 10);

	}


}