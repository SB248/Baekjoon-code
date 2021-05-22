#include<stdio.h>

int main()
{
	int k, n, m, an;

	scanf("%d %d %d", &k, &n, &m);

	an = (k * n) - m;

	printf("%d", (an > 0) ? an : 0);
}
