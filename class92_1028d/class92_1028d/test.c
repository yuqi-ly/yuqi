#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
void change(int *i,int *j){//ʵ��һ�������������������������ݡ�
	int p = *i;
	*i = *j;
	*j = p;
	printf("�������������%d %d", *i,*j);
}
int main(){
	int i = 0;
	int j = 0;
	printf("��������������:");
	scanf("%d %d", &i,&j);
	change(&i, &j);
system("pause");
return 0;
}