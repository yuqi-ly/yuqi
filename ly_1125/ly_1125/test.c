#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main(){
	int temp = 0;
	int A = 5;
	int B = 7;
	if (A<B){
		temp = B;
		B = A;
		A = temp;
	}
	for (int i = A; i > 0; i++){
		if (i % A == 0 && i % B == 0){
			printf("���ǵ���С������Ϊ��%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}