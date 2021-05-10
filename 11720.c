#include<stdio.h>

int main()
{

	int n;
	char num[101];
	int an = 0;

	scanf("%d", &n);

	scanf("%s", num);

	for (int i = 0; i < n; i++)
	{
		an += (num[i] - '0');
	}

	printf("%d", an);
}