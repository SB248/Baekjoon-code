#include<stdio.h>
#include<math.h>
#include<string.h>

int ch(char);

int main()
{
	long long int an = 0;
	int b = 0, len = 0;
	char n[100] = { 0, };
	 
	scanf("%s %d", n, &b);

	len = strlen(n) - 1;

	for (int i = 0; n[i] != NULL; i++)
	{
		an += ch(n[i]) * pow(b, len - i);
	}
	printf("%lld", an);

}

int ch(char c)
{
	int x =  ('9' < c) ? 10 + (c - 'A') : c - '0';
	//printf("%d  \n", x);
	return x;
}