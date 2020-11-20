#include<stdio.h>
#include<stdlib.h>
//Ä£ÄâÊµÏÖstrstr

const char* myStrstr(const char* str1, const char* str2) {
	if (str1 == NULL || str2 == NULL) {
		return NULL;
	}

	const char* blackPtr = str1;

	while (*blackPtr != '\0') {

		const char* redPtr = blackPtr;
		const char* subPtr = str2;

		while (*redPtr != '\0' && *subPtr != '\0'
			&& *redPtr == *subPtr) {
			redPtr++;
			subPtr++;
		}
		if (*subPtr == '\0') {
			return blackPtr;
		}
		blackPtr++;
	}
	return NULL;
}
int main(){
	char str1[] = "hello";
	char str2[] = "llo";
	char* ret = myStrstr(str1,str2);
	printf("%s\n", ret);

	system("pause");
	return 0;
}