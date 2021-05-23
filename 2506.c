#include<stdio.h>

int main()
{
	int n, a, c = 1, an = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);

		if (a == 1)
			an += c++;
		else if (a == 0)
			c = 1;
	}
	printf("%d", an);
}
