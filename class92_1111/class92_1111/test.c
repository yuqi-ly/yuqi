#include<stdio.h>
#include<windows.h>
#define n 5

int main(){//�������
	int arr[n][n];
	for (int i = 0; i < n; i++){//��
		for (int j = 0; j < i + 1; j++){//��
			if (j == 0 || j == i){//ÿ�е�һ�������һ����Ϊ1
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