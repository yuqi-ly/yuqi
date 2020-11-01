#include<stdio.h>//实现一个对整形数组的冒泡排序
#include<windows.h>

void Sort(int arr[],int size){
	for (int border = 0; border < size; border++){
		for (int cur = size - 1; cur>border; cur--){
			if (arr[cur - 1] > arr[cur]){

				int temp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = temp;	
			}

		}
	}
}
int main(){
	int arr[4] = { 9, 5, 2, 7};
	int size = sizeof(arr) / sizeof(arr[0]);
	Sort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < size; i++){
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}