#include <stdio.h>
#include <windows.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int toFind = 2;
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//只要[left,right]不为空区间，就一直找下去.
	while (left <= right){
		int mid = (left + right) / 2; //mid表示当前区间中间位置的下标.
		if (toFind < arr[mid]){      // 此时待查找元素比中间元素小, 于是右侧区间被淘汰掉. 
			right = mid - 1;
		}
		else if (toFind>arr[mid]){  // 此时待查找元素比中间元素大, 于是左侧区间被淘汰掉.

			left = mid + 1;
		}
		else{
			printf("找到了对应的元素，下标为:%d\n", mid);
			break;
		}
	}
	if (left > right){
		printf("所要查找的元素在该数据中不存在！\n");
	}
	system("pause");
	return 0;
}