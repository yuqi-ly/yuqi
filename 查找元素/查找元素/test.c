#include <stdio.h>
#include <windows.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int toFind = 2;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//ֻҪ[left,right]��Ϊ�����䣬��һֱ����ȥ.
	while (left <= right){
		int mid = (left + right) / 2; //mid��ʾ��ǰ�����м�λ�õ��±�.
		if (toFind < arr[mid]){      // ��ʱ������Ԫ�ر��м�Ԫ��С, �����Ҳ����䱻��̭��. 
			right = mid - 1;
		}
		else if (toFind>arr[mid]){  // ��ʱ������Ԫ�ر��м�Ԫ�ش�, ����������䱻��̭��.

			left = mid + 1;
		}
		else{
			printf("�ҵ��˶�Ӧ��Ԫ�أ��±�Ϊ:%d\n", mid);
			break;
		}
	}
	if (left > right){
		printf("��Ҫ���ҵ�Ԫ���ڸ������в����ڣ�\n");
	}
	system("pause");
	return 0;
}