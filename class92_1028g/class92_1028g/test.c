#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
//��n�Ľ׳˵ķǵݹ鷽��.
/*int main() {
	int n = 0;
		int result = 1;
		printf("������һ��������");
		scanf("%d",&n);
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		printf("%d", result);
		system("pause");
		return 0;
}*/
//��n�Ľ׳˵ĵݹ鷽��
int factor(int n){
	if (n == 1){
		return 1;
	}
	return n*factor(n - 1);
}
int main(){
	int n = 0;
	printf("������һ��������");
	scanf("%d",&n);
	factor(n);
	printf("%d", n*factor(n - 1));
	system("pause");
	return 0;
}