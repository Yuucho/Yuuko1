#include <stdio.h>
#include <Windows.h>
int find(int (*a)[3], int row, int col, int key)
{
	int i = 0;//�ӵ�0�п�ʼ��
	int j = col - 1;//�ӵ�0�е����һλ��ʼ��
	while (i < row && j >= 0)//����С�ڵ�row��,���ڵ��ڵ�0λ
	{
		if (key > a[i][j])//�������һλ������+1
		{
			i++;
		}
		else if (key < a[i][j])//С�����һλ��λ����ǰ-1
		{
			j--;
		}
		else {
			return 1;//�ҵ�����1ֵ
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
	int res = find(a, 3, 3, 7);
	if (res == 1)
	{
		printf("�ҵ��ˡ�\n");
	}
	else {
		printf("û�ҵ���\n");
	}

	system("pause");
	return 0;
}

