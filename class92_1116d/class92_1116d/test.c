#include<stdio.h>

int main(){
	char* p = "abcdef";

	printf("%d\n", sizeof(p)); // 4 sizeof(char*)
	printf("%d\n", sizeof(p + 1)); // 4 sizeof(char*)
	printf("%d\n", sizeof(*p)); // 1 sizeof(char)
	printf("%d\n", sizeof(p[0])); // 1 sizeof(char)
	printf("%d\n", sizeof(&p)); // 4 sizeof(char**)
	printf("%d\n", sizeof(&p[1] + 1)); // 4 sizeof(char*)
	printf("%d\n", sizeof(*&p)); // 4 sizeof(char*)
	printf("%d\n", sizeof(&*p)); // 4 sizeof(char*)
	system("pause");
	return 0;
}