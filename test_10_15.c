/*��ȭ��Ϸ����Ӯ��3����ʤ/�����ָ�/��ʾ�ɼ���*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
	int human;     /*��ҵ�����*/
	int comp;      /*�����������*/
	int win_no;    /*ʤ������*/
	int lose_no;   /*ʧ�ܴ���*/
	int draw_no;   /*ƽ�ִ���*/
	char *hd[] = { "ʯͷ", "����", "��" };
	/*---��ʼ����---*/
	void initialize(void)
	{
		win_no = 0;
		lose_no = 0;
		draw_no = 0;
		srand(time(NULL));     /*�趨���������*/
		printf("��ȭ��Ϸ��ʼ����\n");
	}
	/*---���в�ȭ��Ϸ����ȡ/�������ƣ�---*/
	void jyanken(void)
	{
		int i;
		comp = rand() % 3;
		do {
			printf("\nʯͷ������...");
			for (i = 0; i < 3; i++)
				printf(" (%d)%s", i, hd[i]);
			printf(": ");
			scanf("%d", &human);     /*��ȡ��ҵ�����*/
		} while (human < 0 || human > 2);
	}
	/*---����ʤ��/ʧ��/ƽ�ִ���---*/
	void count_no(int result)
	{
		switch (result)
		{
		case 0:		draw_no++;
			break;
		case 1:		lose_no++;
			break;
		case 2:		win_no++;
			break;
		}
	}
	/*---��ʾ�жϽ��---*/
	void disp_result(int result)
	{
		switch (result)
		{
		case 0:		puts("ƽ�֡�");
			break;
		case 1:		puts("�����ˡ�");
			break;
		case 2:		puts("��Ӯ�ˡ�");
			break;
		}
	}

	int main(void)
	{
		int judge;
		initialize();
		do {
			jyanken();
			/*��ʾ���������ҵ�����*/
			printf("�ҳ�%s, ���%s��\n", hd[comp], hd[human]);
			judge = (human - comp + 3) % 3;
			count_no(judge);
			disp_result(judge);
		} while (win_no < 3 && lose_no < 3);
		printf(win_no == 3 ? "\n ��Ӯ�ˡ�\n" : "\n ��Ӯ�ˡ�\n");
		printf("%dʤ%d��%dƽ��\n", win_no, lose_no, draw_no);
		return 0;
	}
