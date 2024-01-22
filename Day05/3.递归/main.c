#include <stdio.h>

long long fib1(int n);
long long fib2(int n);
void hanoi(int n, char start, char middle, char target);
int joseph(int n);

int main(void)
{
	//printf("%lld", fib1(60));
	//printf("%lld", fib2(60));
	
	//hanoi(3, 'A', 'B', 'C');

	printf("%d\n", joseph(7));
	printf("%d\n", joseph(8));

	return 0;
}

long long fib1(int n) 
{
	if (0 == n) return 0;
	if (1 == n) return 1;
	return fib1(n - 1) + fib1(n - 2);
}

long long fib2(int n)
{
	if (0 == n) return 0;
	if (1 == n) return 1;
	int preFirst = 0, preSecond = 1;
	for (int i = 2; i <= n; i++)
	{
		int tmp = preFirst + preSecond; // �� i ���ֵ
		//Ϊ���� i + 1 ����׼��
		preFirst = preSecond;
		preSecond = tmp;	// ѭ���˳�ʱ preSecond �����˵� i ���ֵ
	}
	return preSecond;
}

void hanoi(int n, char start, char middle, char target)
{
	//base case
	if (1 == n)
	{
		printf("%c -> %c\n", start, target);
		return;
	}
	//���ƹ�ʽ
	hanoi(n - 1, start, target, middle);
	//���������Ӵ�start�ƶ���target��
	printf("%c -> %c\n", start, target);
	hanoi(n - 1, middle, start, target);
}

int joseph(int n)
{
	if (1 == n || 2 == n) return 1;
	if (n & 0x1)
	{
		return 2 * joseph((n - 1) / 2) + 1;
	}
	else
	{
		return 2 * joseph(n / 2) - 1;
	}
}