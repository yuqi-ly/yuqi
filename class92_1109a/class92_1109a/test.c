#include<stdio.h>
#include<windows.h>

void print_arr(int* arr, int sz)//ʹ��ָ���ӡ��������
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	system("pause");
	return 0;
}
