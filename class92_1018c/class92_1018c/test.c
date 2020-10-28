#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996) 
void year(int n){
	if ((n % 4 == 0) && (n %100 != 0) || (n %400 == 0)){
		printf("%d是闰年\n", n);
	}
	else{
		printf("%d不是闰年\n", n);
	}
}
int main(){
	int n = 0;
	printf("请输入年份：");
	scanf("%d",&n);
	year(n);
system("pause");

	return 0;
}