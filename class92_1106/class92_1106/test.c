#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)
//& --->  按位与（有0出0）

//| --->按位或（有1出1）

//^ --->按位异或（相同为0，相异为1）

//思路：先对m和n进行按位异或，然后对temp进行按位与，统计二进制中不同为的个数

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
	printf("请输入两个数字： ");

	scanf("%d %d", &m, &n);

	int ret = diff_bit(m, n);

	printf("ret=%d\n", ret);

	system("pause");
	return 0;
}