#include<stdio.h>
#include<stdlib.h>
void reverse_string(char* string){//编写一个函数 reverse_string(char * string)（递归实现）
	if (*(++string)!='\0'){
		reverse_string(string);
	}
	printf("%c", *(string - 1));
}
int main(){
	char *a = "hello bit!";
	reverse_string(a);
	printf("\n");
	system("pause");
	return 0;
}
