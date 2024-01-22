#include <stdio.h>
#include <stdbool.h>


bool is_odd(int n);

int main(void)
{
	// 3.14 % 2.16;
	int i = -3, j = 4;
	printf("%d", i / j);
	
	bool isOdd = is_odd(-1);

	return 0;
}

bool is_odd(int n)
{
	return n & 1;
}