#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);

}
int main()
{
	int n = 0;
	printf("��������ڼ���쳲�������\n");
	scanf("%d", &n);
	fib(n);
	int ret = fib(n);
	printf("��%d��쳲�������Ϊ%d\n", n, ret);

	system("pause");
	return 0;
}
