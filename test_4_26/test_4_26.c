#define _CRT_SECURE_NO_WARNINGS 1
//Floyd-Warshall

#include <stdio.h>
int main()
{
	int e[10][10], k, i, j, n, m, t1, t2, t3;
	int lnf = 99999999;//infinity��ʾ������
	//����n��m,n��ʾ���������m��ʾ�ߵ�����
	scanf("%d %d", &n, &m);
	//��ʼ��
	for (i = 1; i <= n; i++)
		for (j = 1; j <= n; j++)
			if (i == j)e[i][j] = 0;
			else e[i][j] = lnf;
	//�����
	for (i = 1; i <= m; i++)
	{
		scanf("%d %d %d", &t1, &t2, &t3);
		e[t1][t2] = t3;
	}
	for (k = 1; k <= n; k++)
		for (i = 1; i <= n; i++)
			for (j = 1; j <= n; j++)
				if (e[i][j] > e[i][k] + e[k][j])
					e[i][j] = e[i][k] + e[k][j];
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%10d", e[i][j]);
		}
		printf("\n");
	}
	return 0;
}