#include<stdio.h>
#include<windows.h>
#include<time.h>
#pragma warning(disable:4996)
#define MAX_ROW 9
#define MAX_COL 9
#define DEFAULT_MINE_COUNT 10

int menu(){//�û������˵�
	printf("======================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("======================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void printMap(char theMap[MAX_ROW][MAX_COL]){
	printf("  |");
	for (int col = 0; col < MAX_COL; col++) {
		printf("%d ", col);
	}
	printf("\n");
	printf("--+------------------\n");
	for (int row = 0; row < MAX_ROW; row++) {
		printf(" %d|", row);
		for (int col = 0; col < MAX_COL; col++) {
			printf("%c ", theMap[row][col]);
		}
		printf("\n");
	}
}
void init(char ShowMap[MAX_ROW][MAX_COL], char MineMap[MAX_ROW][MAX_COL]){//��ʼ����ͼ
	//�ȳ�ʼ��showmap
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			ShowMap[row][col] = '*';//ShowMap�ĳ�ʼ�������á�*����ʾ
		}
	}
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			MineMap[row][col] = '0';//MineMap�ĳ�ʼ�������á� ����ʾ
		}
	}
	int n = DEFAULT_MINE_COUNT;
	while (n > 0) {
		// �����׵����λ��. 
		int row = rand() % MAX_ROW; 
		int col = rand() % MAX_COL;
		if (MineMap[row][col] == '1') {
			// �����ǰλ���Ѿ�������, ��ֱ�ӽ����´�ѭ��, ����
			// �������λ��. 
			continue;
		}
		MineMap[row][col] = '1';
		n--;
	}
}
void updateShowMap(char showMap[MAX_ROW][MAX_COL],
	char mineMap[MAX_ROW][MAX_COL], int row, int col) {
	int count = 0;
	for (int r = row - 1; r <= row + 1; r++) {
		for (int c = col - 1; c <= col + 1; c++) {
			if (r < 0 || r >= MAX_ROW
				|| c < 0 || c >= MAX_COL) {
				continue;
			}
			if (mineMap[r][c] == '1') {
				count++;
			}
		}
	}
	showMap[row][col] = count + '0';
}
void game() {
	//1.������ͼ����ʼ����
	//2.��ӡ��ͼ��
	//3.�����ȡ���Ҫ�������겢У��
	//4.�жϸ�λ�õ������Ƿ��е��ף�����е��ף�����Ϸ����
	//5.������ǵ���, ͳ�Ƶ�ǰλ����Χ�׵ĸ���, ����ʾ����ͼ��.
	//6.�ж���Ϸ�Ƿ�ʤ��
	char ShowMap[MAX_ROW][MAX_COL] = { 0 };
	char MineMap[MAX_ROW][MAX_COL] = { 0 };
	init(ShowMap, MineMap);
	int openedBlockCount = 0;
	while (1){
		printMap(MineMap);
		printf("===================\n");
		printMap(ShowMap);
		int row = 0;
		int col = 0;
		printf("������Ҫ����������(row,col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("���������������\n");
			continue;
		}
		if (ShowMap[row][col] != '*'){
			printf("��ǰλ���Ѿ�������\n");
			continue;
		}
		if (MineMap[row][col] == '1'){
			printf("���ȵ�����,��Ϸ������\n");
			printMap(MineMap);
			break;
		}
		updateShowMap(ShowMap, MineMap, row, col);
		openedBlockCount++;
		if (openedBlockCount == MAX_ROW * MAX_COL - DEFAULT_MINE_COUNT) {
			printf("��Ϸʤ��!\n");
			printMap(MineMap);
			break;
		}
	}
}
int main(){
	srand((unsigned int)time(0));
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("GoodBye!\n");
		}
		else{
			printf("���������������������룡\n");
		}
	}
	system("pause");
	return 0;

}