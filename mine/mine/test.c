#include<stdio.h>
#include<windows.h>
#include<time.h>
#pragma warning(disable:4996)
#define MAX_ROW 9
#define MAX_COL 9
#define DEFAULT_MINE_COUNT 10

int menu(){//用户交互菜单
	printf("======================\n");
	printf("1.开始游戏\n");
	printf("0.结束游戏\n");
	printf("======================\n");
	printf("请输入您的选择：");
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
void init(char ShowMap[MAX_ROW][MAX_COL], char MineMap[MAX_ROW][MAX_COL]){//初始化地图
	//先初始化showmap
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			ShowMap[row][col] = '*';//ShowMap的初始化我们用‘*’表示
		}
	}
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			MineMap[row][col] = '0';//MineMap的初始化我们用‘ ’表示
		}
	}
	int n = DEFAULT_MINE_COUNT;
	while (n > 0) {
		// 生成雷的随机位置. 
		int row = rand() % MAX_ROW; 
		int col = rand() % MAX_COL;
		if (MineMap[row][col] == '1') {
			// 如果当前位置已经有雷了, 就直接进入下次循环, 重新
			// 产生随机位置. 
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
	//1.创建地图并初始化；
	//2.打印地图；
	//3.程序读取玩家要翻的坐标并校验
	//4.判断该位置的坐标是否有地雷，如果有地雷，则游戏结束
	//5.如果不是地雷, 统计当前位置周围雷的个数, 并显示到地图上.
	//6.判定游戏是否胜利
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
		printf("请输入要翻开的坐标(row,col):");
		scanf("%d %d", &row, &col);
		if (row < 0 || row >= MAX_ROW || col < 0 || col >= MAX_COL){
			printf("您输入的坐标有误！\n");
			continue;
		}
		if (ShowMap[row][col] != '*'){
			printf("当前位置已经翻开！\n");
			continue;
		}
		if (MineMap[row][col] == '1'){
			printf("您踩到雷了,游戏结束！\n");
			printMap(MineMap);
			break;
		}
		updateShowMap(ShowMap, MineMap, row, col);
		openedBlockCount++;
		if (openedBlockCount == MAX_ROW * MAX_COL - DEFAULT_MINE_COUNT) {
			printf("游戏胜利!\n");
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
			printf("您的输入有误，请重新输入！\n");
		}
	}
	system("pause");
	return 0;

}