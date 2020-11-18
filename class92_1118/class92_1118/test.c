#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Ä£ÄâÊµÏÖstrlen
size_t mystrlen(const char* str){
	if (str == NULL){
		return 0;
	}
	size_t len = 0;
	while (str[len] != '\0'){
		len++;
	}
	return len;
}

int main(){
	char str[] = "abcdef";
	printf("%d\n", mystrlen(str));
	system("pause");
	return 0;
	
}
