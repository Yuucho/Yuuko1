#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 1;
		int sum = 0;
		int tmp = i;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow((tmp % 10), n);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}