#define _CRT_SECURE_NO_WARNINGS 1


#include <limits.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

//1.对NULL指针的解引用操作
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

//2.对动态开辟空间的越界访问

//int main()
//{
//	char* p = (char*)malloc(10 * sizeof(char));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//使用
//	int i = 0;
//	//for (i = 0; i <= 10; i++)//越界
//	for(i=0; i<10; i++)
//	{
//		*(p + i) = 'a'+i;
//	}
//
//	//释放
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3.对非动态开辟内存使用free释放

//int main()
//{
//	//int* p = (int*)malloc(40);
//	////
//	//free(p);
//	//p = NULL;
//
//	int a = 10;
//	int*p = &a;
//	//写代码
//
//	free(p);//err
//	p = NULL;
//
//	return 0;
//}

//4.使用free释放一块动态开辟内存的一部分
//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//使用内存
//	int i = 0;
//	//1~5
//	for (i = 0; i < 5; i++)
//	{
//		*p = i+1;
//		p++;
//	}
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存多次释放

//
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//使用内存
//	int i = 0;
//	//1~5
//	for (i = 0; i < 5; i++)
//	{
//		*(p+i) = i + 1;
//	}
//	//释放
//	free(p);
//	p = NULL;
//
//	free(p);//err
//
//	return 0;
//}


//动态开辟内存忘记释放（内存泄漏）

//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	
//	//忘记释放，就会出现内存泄露的问题
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
//	//使用
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
//	//释放
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
//	//释放
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
//	//忘记释放了
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


//柔性数组

//struct S1
//{
//	int n;
//	int arr[0];//大小是未指定
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
//	//增容
//	struct S2* ptr = (struct S2*)realloc(ps, sizeof(struct S2)+80);
//	if (ptr == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		ps = ptr;
//	}
//	//释放
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
//	//使用
//	//增容
//
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}
//