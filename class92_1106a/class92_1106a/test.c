#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main(){//打印整数二进制的奇数位和偶数位
	int num = 0;
	printf("请输入一个数：");
	scanf("%d", &num);
	//偶数序列
	for (int i = 31; i >= 1; i -= 2){
		printf("%d", 1 & (num >> i));
	}
	printf("\n");
	//奇数序列
	for (int j = 30; j >= 0; j -= 2){
		printf("%d", 1 & (num >> j));
	}
	printf("\n");
	system("pause");
	return 0;
}