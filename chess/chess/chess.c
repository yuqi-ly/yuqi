#include<stdio.h>//������
#include<windows.h>
#pragma warning(disable:4996)
#include<time.h>
#define MAX_ROW 3
#define MAX_COL 3
//1.���ȴ�ӡ����(�������̳�ʼ��)
//2.�������
//3.�ж�ʤ��
//4.��������
//5.�ж�ʤ��
void Init(char ChessBoard[MAX_ROW][MAX_COL]){// �������е�ÿ��Ԫ�ض���Ϊ �ո�
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){ 
			ChessBoard[row][col] = ' ';
		}
	}
	
}
void PrintChessBoard(char ChessBoard[MAX_ROW][MAX_COL]){//��ӡ����
	printf("+---+---+---+\n");
	for (int row = 0; row < MAX_ROW; row++){
		printf("|  %c|  %c|  %c|\n", ChessBoard[row][0], ChessBoard[row][1], ChessBoard[row][2]);
		printf("+---+---+---+\n");
	}
}
void playerMove(char ChessBoard[MAX_ROW][MAX_COL]){//�������
	while (1){
		printf("�������������(row,col):");
			int row = 0;
			int col = 0;
		scanf("%d %d", &row, &col);
		if (row<0 || row>=MAX_ROW || col<0 || col>=MAX_COL){
			printf("���������������������룡\n");
			continue;
		}
		 if (ChessBoard[row][col] != ' '){
			printf("�˴��Ѿ�����!\n");
			continue;
		}
		ChessBoard[row][col] = 'x';
		break;
	}
}

void computerMove(char ChessBoard[MAX_ROW][MAX_COL]){//��������
	while (1){
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (ChessBoard[row][col] != ' '){
			continue;
		}
		ChessBoard[row][col] = 'o';
		break;
	}
}
int isfull(char ChessBoard[MAX_ROW][MAX_COL]){//�жϺ������
	for (int row = 0; row < MAX_ROW; row++){
		for (int col = 0; col < MAX_COL; col++){
			if (ChessBoard[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;
}
char iswin(char ChessBoard[MAX_ROW][MAX_COL]){//�ж�ʤ��
	for (int row = 0; row < MAX_ROW; row++){//�ж���

		if (ChessBoard[row][0] != ' ' &&ChessBoard[row][0] == ChessBoard[row][1] &&
			ChessBoard[row][0] == ChessBoard[row][2]){
			return ChessBoard[row][0];
		}
	}
	for (int col = 0; col < MAX_COL; col++){//�ж���
		if (ChessBoard[col][0] != ' ' &&ChessBoard[col][0] == ChessBoard[col][1] &&
			ChessBoard[col][0] == ChessBoard[col][2]){
			return ChessBoard[col][0];
		}
	}
	if (ChessBoard[0][0] !=' '  && ChessBoard[0][0] == ChessBoard[1][1] &&
		ChessBoard[0][0] == ChessBoard[2][2]){
		return ChessBoard[0][0];
	}
	if (ChessBoard[2][0] != ' ' && ChessBoard[2][0] == ChessBoard[1][1] &&
		ChessBoard[2][0] == ChessBoard[0][2]){
		return ChessBoard[2][0];
	}
	if (isfull(ChessBoard)){
		return 'q';
	}
	return ' ';
}

void game(){
	char ChessBoard[MAX_ROW][MAX_COL] = { 0 };
	Init(ChessBoard);
	char winner = ' ';
	while (1){
		PrintChessBoard(ChessBoard);//��ӡ����
		playerMove(ChessBoard);//�������
		winner = iswin(ChessBoard);//ʤ���ж�
		if (winner != ' '){
			break;
		}
		computerMove(ChessBoard);
		winner = iswin(ChessBoard);
		if (winner != ' '){
			break;
		}
	}
	PrintChessBoard(ChessBoard);
	if (winner == 'x'){
		printf("��ϲ����սʤ���˹����ϣ�\n");
	}
	if (winner == 'o'){
		printf("���ź��������˹����϶����磡\n");
	}
	if (winner == 'q'){
		printf("�����˹��������忪��\n");
	}
}
int menu(){
	printf("=====================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.������Ϸ\n");
	printf("=====================\n");
	printf("����������ѡ��");
		int choice = 0;
		scanf("%d", &choice);
		return choice;
}
int main(){
	srand((unsigned int)time(0));
	while (1){
		int choice = menu();//����һ���򵥵��û������˵�
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("Goodbye!\n");
			break;
		}
		else{
			printf("���������������������룡\n");
		}
}
	system("pause");
	return 0;
}