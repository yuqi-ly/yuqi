#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
void change(int *i,int *j){//实现一个函数来交换两个整数的内容。
	int p = *i;
	*i = *j;
	*j = p;
	printf("交换后的整数：%d %d", *i,*j);
}
int main(){
	int i = 0;
	int j = 0;
	printf("请输入两个整数:");
	scanf("%d %d", &i,&j);
	change(&i, &j);
system("pause");
return 0;
}