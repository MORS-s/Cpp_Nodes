#include<stdio.h>
#include<math.h>

#define PI 3.1415926
double average(double (*f)(double), double a, double b);

int main()
{
	double avg = average(sin, 0, PI);
	printf("avg = %lf\n", avg);

	return;
}

//double average(double (*f)(double), double a, double b)
//{
//	return (*f)((a + b) / 2);
//}

double average(double f(double), double a, double b)
{
	return f((a + b) / 2);
}

