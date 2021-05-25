#include<stdio.h>

int main()
{
	int t, n[3];

	scanf("%d", &t);

	n[0] = (t / 10);
	for (int i = 1; i < 3; i++)
	{
		n[i] = n[i - 1] / (7 - i);
		n[i - 1] %= (7 - i);
	}

	if (t % 10 != 0)
		printf("-1");
	else
		printf("%d %d %d", n[2], n[1], n[0]);

	
}
