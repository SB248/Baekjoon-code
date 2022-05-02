#include<stdio.h>

int main()
{

	int n;

	scanf("%d", &n);

	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0 && j % 2 == 0)
				printf("*");
			else if (i % 2 == 1 && j % 2 == 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

}