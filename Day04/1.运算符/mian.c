#include <stdio.h>
#include <stdbool.h>

bool isOdd(int n);
bool isPowerOf2(unsigned int n);
int findSingleNumber(int arr[], int n);
bool isPowerOf2_2(unsigned int n);

int main(void)
{
	//float f;
	//int i;

	//f = i = 3.33f;

	//int i = 1;
	//printf("i = %d\n", i++);	// 1
	//printf("i = %d\n", i);		// 2

	//printf("i = %d\n", ++i);	// 3
	//printf("i = %d\n\n", i);		// 3

	//int j = 1;
	//printf("j = %d\n", j--);	// 1
	//printf("j = %d\n", j);		// 0

	//printf("j = %d\n", --j);	// -1
	//printf("j = %d\n", j);		// -1

	//int i, j, k;
	//i = 1;
	//j = 2;
	//k = ++i + j++;
	//printf("i = %d, j = %d, k = %d", i, j, k);

	//short s1 = 13, s2 = 13;
	//printf("s1 >> 2 = %d\n", s1 >> 2);
	//printf("s2 << 2 = %d\n", s2 << 2);

	int arr[] = { 1,2,3,4,5,4,3,2,1 };
	int singleNumber = findSingleNumber(arr, 9);
	printf("singleNumber = %d", singleNumber);

	return 0;
}


bool isOdd(int n)
{
	return n & 0x1;
}

bool isPowerOf2(unsigned int n)
{
	unsigned i = 1;
	while (n > i)
	{
		i <<= 1;
	}
	// ´ËÊ± i >= n
	return i == n;
}

bool isPowerOf2_2(unsigned int n)
{
	return (n & (n - 1)) == 0;
}

int findSingleNumber(int arr[], int n)
{
	int singleNumber = 0;
	for (int i = 0; i < n; i++)
	{
		singleNumber ^= arr[i];
	}
	return singleNumber;
}