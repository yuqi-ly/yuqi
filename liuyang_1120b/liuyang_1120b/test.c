#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
//Ä£ÄâÊµÏÖmemcpy

void* myMemcpy(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (size_t i = 0; i < num; i++) {
		//*(dest + i) = *(src + i);
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}
int main(){
	char str1[50] =  { 0 };
	char str2[50] = "jianjian";
	myMemcpy(str1, str2,strlen(str2));
	printf("%s\n",str1);

	system("pause");
	return 0;
}