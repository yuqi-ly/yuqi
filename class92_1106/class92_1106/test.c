#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
//& --->  ��λ�루��0��0��

//| --->��λ����1��1��

//^ --->��λ�����ͬΪ0������Ϊ1��

//˼·���ȶ�m��n���а�λ���Ȼ���temp���а�λ�룬ͳ�ƶ������в�ͬΪ�ĸ���

int diff_bit(int m, int n){
	int tmp = m^n;
	int count = 0;
	while (tmp)
	{
		tmp = tmp&(tmp - 1);
		count++;
	}
	return count;
}

int main()
{
	int m, n;
	printf("�������������֣� ");

	scanf("%d %d", &m, &n);

	int ret = diff_bit(m, n);

	printf("ret=%d\n", ret);

	system("pause");
	return 0;
}