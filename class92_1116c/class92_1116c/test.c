#include<stdio.h>

int main(){
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr)); // 6
	printf("%d\n", strlen(arr + 1)); // 5
	printf("%d\n", strlen(&arr + 1)); // ���Ͳ�ƥ��
	printf("%d\n", strlen(&arr)); // 6  ���Ͳ�ƥ��
	printf("%d\n", strlen(&arr[0])); // 6
	printf("%d\n", strlen(*&arr)); // 6
	printf("%d\n", strlen(&*arr)); // 6
	printf("%d\n", strlen(&arr[1] + 1));
	system("pause");
	return 0;
}