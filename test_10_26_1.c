#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//����ǰn���ĺ�
int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
			ret *= n;
		    sum += ret;
	}
		printf("%d", sum);
	return 0;
}