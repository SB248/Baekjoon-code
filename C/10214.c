#include<stdio.h>

int main()
{
	int y = 0, k = 0, t, vs;

	scanf("%d", &t);

	for (int i = 0; i < t; i++)
	{
		vs = 0;
		for (int n = 0; n < 9; n++)
		{
			scanf("%d %d", &y, &k);

			vs += (y - k);
		}
		if (vs > 0)
			printf("Yonsei\n");
		else if (vs < 0)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
}