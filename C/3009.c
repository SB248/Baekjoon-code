#include<stdio.h>

int main()
{
	int a[6], r[2] = { 0, };

	for (int i = 0; i < 6; i++)
		scanf("%d", &a[i]);

	for (int i = 0; i < 2; i++)
	{
 		if (a[i] == a[2 + i]) //1, 2가 같을 경우
			r[i] = a[4 + i]; //3
		else if (a[2 + i] == a[4 + i]) //2, 3이 같을 경우
			r[i] = a[i]; //1
		else if (a[i] == a[4 + i]) //나머지(1, 3이 같을 경우)
			r[i] = a[2 + i];
	}
	printf("%d %d", r[0], r[1]);
}
