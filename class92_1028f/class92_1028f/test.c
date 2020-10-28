#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)//递归方式实现打印一个整数的每一位
int rac(int n){
	if (n > 9){
		 rac(n/ 10);
	}printf("%d  ",( n % 10));
} 
int main(){
	int n = 0; 
	printf("请输入一个整数：");
	scanf("%d", &n);
	rac(n);
	system("pause");
	return 0;
}