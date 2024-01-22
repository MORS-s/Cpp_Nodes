#include <stdio.h>

void foo();
void bar();


int main(void)
{
	//int a = 3;
	//printf("a = %d", a);

	//for (int i = 0; i < 10; i++) // i µÄ×÷ÓÃÓò£ºforÓï¾ä
	//{
	//	printf("a = %d", a);
	//	printf("i = %d", i);
	//}

	//printf("a = %d", a);
	//printf("i = %d", i);


	//printf("n = %d", n);


	foo();
	bar();
	return 0;
}

int n = 10;

void foo()
{
	printf("n = % d\n", n);
}

void bar()
{
	printf("n = % d\n", n);
}
