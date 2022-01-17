#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//小乐乐前面有n人，电梯一次运12人，上下一共4分钟，小乐乐都是分钟后上楼
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", n / 12 * 4 + 2);
	return 0;
}