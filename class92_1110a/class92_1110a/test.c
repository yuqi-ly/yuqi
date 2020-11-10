#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int n, m;
	int i = 0;
	int sum = 0;
	scanf("%d%d", &n, &m);
	for (i = 0; i<m; i++)
	{
		n = n * 10 + 2;
		sum = sum + n;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
