#include<stdio.h>

int main()
{
	int n[6] = { 0, };
	int ab[5][20] = { 0, };
	int an[20];

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		int a = 1;
		for (int j = 2;;)
		{
			if (n[i] % j == 0)
			{
				ab[i][a] = j;
				ab[i][0] += j;
				n[i] /= j;
				a++;


			}
			else j++;

			if (n[i] == 1)
			{
				ab[i][a] = 1;
				break;
			}
		}
	}
	


}