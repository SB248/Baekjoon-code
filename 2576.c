#include<stdio.h>

int main()
{
	int n, o = 0, t =  -1;

	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &n);

		if (n % 2 == 1)
		{
			if (t == -1 || t > n)
				t = n;
			o += n;
		}
	}
	if (t == -1)
		printf("-1");
	else
		printf("%d \n%d", o, t);



}