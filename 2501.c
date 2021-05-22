#include<stdio.h>

int main()
{
	int n, k, an;

	scanf("%d %d", &n, &k);

	for (int i = 1;k != 0 && i <= n; i++)
	{
		if (n % i == 0)
		{
			k--;
			an = i;
		}
	}

	printf("%d", (k == 0) ? an : 0);
}
