#include<stdio.h>
#include<windows.h>

void printmap(char theMap[3][3]) {
	for (int row = 0; row < 3; row++) {
	for (int col = 0; col < 3; col++) {
	printf("%d ", theMap[row][col]);
	}
	printf("\n");
	}
	// 先打印出第一行, 第一行就是包含所有的列号
	// 然后在打印下面的每一行的时候再打印行号
	/*printf("  |");
	for (int col = 0; col < 3; col++) {
		printf("%d ", col);
	}
	printf("\n");
	printf("--+------------------\n");
	for (int row = 0; row <3; row++) {
		printf(" %d|", row);
		for (int col = 0; col < 3; col++) {
			printf("%c ", theMap[row][col]);
		}
		printf("\n");
	}*/
}
int main(){
	//int arr[3][3] = { 0 };
	////for (int row = 0; row < 3; row++){
	//	for (int col = 0; col < 3; col++){
	//		printf("%d", arr[2][col]);
	//	}
	//	//printf("\n");
	//
	char showmap[3][3] = { 1 };
	printmap(showmap);
	system("pause");

	return 0;
}