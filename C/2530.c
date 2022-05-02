#include<stdio.h>

int main()
{
	int h, m, s, c;

	scanf("%d %d %d \n %d", &h, &m, &s, &c);

	s += c;
	m += (s / 60);
	s %= 60;
	h += (m / 60);
	m %= 60;
	h %= 24;

	printf("%d %d %d", h, m, s);
}
