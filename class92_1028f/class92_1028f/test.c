#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
int rac(int n){
	if (n > 9){
		 rac(n/ 10);
	}printf("%d  ",( n % 10));
} 
int main(){
	int n = 0; 
	printf("������һ��������");
	scanf("%d", &n);
	rac(n);
	system("pause");
	return 0;
}