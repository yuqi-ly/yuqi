#include<stdio.h>
#include<windows.h>
//void Reverse(int arr[], int size)//实现reverse()  函数完成数组元素的逆置。
//{
//	int left = 0;
//	int right = size - 1;
//	while (left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main(){
//	int arr[] = { 9, 2, 5, 7, 4, 3 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Reverse(arr, size);
//	for (int i = 0; i < size; i++){
//		printf("%d", arr[i]);
//	}
//	system("pause");
//	return 0;
//}
//int main(){//实现print()  打印数组的每个元素
//	int arr[2][4] = { { 4, 5,8,9 }, { 2, 7 ,6,1} };
//	for (int row = 0; row < 2; row++) {
//		for (int col = 0; col < 4; col++) {
//			printf("%d ", arr[row][col]);
//		}
//		printf("\n");
//
//	}
//	system("pause");
//	return 0;
//}
void Init(int arr[], int size, int ret){//实现函数init() 初始化数组为全0
	for (int i = 0; i < size; i++){
		arr[i] = ret;
		printf("%d\n", arr[i]);
	}
}
int main(){
	int arr[] = { 9, 5, 2, 7 };
	int ret = 0;
	int size = sizeof(arr) / sizeof(arr[0]);
	Init(arr, size, ret);

	system("pause");
	return 0;
}