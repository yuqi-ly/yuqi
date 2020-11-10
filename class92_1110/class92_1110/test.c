#include<stdio.h>
#include<stdlib.h>
void Reverse(char* str)
{//×Ö·û´®ÄæĞò
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char str[] = "hello bit";
	Reverse(str);
	printf("%s\n",str);
	system("pause");
	return 0;
}