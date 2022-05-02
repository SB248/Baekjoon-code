#include <stdio.h>
#include <string.h>

int main()
{
	int a, i = 0, len = 0;
	char an[1000001] = { 0, };

	scanf("%s", an);

	len = strlen(an);
	i = (len - 1) % 3;
	
	while (i < len)
	{
		a = 0;
		
		if (an[i] == '1')
			a += 1;
		if (an[i - 1] == '1' && i - 1 >= 0)
			a += 2;
		if (an[i - 2] == '1' && i - 2 >= 0)
			a += 4;

		printf("%d", a);
		i += 3;
		
	}
}