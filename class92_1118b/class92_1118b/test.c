#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//Ä£ÄâÊµÏÖstrcmp	

int mystrcmp(const char*str1, const char*str2){
	assert(str1 != NULL&&str2 != NULL);
	while (str1 != '\0'&&str2 != '\0'){
		if (*str1 < *str2){
			return -1;
		}
		else if (*str1>*str2){
			return 1;
		}
			str1++;
			str2++;
	}
		if (*str1 < *str2){
			return -1;
	}
		else if (*str1>*str2){
			return 1;
	}
			return 0;
}
int main(){
	char str1[] = "hehe";
	char str2[] = "hehehe";
	int ret = mystrcmp(str1, str2);
	printf("%d\n", ret);
	system("pause");
	return 0;
}