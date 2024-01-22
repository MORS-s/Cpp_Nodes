#include <stdio.h>

#define BOOL int

typedef long long quentity;

typedef int Bool;


int main(void)
{
	//char ch = 'A';
	//short s = 1;
	//int i = 10;
	//long l = 100L;
	//long ll = 1000LL;

	//float f = 3.14f;
	//double d = 2.67;

	//int i = -1;
	//unsigned int u = 100;
	//if (i < u)
	//{
	//	printf("i is less then u\n");
	//}
	//else
	//{
	//	printf("i is greater then u\n");
	//}


	//强制（显示）类型转换

	////1.计算浮点数的小数部分
	//double d = 3.14, fraction;
	//fraction = d - (int)d;
	//
	////2.表明肯定会发生的转换，提高代码的可读性
	//float f = 3.14;
	//// ...
	//int i = (int)f;

	////3.对类型转换进行更精确地控制
	//int dividend = 4, divisor = 3;
	//double quotient;
	//quotient = (double)dividend / divisor;

	////4.可以避免溢出
	//long long millisPerDay = 24 * 60 * 60 * 1000;
	//long long nanosPerDay = (long long)24 * 60 * 60 * 1000 * 1000 * 1000;
	//printf("%lld\n", nanosPerDay / millisPerDay);

	int i = 3;

	// int arr[i];
	int arr[sizeof(i)];


	return 0;
}