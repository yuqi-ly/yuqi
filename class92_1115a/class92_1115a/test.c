#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void Rotate(char *p, int num, int s){//�ַ�������
	int i = 0;
	char set[10] = { ' ' };
	for (; i < num; i++){
		set[i] = *(p + i);
	}
	for (i = 0; i < s - num; i++){//ʣ�µ�Ԫ��
		*(p + i) = *(p + num + i);//һ���Ǽ���Ҫ��������ĸ�ĸ���
	}
	int j = 0;
	for (i = s - num; i < s; i++){//�������ʱ���������
		*(p + i) = set[j];
		j++;
	}
}
int main(){
	char str[] = { 'A', 'B', 'C', 'D', 'E' };
	int sum = sizeof(str) / (sizeof(str[0]));
	int n = 0;
	for (int i = 0; i < sum; i++){
		printf("%c ", str[i]);
	}printf("\n");
	printf("����Ҫ�������ٸ��ַ���\n");
	scanf("%d", &n);
	Rotate(str, n, sum);
	for (int i = 0; i < sum; i++){
		printf("%c ", str[i]);
	}
	system("pause");
	return 0;
}
