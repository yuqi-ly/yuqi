#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//qsort,��������
//void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
//base-- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ�롣
//nitems-- �� base ָ���������Ԫ�صĸ�����
//size-- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ��
//compar-- �����Ƚ�����Ԫ�صĺ�����������ָ�루�ص�������
int cmp(const void* p1, const void* p2) {
	//����
	return *((int*)p1) - *((int*)p2);
}

int cmp2(const void* p1, const void* p2) {
	//�ַ���
	return *((char*)p1) - *((char*)p2);
}

int cmp3(const void* p1, const void* p2) {
	//�ַ���
	return strcmp(*((char**)p1), *((char**)p2));
}

int cmp4(const void* p1, const void* p2) {
	//������
	return *((double*)p1) - *((double*)p2);
}

int main() {
	int arr1[] = { 0, 53, 45, 89, 68, 75 };
	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");


	char arr2[] = { 'a', 'f', 'y', 'o', 'r', 'w' };
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
		printf("%c ", arr2[i]);
	}
	printf("\n");


	char* arr3[] = { "can", "I", "sing", "jump", "rap", "and basketball" };
	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
		printf("%s ", arr3[i]);
	}
	printf("\n");


	double arr4[] = { 0.0, 82.7, 16.5, 16.6, 50.9 };
	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) {
		printf("%f ", arr4[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}
