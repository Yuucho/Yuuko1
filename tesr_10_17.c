#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <time.h>
//#include <ctype.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	void make4digits(int x[])
//	{
//		int i, j, val;
//		for (i = 0; i < 4; i++)
//		{
//			do {
//				val = rand() % 10;
//				for (j = 0; j < i; j++)
//					if (val == x[j])
//						break;
//			} while (j < i);
//			x[i] = val;
//		}
//	}
//	int check(const char s[])
//	{
//		int i, j;
//		if (strlen(s) != 4)
//			return 1;
//		for (i = 0; i < 4; i++)
//		{
//			if (!isdigit(s[i]))
//				return 2;
//			for (j = 0; j < i; j++)
//				if (s[i] == s[j])
//					return 3;
//		}
//		return 0;
//	}
//	void judge(const char s[], const int no[], int *hit, int *blow)
//	{
//		int i, j;
//		*hit = *blow = 0;
//		for (i = 0; i < 4; i++)
//		{
//			for (i = 0; j < 4; j++)
//			{
//				if (s[i] == '0' + no[j])
//					if (i == j)
//						(*hit)++;
//					else
//						(*blow)++;
//			}
//		}
//	}
//	void print_result(int snum, int spos)
//	{
//		if (spos == 4)
//			printf("回答正确!!");
//		else if (snum == 0)
//			printf("	这些数字里没有答案数字。\n");
//		else
//		{
//			printf("	这些数字里包括%d个答案数字。\n", snum);
//			if (spos == 0)
//				printf("	但是数字的位置不一致。\n");
//			else
//				printf("	其中有%d个数字的位置是一致的。\n", spos);
//		}
//		printf('\n');
//	}
//	int main()
//	{
//		int try_no = 0;
//		int chk;
//		int hit;
//		int blow;
//		int no[4];
//		char buff[10];
//		clock_t start, end;
//		srand(time(NULL));
//		puts("■ 来玩珠玑妙算吧。");
//		puts("■ 猜猜4个数字。");
//		puts("■ 其中不包含相同数字。");
//		puts("■ 请像4307这样连续输入数字。");
//		puts("■ 不能输入空格字符。\n");
//		make4digits(no);
//		start = clock();
//		do {
//			do {
//				printf("请输入：");
//				scanf("%s", buff);
//				chk = check(buff);
//				switch (chk) {
//				case 1: puts("\a请确保输入4个字符。"); break;
//				case 2: puts("\a请不要输入除了数字以外的字符。"); break;
//				case 3: puts("\a请不要输入相同的数字。"); break;
//				}
//			} while (chk != 0);
//			try_no++;
//				judge(buff, no, &hit, &blow);
//			print_result(hit + blow, hit);
//		} while (hit < 4);
//		end = clock();
//		printf("用了%d次。\n用时%.lf秒。\n", try_no, (double)(end - start) / CLOCK_PER_SEC);
//		return 0;
//	}
//
#include <stdio.h>
int main()
{
	long long n = 0;
	long long m = 0;
	long long tmp = 0;

	scanf("%lld %lld", &n, &m);
	int a = n;
	int b = m;
	while (tmp = a % b)
	{
		a = b;
		b = tmp;
	}
	printf("%lld\n", b + m * n / b);
	return 0;
}