#include<stdio.h>

int main()
{
	int n, p[1000] = { 0, }, an = 0, a, b = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &p[i]);
		
		a = (i > 0) ? p[i] - p[i - 1] : 0;
		if (a > 0)
		{
			b += a;
		}
		else
			b = 0;
		if (an < b || an == 0)
			an = b;
		
	}
	printf("%d", an);
}