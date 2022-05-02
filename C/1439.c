#include<stdio.h>

int main()
{
	char s[1000001] = { 0, };
	int t = 0, f = 0;
	int c;

	scanf("%s", s);

	c = s[0];

	for (int i = 0; s[i] != NULL; i++)
	{
		if ((i > 0 && s[i] != s[i - 1]) || i == 0)
			if (s[i] == '0')
				f++;
			else if(s[i] == '1')
				t++;
	}

	if (t < f)
		printf("%d", t);
	else
		printf("%d", f);


}