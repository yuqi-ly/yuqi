#include<stdio.h>
#include<windows.h>
//void Reverse(int arr[], int size)//ʵ��reverse()  �����������Ԫ�ص����á�
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
//int main(){//ʵ��print()  ��ӡ�����ÿ��Ԫ��
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
void Init(int arr[], int size, int ret){//ʵ�ֺ���init() ��ʼ������Ϊȫ0
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