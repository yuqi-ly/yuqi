#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	int m = 100;
	while (m <= 999)
	{
		i = m / 100;
		j = m / 10 - i * 10;
		k = m - 100 * i - 10 * j;
		if (m == i*i*i + j*j*j + k*k*k)
			printf("%d\n", m);
		m++;
	}
	system("pause");
	return 0;
}