#include<stdio.h>
#include<windows.h>

void printmap(char theMap[3][3]) {
	for (int row = 0; row < 3; row++) {
	for (int col = 0; col < 3; col++) {
	printf("%d ", theMap[row][col]);
	}
	printf("\n");
	}
	// �ȴ�ӡ����һ��, ��һ�о��ǰ������е��к�
	// Ȼ���ڴ�ӡ�����ÿһ�е�ʱ���ٴ�ӡ�к�
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