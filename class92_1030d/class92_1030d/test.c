#include<stdio.h>
#include<stdlib.h>
void reverse_string(char* string){//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
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
