#include<stdio.h>
#include<math.h>

int main()
{
	int a[3], n = 0, b = 0, c = 0;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
		if (i != 0 && a[i - 1] == a[i])
		{
			c = a[i];
			n++;
		}
		else if (a[i] > b)
			b = a[i];
	}
	if (a[0] == a[2])
	{
		n++;
		c = a[0];
	}

	if (n == 3)
		printf("%d", 10000 + c * 1000);
	else if (n == 1)
		printf("%d", 1000 + c * 100);
	else if (n == 0)
		printf("%d", b * 100);


}
//찾은 반례 : 3 6 3     틀린 이유 : 첫번째와 세번째만 일치할 경우를 고려하지 않음.
