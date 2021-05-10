#include<stdio.h>

int main()
{
	int n[52] = { 0, };
	int a = 0, l = 0, r = 0;
	int an[2] = { 0, };

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d", &n[i]);
	}


	//0은 왼쪽 1은 오른쪽
	for (int i = 0; i <= a ; i++) 
	{
		if (l < n[i])
		{
			an[0]++;
			l = n[i];
		}

		if (r < n[a - i])
		{
			an[1]++;
			r = n[a - i];
		}
	}



	printf("%d \n%d", an[0], an[1]);

}