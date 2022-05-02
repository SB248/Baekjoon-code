#include<stdio.h>
#include<string.h>

int main()
{
	int n[2] = { 0, };

	while (1)
	{
		n[0]++;
		if (getchar() == 'h')
			break;
	}
	getchar();
	while (1)
	{
		n[1]++;
		if (getchar() == 'h')
			break;
	}

	if (n[0] >= n[1])
		printf("go");
	else
		printf("no");
}