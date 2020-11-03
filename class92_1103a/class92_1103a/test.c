#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0; int b = 0; int c = 0;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	//辗转相除法求最大公约数
	while (a%b)
	{
		c = a%b;
		a = b;
		b = c;

	}
	printf("a和b的最大公约数=%d\n", b);
	system("pause");
	return 0;
}
