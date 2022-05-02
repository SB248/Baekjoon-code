#include<stdio.h>

int main()
{
	int n[55] = { 0, }; //박스
	int m[55] = { 0, }; //책
	int in = 0, s = 100, an = 0;

	scanf("%d %d", &n[0], &m[0]);

	for (int i = 1; i <= n[0]; i++)
		scanf("%d", &n[i]);
	for (int i = 1; i <= m[0]; i++)
		scanf("%d", &m[i]);

	for (int i = 1; i <= m[0]; i++) //책
	{
		in = -1; s = 10000;
		for (int j = 1; j <= n[0]; j++)
		{
			//printf("%d // %d\n", m[j], n[i]);
			if ((m[i] <= n[j]) && (s > n[j] - m[i]))
			{
				s = n[j] - m[i];
				in = j;
			}

		}
		if (in >= 0)
		{
			n[in] -= m[i];
			//printf("%d\n", n[in]);
		}
	}

	for (int j = 1; j <= n[0]; j++)
		an += n[j];

	printf("%d", an);

}