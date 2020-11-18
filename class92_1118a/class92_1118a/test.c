#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

//Ä£ÄâÊµÏÖstrcpy
char* strpy(char* dest,const char* src){
	if (dest == NULL || src == NULL){
		return NULL;
	}
	char* ret = dest;
	while (*src != '\0'){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return ret;
}

int main(){
	char name1[] = "zhangsan";
	char name2[]= "lisi";
	strcpy(name1, name2);
	printf("%s\n", name1);
	system("pause");
	return 0;
}