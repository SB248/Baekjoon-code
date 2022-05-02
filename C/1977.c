#include<stdio.h>

int main()
{
	int m, n, a = 0, sum = 0, s = -1;

	scanf("%d\n%d", &m, &n);

	for (int i = m; i <= n; i++)
	{
		a = n / 2;
		while (i != a * a)
			if (a-- == 0)
				break;

		if (a * a == i || (a == 2 && i == 1))
		{
			sum += i;
			if (s == -1)
				s = i;
			//printf(" %d\n", sum);
		}
		
	}
	if (s == -1)
		printf("%d", s);
	else
		printf("%d \n%d", sum, s);

}