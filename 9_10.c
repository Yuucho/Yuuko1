#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0;
	int arr[100];
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	//����
	for (i = 0; i < n - 1; i++)
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	//ȥ��-�Ƚ�n-1��
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		//��i+1��ߵ�Ԫ����ǰ�ƶ�
		if (arr[i] == arr[i + 1])
		{
			int k = 0;
			for (k = i; k < n - 1; k++)
			{
				arr[k] = arr[k + 1];
			}
			n--;
			i--;
		}
	}
	//��ӡ
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}