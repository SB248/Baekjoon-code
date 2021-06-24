#include<stdio.h>
#include<string.h>

int main()
{
	int t = 0, c = 0;
	char str[25] = { 0, };

	scanf("%d", &t);

	while (EOF != scanf("%s", str))
	{
		c = getchar();

		for (int j = strlen(str) - 1; j >= 0; j--)
			printf("%c", str[j]);

		printf("%c", c);
	}
}

