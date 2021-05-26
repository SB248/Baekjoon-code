#include <iostream>
#include <string.h>

int main()
{

	char s[101] = { 0, };

	scanf("%[^\n]d", s);

	for(int i = 0; s[i] != NULL; i++) 
	{	
		if (s[i] >= 'A' && s[i] <= 'Z')
			if (s[i] + 13 > 'Z') // 딱 Z이상일 경우,
				s[i] = 'A' + (s[i] + 12 - 'Z');
			else
				s[i] += 13;

		if (s[i] >= 'a' && s[i] <= 'z')
			if (s[i] + 13 > 'z') // 딱 Z이상일 경우,
				s[i] = 'a' + (s[i] + 12 - 'z');
			else
				s[i] += 13;
	}

	printf("%s", s);
}
