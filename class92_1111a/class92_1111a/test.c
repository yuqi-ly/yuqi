#include<stdio.h>
#include<windows.h>

int main(){//������
	int killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++){//0Ϊ�٣�1Ϊ�棨����һ�٣�
		if (((killer != 'A') + (killer == 'C') + (killer == 'D')
			+(killer != 'D')) == 3){
			printf("���־���%c\n",killer);
		}
	}
	system("pause");
	return 0;
}