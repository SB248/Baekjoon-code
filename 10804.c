#include <stdio.h>

int main()
{
	int c[20] = { 1, 2,3 ,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int s, e, save[20] = { 0, };

	for (int i = 0; i < 10; i++)
	{
	
		scanf("%d %d", &s, &e);
		s--;
		e--;

		for (int n = 0; n <= e - s; n++)
		{
			save[n] = c[e - n];
			//printf("%d %d\n", n, e - n);
		}

		for (int n = s; n <= e; n++)
		{
			c[n] = save[n - s];
			//printf("%d %d\n", n, n - s);
		}

	}
	for (int i = 0; i < 20; i++)
		printf("%d ", c[i]);
}