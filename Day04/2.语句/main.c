#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


#define MAX_LINES 25

int main(void)
{
	int line_num = 10;
	int page_num = 1;

	if (MAX_LINES == line_num)
	{
		line_num = 0;
		page_num++;
	}

	//int n;
	//scanf("%d", &n);
	//
	//if (n > 0)
	//	printf("n is positive.\n");
	//else if (0 == n)
	//	printf("n is zero.\n");
	//else
	//	printf("n is negative\n");

	/*int grade;
	scanf("%d", &grade);
	switch (grade)
	{
	case 4:
		printf("Excellent!\n");
	case 3:
		printf("Good!\n");
	case 2:
		printf("Average!\n");
	case 1:
		printf("Poor!\n");
	case 0:
		printf("Failing!\n");
	default:
		printf("Illeage grade!\n");
	}*/

	//int i, j, k;
	//i = 1;
	//j = 2;
	//k = i > j ? i : j;			// i == 1, j == 2, k == 2;
	//k = i > j ? i++ : j++;		// i == 1, j == 3, k == 2;
	//k = (i >= 0 ? i : 0) +j;	// i == 1, j == 3, k == 4;


	//int i = 10;
	//while (i > 0)
	//{
	//	printf("Counting down£¨while£©£º%d\n", i--);
	//}

	//int j = 10;
	//do{
	//	printf("Counting down£¨do...while£©£º%d\n", j--);
	//} while (j>0);

	//for (int k = 10; k > 0; k--)
	//{
	//	printf("Counting down£¨for£©£º%d\n",k);
	//}

	//int n;
	//while (1)
	//{
	//	printf("Enter a number (enter 0 to stop):");
	//	scanf("%d", &n);

	//	if (0 == n)
	//	{
	//		break;
	//	}
	//	printf("%d squared is %d\n", n, n * n);
	//}

	//int sum = 0, count = 0, n;

	//while (count < 10)
	//{
	//	scanf("%d", &n);
	//	if (0 == n)
	//	{
	//		continue;
	//	}
	//	sum += n;
	//	count++;

	//}
	//printf("sum = %d\n", sum);


	int sum = 0, count = 0, n;
	
	for (sum = 0, count = 0; count < 10; count++)
	{
		scanf("%d", &n);
		if (0 == n)
		{
			continue;
		}
		sum += n;
	}
	printf("sum = %d\n", sum);
	
	
	return 0;
}