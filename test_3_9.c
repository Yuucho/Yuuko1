#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>


//ָ������ - ���ָ�������

//void test(char* arr[4][5])
//{}
//
//void test(char* (*p)[5])
//{}
//
//int main()
//{
//	//ָ������
//	//int* arr[5];
//	//char* arr2[6];
//	//char** arr3[4];//�����д�ŵĶ���ָ��
//	
//	//����ָ�� - ָ�������ָ��
//	int arr[10];
//	int* p = arr;
//	int (*p2)[10] = &arr;//ȡ����������ĵ�ַ����Ȼ������ĵ�ַ����Ӧ�÷ŵ�����ָ������У�int (*)[10] 
//	//p2����һ������ָ��
//
//	char* arr[4][5];
//	test(arr);
//
//	return 0;
//}

//
//����ָ��
//������ʵҲ���е�ַ�ģ�������������&�����������Ǻ����ĵ�ַ
//

//int my_test(const char* s)
//{
//	printf("����ͨ������ָ�������ú���\n");
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

//����ָ�������-- ��ź���ָ������� - ָ������

//ָ����ָ�������ָ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int (*pa)(int, int) = Add;//����ָ��
//	int (* pfA[4])(int, int);//����ָ�������
//	int (* (*ppfA)[4])(int, int) = &pfA;//ppfA ��һ��ָ�룬��ָ��ָ����һ����ź���ָ�������
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
//	printf("����2��������:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include <string.h>

//void bubble_sort(int arr[], int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������Ĺ���
//		//ȷ����һ�������бȽϵĶ���
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

//qsort - �⺯�� - ��������ķ���ʵ�ֵ�


//�Ƚ�e1��e2ָ���Ԫ��
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//����qsort������������
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

//����qsort����ṹ������
void test2()
{
	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
	//���ճɼ�������
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
				//����Ԫ�صĽ���
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
	//���ճɼ�������
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
//	//void* ��һ�������͵�ָ�룬�޾������͵�ָ��
//	//void* ��ָ��������Դ���������͵ĵ�ַ
//	//void* ��ָ�벻��ֱ�ӽ��н����ò���
//	//void* ��ָ�벻��ֱ�ӽ���+������
//	//
//
//	return 0;
//}
