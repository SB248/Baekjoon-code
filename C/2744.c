#include<stdio.h>

int main()
{
	char str[101] = { 0, };

	scanf("%s", str);

	for (int i = 0; str[i] != NULL; i++)
		if ('a' <= str[i] && 'z' >= str[i])
			str[i] += ('A' - 'a');
		else if ('A' <= str[i] && 'Z' >= str[i])
			str[i] += ('a' - 'A');
	printf("%s", str);
}