#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
void mcl(int n){
	int sum = 0;
	for (int i = 1; i <= n; i++){
		sum = i*n;
		printf("%d*%d=%d\t", i, n, i*n);
	}
}
int main(){
	int n = 0;
	printf("请输入一个整数：");
		scanf("%d",&n);
		mcl(n);
	system("pause");
	return 0;
}