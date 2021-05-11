#include<stdio.h>

int main()
{
	char s[51][51] = { 0, };
	int mm[51] = { 0, }, nn[51] = { 0, };
	int m, n, t = 0, an = 0, a = 0, b = 0; 

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
			scanf("%s", &s[i]);

	for (int i = 0; i < n; i++)
	{
		t = 0;
		for (int j = 0; j < m; j++)
		{

			if (s[i][j] == 'X')
			{
				t++;
				mm[j] = 1; //세로 검사, 1이면 경비병 있는 곳
			}
		}
		if (t > 0)
			nn[i] = 1; //가로 검사, 1이면 경비병 있는 곳
	}
	t = 0;

	for (int j = 0; j < m; j++)
		if (mm[j] == 0)
			b++;
	for (int i = 0; i < n; i++)
		if (nn[i] == 0)
			a++;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (nn[i] == 0 && mm[j] == 0)
			{
				t++;
				mm[j] = 1; nn[i] = 1;
				//printf("%d %d %d \n", a, b, t);
			}
		}
	}

	//printf("%d %d %d \n",a, b, t);
	an = a + b - t;

	printf("%d", an);

}
/*
반례
크기는 4 4로 동일하다.

X...
X..X
....
X..X
답: 2

X...

....

....

..XX
답: 2


*/
