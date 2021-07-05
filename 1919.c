#include<stdio.h>
#include<math.h>

int main()
{
	int a[30] = { 0, }, b[30] = { 0, };
	int s = 0, len = 0, an = 0;

	while (1)
	{
		scanf("%c", &s);
		if(s == '\n')
			break;
		a[s - 'a']++;
	}
	s = 0;
	while (s != '\n')
	{
		scanf("%c", &s);
		if (s == '\n')
			break;
		b[s - 'a']++;
	}

	for (int i = 0; i < 30; i++)
	{
		if (a[i] > b[i])
			an += a[i] - b[i];
		if (a[i] < b[i])
			an += b[i] - a[i];
	}
	printf("%d", an);
}