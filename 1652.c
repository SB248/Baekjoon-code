#include<stdio.h>

int main()
{
	char map[102][102] = { 0, };
	int n = 0, an[2] = { 0, };
	int r = 0, len = 0, se[2] = { 101, 0 };

	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%s", &map[i]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			r = 0;
			while (map[i][j] == '.' && map[i][j + 1] == '.')
			{
				j += 1;
				r++;
			}
			if (r > 0)
				an[0]++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			r = 0;
			while (map[j][i] == '.' && map[++j][i] == '.')
			{
				j += 1;
				r++;
			}
		
			if (r > 0)
				an[1]++;
		}
	}
	printf("%d %d", an[0], an[1]);
}