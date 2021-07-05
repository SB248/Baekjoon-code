#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	char str[51] = { 0, }, an[51] = { 0, };

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		scanf("%s", str);
		if (i == 0)
			strcpy(an, str);
		
		for (int j = 0; str[j] != NULL; j++)
			if (an[j] != str[j])
				an[j] = '?';
	}
	printf("%s", an);
}