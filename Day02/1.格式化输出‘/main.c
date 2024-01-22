#include<stdio.h>

int main(void)
{
	int i = 40;
	float f = 849.12f;

	printf("%4d\n", 123);
	printf("%-4d\n", 123);
	printf("%4d\n", 1234);
	printf("%4d\n", 12345);

	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%f|%10f|%10.2f|%-10.2f|\n", f, f, f, f);

	return 0;
}