#include<stdio.h>

int main()
{
	int in, out, n, an;

	n = 0, an = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d %d", &out, &in);

		n += (in - out);
		
		if (an < n)
			an = n;


	}
	printf("%d", an);


}