#define _CRT_SECURE_NO_WARNINGS 1


#include <limits.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//		return 0;
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����

//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	//for (i = 0; i <= 10; i++)//Խ��
//	for(i=0; i<10; i++)
//	{
//		*(p + i) = 'a'+i;
//	}
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//int main()
//{
//	//int* p = (int*)malloc(40);
//	////
//	//free(p);
//	//p = NULL;
//
//	int a = 10;
//	int*p = &a;
//	//д����
//
//	free(p);//err
//	p = NULL;
//
//	return 0;
//}

//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//ʹ���ڴ�
//	int i = 0;
//	//1~5
//	for (i = 0; i < 5; i++)
//	{
//		*p = i+1;
//		p++;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ����ͷ�

//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//ʹ���ڴ�
//	int i = 0;
//	//1~5
//	for (i = 0; i < 5; i++)
//	{
//		*(p+i) = i + 1;
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	free(p);//err
//
//	return 0;
//}


//��̬�����ڴ������ͷţ��ڴ�й©��

//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	
//	//�����ͷţ��ͻ�����ڴ�й¶������
//	//return p;
//}
//
//int main()
//{
//	int*ptr = test();
//	//free(ptr);
//
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 0;
//	//ʹ��
//	
//	while (1)
//		;
//
//	return 0;
//}
//


//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	//
//	strcpy(str, "hello world");
//	printf(str);
//	//�ͷ�
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}
//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int *p = test();
//	printf("hehehhhhh\n");
//	printf("%d\n", *p);//10
//
//	return 0;
//}
//
//


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//�����ͷ���
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//��������

//struct S1
//{
//	int n;
//	int arr[0];//��С��δָ��
//};
//
//struct S2
//{
//	int n;
//	int arr[];//
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S1));
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2) + 40);
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//����
//	struct S2* ptr = (struct S2*)realloc(ps, sizeof(struct S2)+80);
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//
//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->n = 100;
//	ps->arr = (int*)malloc(40);
//	//ʹ��
//	//����
//
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//