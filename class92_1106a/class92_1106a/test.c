#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
int main(){//��ӡ���������Ƶ�����λ��ż��λ
	int num = 0;
	printf("������һ������");
	scanf("%d", &num);
	//ż������
	for (int i = 31; i >= 1; i -= 2){
		printf("%d", 1 & (num >> i));
	}
	printf("\n");
	//��������
	for (int j = 30; j >= 0; j -= 2){
		printf("%d", 1 & (num >> j));
	}
	printf("\n");
	system("pause");
	return 0;
}