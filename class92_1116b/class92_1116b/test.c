#include<stdio.h>

int main(){
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr)); // 7, sizeof(char[7]);
	printf("%d\n", sizeof(arr + 0)); // 4, sizeof(char*)
	printf("%d\n", sizeof(*arr)); // 1, sizeof(char)
	printf("%d\n", sizeof(arr[1])); // 1, sizeof(char)
	printf("%d\n", sizeof(&arr[0] + 1)); // 4, sizeof(char*)
	printf("%d\n", sizeof(&arr)); // 4 sizeof(char(*)[7])
	printf("%d\n", sizeof(*&arr)); // 7 sizeof(char[7])
	printf("%d\n", sizeof(&*arr)); // 4 sizeof(char*)
	printf("%d\n", sizeof(&arr + 1)); // 4 sizeof(char(*)[7])
	system("pause");
	return 0;
}