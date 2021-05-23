#include<stdio.h>

int main()
{
	int t, n, an;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		
		for(an = 0;n > 0; n >>= 1, an++)
		{
			if (n % 2 == 1)
				printf("%d ", an);

			if (n == 1)
				break;
		}
	}

}
