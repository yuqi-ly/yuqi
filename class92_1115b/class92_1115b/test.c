#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int reverse(char arr1[], char arr2[], int len)
{
	int n = len;
	int i = 0;
	while (n)
	{
		char tmp = arr1[0];
		for (i = 0; i<len - 1; i++)
		{
			arr1[i] = arr1[i + 1];
		}
		arr1[len - 1] = tmp;
		if (strcmp(arr1, arr2) == 0)//�ַ����ȽϺ���
			return 1;
		n--;
	}//������n�κ�arr1��arr2�������ʱwhileѭ���ͽ����˴�ʱn==0
	if (n == 0)
		return 0;
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int count = reverse(arr1, arr2, strlen(arr1));

	if (count == 1)
		printf("arr2��arr1��ת֮����ַ���\n");

	if (count == 0)
		printf("arr2����arr1��ת֮����ַ���\n");

	system("pause");
	return 0;
}