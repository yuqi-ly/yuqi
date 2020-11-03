#include<stdio.h>
int main(){//½»»»Êý×é
	int arr1[] = { 1, 2, 3, 4 };
	int arr2[] = { 5, 6, 7, 8 };
	int i;
	for (i = 0; i<4; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
		
	}
	for (int k = 0; k < 4; k++){
		printf("%d", arr1[k]);
	}
	printf("\n");
	for (int k = 0; k < 4; k++){
		printf("%d", arr2[k]);
	}
	printf("\n");
	system("pause");
	return 0;
}

