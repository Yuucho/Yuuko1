#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int evencount = 0;
	int oddcount = 0;
	int flag = 0;
	int arr[100] = { 0 };
	while (1)
	{
		printf("���������ݸ�����\n");
		while ((scanf("%d", &n)) != EOF)
		{
			evencount = oddcount = 0;
			getchar();
			printf("���������ݣ�\n");
			for (int i = 0; i < n; ++i)
			{
				scanf("%d", &arr[i]);
				if (arr[i] % 2 == 0)
					evencount++;
				else
					oddcount++;
			}
			printf("evencount=%d,oddcount=%d\n", evencount, oddcount);
			if (getchar() == '\n')
				break;
		}	
		printf("�Ƿ�������룬������0��������1\n");
		scanf("%d", &flag);
		if (flag)
			break;
	}
	return 0;
}