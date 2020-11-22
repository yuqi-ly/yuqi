#include<stdio.h>
#include<stdlib.h>
#pragma pack(8)
typedef struct A{
	char one;
	int two;
	char three;
	double four;
	short five;
	float six;
	int seven;
}A;
int main(){
	A a;
	printf("%d\n", sizeof(a));
	printf("%p\n", &a);
	printf("\n");
	printf("%p\n", &a.one);
	printf("%p\n", &a.two);
	printf("%p\n", &a.three);
	printf("%p\n", &a.four);
	printf("%p\n", &a.five);
	printf("%p\n", &a.six);
	printf("%p\n", &a.seven);

	system("pause");
	return 0;
}