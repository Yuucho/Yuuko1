#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ŵ��
//3�����ӣ�a,b,c
//1������   a->c  1
//2������   a->b  a->c  b->c  3
//3������   a->c  a->b  c->b a->c  b->a  b->c  a->c  7
//64������  .......................................  2^(n-1)


void move(char pos1, char pos2)
{
	printf("%c->%c ", pos1, pos2);
}


//N:�������ӵĸ���
//pos1:��ʼλ��
//pos2:��תλ��
//pos3:����λ��
void Hanoi(int n,char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}
int main()
{
	Hanoi(1, 'A', 'B', 'C');
	printf("\n" );
	Hanoi(2, 'A', 'B', 'C');
	printf("\n" );
	Hanoi(3, 'A', 'B', 'C');
	return 0;
}