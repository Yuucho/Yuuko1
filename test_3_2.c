#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>
#include <string.h>

//int main()
//{
//	FILE * pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//	
//	//��λ�ļ�ָ��
//	fseek(pf, 3, SEEK_CUR);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	//��λ�ļ�ָ��
//	//fseek(pf, 3, SEEK_CUR);
//	//fseek(pf, 5, SEEK_SET);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//f
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	int ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	//��λ�ļ�ָ��
//	
//	fseek(pf, -2, SEEK_END);
//	fputc('#', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//	
//	int ret = ftell(pf);
//	printf("%d\n", ret);//2
//
//	rewind(pf);
//	//fseek(pf, 0, SEEK_SET);
//
//	ret = ftell(pf);
//	printf("%d\n", ret);//0
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//0000 0000 0000 0000 0010 0111 0001 0000
//0    0    0    0    2    7    1    0
// 0x 00 00 27 10
//С��������10 27 00 00 
//


#include <stdio.h>
#include <windows.h>
//VS2013 WIN10��������
int main()
{
	FILE* pf = fopen("test.txt", "w");
	fputs("abcdef", pf);//�Ƚ�����������������
	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
	Sleep(10000);
	printf("ˢ�»�����\n");
	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
	Sleep(10000);
	fclose(pf);
	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
	pf = NULL;
	return 0;
}


//#include <stdio.h>
//
//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//		Sleep(1000);
//	}
//	return 0;
//}