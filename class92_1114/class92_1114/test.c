#include<stdio.h>
int main()
{
	int x = 9;//计数使用使打印空格方便
	for (int i = 0; i < 9; i++)//代表9行，循环9次
	{

		for (int j = x; j>0; j--)//打印空格，每次空格减少一个
		{
			printf(" ");
		}
		x--;//使打印的空格每次减少一个
		for (int m = 0; m <= i * 2; m++)//打印 * 每次增加两个
		{
			printf("*");
		}

		printf("\n");//换行

	}
	//开始打印倒三角   如果上面打印9行，下面要么比上面多一行，要么少一行 我这里是少一行，下面8行
	int l = 2;
	for (int i = 8; i >0; i--)//打印8行
	{
		for (int j = 0; j<l; j++)//打印空格
		{
			printf(" ");
		}
		l++;
		for (int m = 0; m<i * 2 - 1; m++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}
