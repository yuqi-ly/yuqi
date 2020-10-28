#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
	int a = 0;
	double b = 0;
	for (a = 1; a < 101; a++)
	{
		b = (1.0 / a) * (pow(-1, (a + 1))) + b;
	}
	printf("%f\n", b);
	system("pause");
	return 0;
}