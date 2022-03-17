#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	//拓展思考，const修饰二级指针
//	const int * const * const ppa = &pa;
//
//	return 0;
//}


//模式实现strlen
#include <string.h>
#include <stdio.h>
#include <assert.h>

//int my_strlen(const char* str)
//{
//	assert(str!=NULL);
//	const char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - str;
//}

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* end = str;
//	while (*end++ != '\0')
//	{
//		;
//	}
//	return end - str-1;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	//a b c d e f \0 [] []
//
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//

#include <stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//
//	return 0;
//}


//0表示假
//非0表示真

//int main()
//{
//	int flag = 0;
//	if (flag)
//	{
//
//	}
//	return 0;
//}

//c99 中引入了布尔类型
#include <stdbool.h>

//int main()
//{
//	_Bool flag = true;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	short  num;
//	signed short  m = 0;
//
//	return 0;
//}
//
//int main()
//{
//	//int num = 10;
//	//printf("%d\n", num);
//
//	//num = -10;
//	//printf("%d\n", num);
//
//
//	/*unsigned int num = 10;
//	printf("%u\n", num);
//
//	num = -10;
//	printf("%u\n", num);*/
//
//	//int a[10];
//
//	//int a[5];
//
//
//	return 0;
//}

//void test(void)
//{
//	void* p;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int a = 10;

//int check_sys()
//{
//	int a = 1;
//	char *p = (char*)&a;
//	if (1 == *p)
//		return 1;//小端
//	else
//		return 0;//大端
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}


int main()
{
	//int a = 10;
	//int b = -10;

	//int a = 0x11223344;

	//int a = 1;

	//char* p = (char*)&a;//int*
	//if (1 == *p)
	//{
	//	printf("小端\n");
	//}
	//else
	//{
	//	printf("大端\n");
	//}
	int ret = check_sys();//返回1是小端，返回是大端
	if (1 == ret)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}