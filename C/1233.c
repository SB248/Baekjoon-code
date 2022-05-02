#include<stdio.h>

int main()
{
	int s1, s2, s3, bb = 0, an = 100;
	int sss[100] = { 0, };

	scanf("%d %d %d", &s1, &s2, &s3);

	for (int a = 1; a <= s1; a++)
		for (int b = 1; b <= s2; b++)
			for (int c = 1; c <= s3; c++)
			{
				sss[a + b + c] += 1;
			}
	//같을 경우 작은 수를 우선시 한다. 
	for (int i = s1 + s2 + s3; i > 0; i--)
	{
		if (bb <= sss[i])
		{
			bb = sss[i];
			an = i;
		}
		
	}
	printf("%d", an);
}