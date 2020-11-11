#include<stdio.h>
#include<windows.h>

int main(){//猜凶手
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++){//0为假，1为真（三真一假）
		if (((killer != 'A') + (killer == 'C') + (killer == 'D')
			+(killer != 'D')) == 3){
			printf("凶手就是%c\n",killer);
		}
	}
	system("pause");
	return 0;
}