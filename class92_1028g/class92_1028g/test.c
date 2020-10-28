#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
//求n的阶乘的非递归方法.
/*int main() {
	int n = 0;
		int result = 1;
		printf("请输入一个整数：");
		scanf("%d",&n);
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		printf("%d", result);
		system("pause");
		return 0;
}*/
//求n的阶乘的递归方法
int factor(int n){
	if (n == 1){
		return 1;
	}
	return n*factor(n - 1);
}
int main(){
	int n = 0;
	printf("请输入一个整数：");
	scanf("%d",&n);
	factor(n);
	printf("%d", n*factor(n - 1));
	system("pause");
	return 0;
}