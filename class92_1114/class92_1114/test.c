#include<stdio.h>
int main()
{
	int x = 9;//����ʹ��ʹ��ӡ�ո񷽱�
	for (int i = 0; i < 9; i++)//����9�У�ѭ��9��
	{

		for (int j = x; j>0; j--)//��ӡ�ո�ÿ�οո����һ��
		{
			printf(" ");
		}
		x--;//ʹ��ӡ�Ŀո�ÿ�μ���һ��
		for (int m = 0; m <= i * 2; m++)//��ӡ * ÿ����������
		{
			printf("*");
		}

		printf("\n");//����

	}
	//��ʼ��ӡ������   ��������ӡ9�У�����Ҫô�������һ�У�Ҫô��һ�� ����������һ�У�����8��
	int l = 2;
	for (int i = 8; i >0; i--)//��ӡ8��
	{
		for (int j = 0; j<l; j++)//��ӡ�ո�
		{
			printf(" ");
		}
		l++;
		for (int m = 0; m<i * 2 - 1; m++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}
