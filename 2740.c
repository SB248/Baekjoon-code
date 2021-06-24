#include <stdio.h>

int main()
{
	int n[2], m[2], k = 0, a = 0;
	short c1[101][101] = { 0, }, c2[101][101] = { 0, };
	int an[101][101] = { 0, };

	while (a++ < 2)
	{

		if (a == 1)
			scanf("%d %d", &n[0], &m[0]);
		else if(a==2)
			scanf("%d %d", &n[1], &m[1]);

		for (int i = 0; i < n[a - 1]; i++)
			for (int j = 0; j < m[a - 1]; j++)
				if (a == 1)
					scanf("%d", &c1[i][j]);
				else if (a == 2)
					scanf("%d", &c2[i][j]);

	}
	for (int i = 0; i < n[0]; i++)
	{
		for (int j = 0; j < m[1]; j++)
		{
			
			for (int x = 0, y = 0; x < n[1] && y < m[0]; x++, y++)
				an[i][j] += c1[i][y] * c2[x][j];
			printf("%d ", an[i][j]);
		}
		printf("\n");
	}
}
