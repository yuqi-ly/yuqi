#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int fib(int n) {//�ݹ�
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
	printf("������Ҫ���ҵ�������");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}











/*int fib(int n) {//�ǵݹ�
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	// ���������ֱ��ʾ�� i - 1 ��͵� i - 2 ��
	int last1 = 1;
	int last2 = 1;
	// �˴� cur ��ʾ��ǰ����� i ��
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
	printf("������Ҫ���ҵ�������");
	scanf("%d", &n);
	printf("%d\n",fib(n));
	system("pause");
	return 0;
}*/