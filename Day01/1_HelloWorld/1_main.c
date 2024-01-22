#define _CRT_SECURE_NO_WARNING
#include<stdio.h>				//预处理指令

#define Foo(x)  (1 + (x) + (x) * (x))
#define F() do{printf("Hello "); printf("World.\n");} while(0)
#define N 5

const int M = 10;

void N1();

int main(void)					//int：函数类型； void：没有参数；main：函数入口
{
	int i = 1, j = 2;
	int b = 9527;
	float f = 3.14f;
	int l;
	int k = Foo(5);			//(1 + (5) + (5) * (5))
	int m = 3 * Foo(5);		//3*(1 + (5) + (5) * (5))
	int n = Foo(1 + 2);		//(1 + (1+2) + (1+2) * (1+2))
	int z = Foo(++i);		//(1 + (++i) + (++i) * (++i))
	
	printf("i = %d, f = %f\n", i, f);
	
	if (0)
		F();

	int arr1[N]; //数组要求常量表达式 ，M不是常量表达式 int arr[M];错误

	// scanf("%d", &l);
	switch (i)
	{
	case N:						// case M: --> 报错，M不是常量表达式
		printf("N = %d", N);	
		break;
	}

	printf("HelloWorld!\n");	// ‘/n’：换行	
	printf("N * N = %d\n", N * N);
	printf("k = Foo(5) = %d\n", k);

	N1();

	return 0;					// return： 返回值，  值返回给操作系统
}

void N1()
{
	int i, j;
	i = 10;
	j = 20;
	printf("Hello Kitty.\n");
}