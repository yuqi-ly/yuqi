#include<stdio.h>//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
#include<windows.h>
int DigitSum(int n) {
	if (n < 10) {
		return n;
	}
	return n % 10 + DigitSum(n / 10);
}
int main() {
	int ret = DigitSum(1792);
	printf("%d", ret);
	system("pause");
	return 0;
}
