#include<stdio.h>
#include<windows.h>

int amount(int money){//����ˮ����
	int num = money;
	int empty = num;
	while (empty > 1){
		num = num + empty / 2;
		if(empty % 2 == 0){
			empty = empty / 2;
		}
		else{
			empty = empty / 2 + 1;
		}
	}
	return num;
}
int main(){
	int num = amount(20);
	printf("һ��������%dƿ��ˮ\n", num);
	system("pause");
	return 0;
}