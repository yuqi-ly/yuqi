#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int menu(){
	printf("====================\n");
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
	printf("====================\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void game(){
	int toGuess = rand() % 100 + 1;
	while (1){
		printf("������Ҫ�µ����֣�");
		int input = 0;
		scanf("%d", &input);
		if (input < toGuess){
			printf("���ˣ�\n");
		}
		else if (input>toGuess){
			printf("����!\n");
		}
		else{
			printf("�¶��ˣ�\n");
			break;
		}
	}
}
int main(){
	srand(time(0));
	while (1){
		int choice = menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("�˳�����\n");
			break;
		}
		else{
			printf("���������������������룡\n");
		}
	}

	system("pause");
	return 0;
}