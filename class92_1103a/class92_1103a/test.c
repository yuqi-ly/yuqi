#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0; int b = 0; int c = 0;
	scanf("%d%d", &a, &b);
	printf("a=%d,b=%d\n", a, b);
	//շת����������Լ��
	while (a%b)
	{
		c = a%b;
		a = b;
		b = c;

	}
	printf("a��b�����Լ��=%d\n", b);
	system("pause");
	return 0;
}
