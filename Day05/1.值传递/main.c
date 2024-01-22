#include <stdio.h>
#include <stdlib.h>

#define SIZE(a) (sizeof(a)/sizeof(a[0]))

void swap(int a, int b);
int sum_arr(int arr[], int n);
int sum_array(int matrix[][4], int n);
void foo();

int main(void)
{
	//int a = 3, b = 4;
	//printf("a = %d,b = %d\n", a, b);
	//swap(a, b);
	//printf("a = %d,b = %d\n", a, b);

	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//printf("sum_arr = %d\n", sum_arr(arr, SIZE(arr)));
	//printf("sum_arr = %d\n", sum_arr(arr, 5));

	//int matrix[3][4] = { {1,2,3,4},{2,2,3,4},{3,2,3,4}};
	//printf("sum_martix = %d\n", sum_array(matrix,3));

	foo();
	printf("Exit form main.\n");
	return 0;
}

void foo()
{
	printf("Exit form foo.\n");
	exit(EXIT_FAILURE);
	
}

void swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int sum_arr(int arr[],int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int sum_array(int matrix[][4], int n)
{
	int sum_martix = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum_martix += matrix[i][j];
		}
	}

	return sum_martix;
}