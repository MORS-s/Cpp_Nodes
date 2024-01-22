#include <stdio.h>

void swap(int *a, int *b);
void findMinMax(int arr[], int n, int* min, int* max);

int main(void)
{
	//int i = 1;
	//int* p = &i;
	//*p = 2;
	//printf("i = %d", i);

	//int* p = 0x7f;
	//printf("*p = %d\n", *p);

	//int a = 3, b = 4;
	//int* p = &a;
	//int* q = &b;
	//*p = *q;
	//printf("a= %d b = %d\n", a, b);
	//printf("a= %d b = %d\n", *p, *q);

	//int a = 3, b = 4;
	//printf("befor:a = %d b = %d\n", a, b);
	//swap(&a, &b);
	//printf("after:a = %d b = %d\n", a, b);

	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int min, max;
	//findMinMax(arr, 10, &min, &max);
	//printf("min = %d,max = %d\n", min, max);

	//int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* p = &arr[2];
	//int* q = &arr[5];
	//printf("*p - q = %d\n", p - q);
	//printf("*p - q = %d\n", q - p);

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sum = 0;
	int* p = &arr[0];
	while (p < &arr[10])
	{
		sum += *p++;
	}
	printf("sum = %d\n", sum);

	return 0;
}

void findMinMax(int arr[], int n, int* min, int* max)
{
	*min = arr[0];
	*max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
		else if (arr[i] < *min)
		{
			*min = arr[i];
		}
	}
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

