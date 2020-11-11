#include<stdio.h>
#include<windows.h>
#define n 5

int main(){//杨辉三角
	int arr[n][n];
	for (int i = 0; i < n; i++){//行
		for (int j = 0; j < i + 1; j++){//列
			if (j == 0 || j == i){//每行第一个和最后一个都为1
				arr[i][j] = 1;
				printf("%d\t", arr[i][j]); 
			}
			else{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%d\t",arr[i][j]);
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}