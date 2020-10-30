#define _CRT_SECURE_NO_WARNINGS 1//strlen的模拟（递归实现）递归和非递归分别实现strlen
#include <stdio.h>
#include<windows.h>
int my_strlen(char *string)
{
	int count = 0;
	while (*string)
	{
		string++;
		count++;
	}
	return count;
}

int main()
{
	char *str = "abcdef";
	printf("%d\n", my_strlen(str));
	system("pause");
	return 0;
}
/*int strlen(char *string){//递归
	if (*string == '\0'){
		return 0;
	}
		return 1 + strlen(string + 1);
}

int main(){
	char *str = "abcdef";
	printf("%d\n", strlen(str));
	system("pause");
	return 0;
}*/