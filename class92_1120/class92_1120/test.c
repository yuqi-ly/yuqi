#include<stdio.h>
#include<stdlib.h>
//ģ��ʵ��strcat

char* myStrcat(char* dest, const char* src) {
	if (dest == NULL || src == NULL) {
		return dest;
	}
	char* p = dest;
	while (*p != '\0') {
		p++;
	}
	while (*src != '\0') {
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return dest;
}

int main(){
	char str1[1024] = "jianjian";//����һ��Ҫע�������±�Խ��Ĵ��� 
	char str2[] = "hehe";
	myStrcat(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}