#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int fib(int n) {//递归
	if (n == 1) {
		return 1;
		}
	if (n == 2) {
		return 1;
		}
	return fib(n - 1) + fib(n - 2);
	}
int main(){
	int n = 0;
	printf("请输入要查找的项数：");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}











/*int fib(int n) {//非递归
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	// 这俩变量分别表示第 i - 1 项和第 i - 2 项
	int last1 = 1;
	int last2 = 1;
	// 此处 cur 表示当前这个第 i 项
	int cur = 0;
	for (int i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}
int main(){
	int n = 0;
	printf("请输入要查找的项数：");
	scanf("%d", &n);
	printf("%d\n",fib(n));
	system("pause");
	return 0;
}*/