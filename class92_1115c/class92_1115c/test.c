#include<stdio.h>
#include<stdlib.h>

typedef int(*Cmp)(int a, int b);//模仿qsort的功能实现一个通用的冒泡排序

void bubbleSort(int arr[], int size, Cmp cmp){
	for (int bound = 0; bound < size; bound++){
		for (int cur = size - 1; cur>bound; cur--){
			if (cmp(arr[cur - 1], arr[cur]) == 1){
				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;
			}
		}
	}
}
//约定：
//a在b之前，返回-1；
//a在b之后，返回1；
//a和b相等，返回0；
int less(int a,int b){
	if (a == b){
		return 0;
	}
	if (a < b){
		return -1;
	}
		return 1;
}
int main(){
	int arr[] = { 9, 5, 2, 7 };
	bubbleSort(arr,4,less);
	for (int i = 0; i < 4; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}