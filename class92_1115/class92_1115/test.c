#include <stdio.h>
#include<stdlib.h>

int main(){
	/*char a = 'a';
	char* p = &a;*/

	char name[1024] = "liujian";
	char* p2 = name;

	int* arr[4] = { 0 };
	int arr2[4] = { 0 };
	int(*p)[4] = &arr2;

	printf("%p\n", arr2);
	printf("%p\n", &arr2);

	system("pause");
	return 0;
}