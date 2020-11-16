#include<stdio.h>

int main(){
	char arr[] = "abcdef";
	printf("%d\n", strlen(arr)); // 6
	printf("%d\n", strlen(arr + 1)); // 5
	printf("%d\n", strlen(&arr + 1)); // 类型不匹配
	printf("%d\n", strlen(&arr)); // 6  类型不匹配
	printf("%d\n", strlen(&arr[0])); // 6
	printf("%d\n", strlen(*&arr)); // 6
	printf("%d\n", strlen(&*arr)); // 6
	printf("%d\n", strlen(&arr[1] + 1));
	system("pause");
	return 0;
}