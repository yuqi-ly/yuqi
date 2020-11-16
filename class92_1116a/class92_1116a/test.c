#include<stdio.h>

int main(){
	//×Ö·ûÊý×é
	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	printf("%d\n", sizeof(arr)); // 6, sizeof(char[6])
	printf("%d\n", sizeof(arr + 0)); // 4, sizeof(char*)
	printf("%d\n", sizeof(*arr)); // 1, sizeof(char)
	printf("%d\n", sizeof(arr + 1)); // 4
	printf("%d\n", sizeof(arr[1]));// 1, sizeof(char)
	printf("%d\n", sizeof(&arr));// 4, sizeof(char(*)[6])
	printf("%d\n", sizeof(*&arr)); // 6, sizeof(char[6])
	printf("%d\n", sizeof(&*arr));// 4, sizeof(char*)
	printf("%d\n", sizeof(&arr[1] + 1)); // 4, sizeof(char*)
	printf("%d\n", sizeof(&arr + 1)); // 4, sizeof(char(*)[6]);
	system("pause");
	return 0;
}