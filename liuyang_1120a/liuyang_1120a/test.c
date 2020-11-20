#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
//Ä£ÄâÊµÏÖmemmove
void* myMemcpy(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	for (size_t i = 0; i < num; i++) {
		*(pDest + i) = *(pSrc + i);
	}
	return dest;
}

void* myMemmove(void* dest, const void* src, size_t num) {
	assert(dest != NULL && src != NULL);
	char* pDest = (char*)dest;
	char* pSrc = (char*)src;
	if (pSrc <= pDest && pDest <= pSrc + num) {
		for (size_t i = num - 1; i >= 0; i--) {
			*(pDest + i) = *(pSrc + i);
		}
		return dest;
	}
	else {
		return myMemcpy(dest, src, num);
	}
}
int main(){
	char str1[] = "abcd";
	char str2[] = "efgh";
	myMemmove(str1, str2,strlen(str1));
	printf("%s", str1);

	system("pause");
	return 0;
}