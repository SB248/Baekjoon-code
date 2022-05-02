#include<stdio.h>

int main()
{
	int t, a[2], i, m[2];

	scanf("%d", &t);

	for (t; t > 0; t--)
	{
		scanf("%d %d", &a[0], &a[1]);


		for (i = 1, m[0] = 500; i <= 6; i++)
		{
			a[0] -= i;

			if (a[0] == -1 && i == 1)
				m[0] = 0;

			//printf("%d\n", i);

			if (a[0] <= 0)
				break;

			if (i < 3)  //금액 구하기
				m[0] -= (3 - i) * 100;
			else if (i == 3)
				m[0] = 50;
			else if (i > 3 && i <= 6)
				m[0] -= 20;

			//printf("%d\n", m[0]);
		}
		if (a[0] > 0)
			m[0] = 0;


		for (i = 1, m[1] = 512; i <= 16; i <<= 1)
		{
			a[1] -= i;
			//printf("%d\n", i);

			if (a[1] == -1 && i == 1)
				m[1] = 0;

			if (a[1] <= 0)
				break;

			m[1] >>= 1;  //금액 구하기

			//printf("%d\n", m[1]);
		}
		if (a[1] > 0)
			m[1] = 0;

		//printf("최종 : %d %d\n", m[0], m[1]);
		printf("%d\n", (m[0] + m[1]) * 10000);

	}
}
//a[0] == -1 조건문을 사용할 때, i == 1 조건을 안걸어줘서 틀렸었다. 