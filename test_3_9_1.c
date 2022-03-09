#define _CRT_SECURE_NO_WARNINGS 1


//
//指针数组
//存放指针的数组就是指针数组
//

#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	int** arr2[4] = {0};
//
//	//int* arr[10];//指针数组-存放的是int*
//	//char* ch[5]; //指针数组 - 存放的是char*
//
//	return 0;
//}

//数组指针
//应该是一种指针，是指向数组的指针
// 
//字符指针 - 指向字符的指针
//char ch = 'a';
//char* p = &ch;
//整型指针 - 指向整型的指针
//int* p;


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &(arr[0]));
//	printf("%p\n", &(arr[0])+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	return 0;
//}

//int main()
//{
//	char arr[5];
//	char (*pa)[5] = &arr;
//
//	int* parr[6];
//	int* (*pp)[6] = &parr;
//
//	return 0;
//}


//数组指针有什么用？

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *((*p) + i));
//	}
//	return 0;
//}
//

//void print(int a[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}

//int(*p)[5]是数组指针
//
//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p+i) 相当于拿到了二维数组的第i行，也相当于第i行的数组名
//			//数组名表示首元素的地址，其实也是第i行第一个元素的地址
//			printf("%d ", *(*(p + i) + j));
//			//               p[i][j]
//			//p是第一行的地址
//			//p+i是第i行的地址
//			//*(p+i) 是第i行第一个元素的地址
//			//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print(arr,3,5);
//
//	return 0;
//}

//int main()
//{
//	int arr[10];
//	int i = 0;
//	arr[i] == *(arr+i) == p[i] == *(p+i);
//	int* p = arr;
//	*(p + i);
//	return 0;
//}

//void test(int* p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* ptr = &a;
//	int arr[10] = {0};
//	test(&a);
//	test(ptr);
//	test(arr);
//
//	return 0;
//}

//void test(char** p)
//{}
//
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	char** pp = &p;
//	char* arr[5];
//
//	test(&p);
//	test(pp);
//	test(arr);
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5];
//	int *p = arr;
//
//	return 0;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test(char* str)
//{}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//int arr[5];
//	//int (*pa)[5] = &arr;//pa是数组指针
//	//void (*pt)(char*) = test;
//
//	//int (* pf)(int, int) = &Add;//pf是函数指针
//	int (* pf)(int, int) = Add;
//	//int sum = (*pf)(2,3);
//	int sum = pf(2, 3);
//
//	//int sum = Add(2, 3);
//	printf("%d\n", sum);
//
//	return 0;
//}

//void fun(int num)
//{
//	printf("fun-->%d\n", num);
//}
//
//int main()
//{
//	//
//	//1. 把0强制类型转换为void (*)()类型的函数指针
//	//2. 再去调用0地址处这个参数为无参，返回类型是void的函数
//	//
//	//( *( void (*)() )0 )();//这是依次函数调用，调用0地址处的函数
//
//	//0 -> 0x0012ff44
//	
//	void ( *signal( int, void(*)(int) ) )(int);
//	void(*pf)(int);
//	pf = signal(100, fun);
//
//	return 0;
//}
//

//
//函数指针数组-存放函数指针的数组，每个元素都是函数指针类型
//
//指针数组
//int* arr[4];
//char* arr[5];
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	//int (*pf1)(int,int) = Add;
//	//int (*pf2)(int, int) = Sub;
//	//int (*pf3)(int, int) = Mul;
//	//int (*pf4)(int, int) = Div;
//
//	int (*pfArr[4])(int, int) = {Add, Sub, Mul, Div};//函数指针数组
//	//8 4
//	//12
//	//4
//	//32
//	//2
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		//int ret = (*pfArr[i])(8, 4);
//		int ret = pfArr[i](8, 4);
//
//		printf("%d\n", ret);
//	}
//	return 0;
//}


int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


void menu()
{
	printf("**********************************\n");
	printf("*****  1. add     2. sub     *****\n");
	printf("*****  3. mul     4. div     *****\n");
	printf("*****  0. exit               *****\n");
	printf("**********************************\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;

	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfArr是一个函数指针的数组，也叫转移表

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出计算器\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("输入2个操作数:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("选择错误\n");
		}
	} while (input);

	return 0;
}


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入2个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}