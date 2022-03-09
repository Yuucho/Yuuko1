#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//指针数组 - 存放指针的数组

//void test(char* arr[4][5])
//{}
//
//void test(char* (*p)[5])
//{}
//
//int main()
//{
//	//指针数组
//	//int* arr[5];
//	//char* arr2[6];
//	//char** arr3[4];//数组中存放的二级指针
//	
//	//数组指针 - 指向数组的指针
//	int arr[10];
//	int* p = arr;
//	int (*p2)[10] = &arr;//取出的是数组的地址，既然是数组的地址，就应该放到数组指针变量中，int (*)[10] 
//	//p2就是一个数组指针
//
//	char* arr[4][5];
//	test(arr);
//
//	return 0;
//}

//
//函数指针
//函数其实也是有地址的，函数名（或者&函数名）就是函数的地址
//

//int my_test(const char* s)
//{
//	printf("测试通过函数指针来调用函数\n");
//	return 0;
//}
//
//int main()
//{
//	int (*pf)(const char*) = my_test;
//  int(*)(const char*)
//	pf("hehe");
//	return 0;
//}

//函数指针的数组-- 存放函数指针的数组 - 指针数组

//指向函数指针数组的指针

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pa)(int, int) = Add;//函数指针
//	int (* pfA[4])(int, int);//函数指针的数组
//	int (* (*ppfA)[4])(int, int) = &pfA;//ppfA 是一个指针，该指针指向了一个存放函数指针的数组
//
//	return 0;
//}
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("*****  1. add     2. sub     *****\n");
//	printf("*****  3. mul     4. div     *****\n");
//	printf("*****  0. exit               *****\n");
//	printf("**********************************\n");
//}
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
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("输入2个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("ret = %d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
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

#include <string.h>

//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序的过程
//		//确定的一趟排序中比较的对数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//qsort - 库函数 - 快速排序的方法实现的


//比较e1和e2指向的元素
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//测试qsort排序整型数组
void test1()
{
	int arr[] = { 1,4,2,6,5,3,7,9,0,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
	float score;
};

int cmp_stu_by_socre(const void* e1, const void* e2)
{
	if (((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
	{
		return 1;
	}
	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void print_stu(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
	}
	printf("\n");
}

//测试qsort排序结构体数据
void test2()
{
	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
	//按照成绩来排序
	int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_socre);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//if (arr[j] > arr[j + 1])
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//两个元素的交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
void test4()
{
	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
	//按照成绩来排序
	int sz = sizeof(arr) / sizeof(arr[0]);

	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_socre);
	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
}

int main()
{
	test4();
	return 0;
}

//void qsort(void* base, 
//	       size_t num, 
//	       size_t width, 
//	       int(* compare)(const void* e1, const void* e2)
//           );


//int main()
//{
//	int a = 10;
//	//int* p = &a;
//	//char* p = &a;
//	void* p = &a;
//	//
//	//void* 是一种无类型的指针，无具体类型的指针
//	//void* 的指针变量可以存放任意类型的地址
//	//void* 的指针不能直接进行解引用操作
//	//void* 的指针不能直接进行+—整数
//	//
//
//	return 0;
//}
