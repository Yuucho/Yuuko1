#define _CRT_SECURE_NO_WARNINGS 1


//
//ָ������
//���ָ����������ָ������
//

#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	int** arr2[4] = {0};
//
//	//int* arr[10];//ָ������-��ŵ���int*
//	//char* ch[5]; //ָ������ - ��ŵ���char*
//
//	return 0;
//}

//����ָ��
//Ӧ����һ��ָ�룬��ָ�������ָ��
// 
//�ַ�ָ�� - ָ���ַ���ָ��
//char ch = 'a';
//char* p = &ch;
//����ָ�� - ָ�����͵�ָ��
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


//����ָ����ʲô�ã�

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

//int(*p)[5]������ָ��
//
//void print(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p+i) �൱���õ��˶�ά����ĵ�i�У�Ҳ�൱�ڵ�i�е�������
//			//��������ʾ��Ԫ�صĵ�ַ����ʵҲ�ǵ�i�е�һ��Ԫ�صĵ�ַ
//			printf("%d ", *(*(p + i) + j));
//			//               p[i][j]
//			//p�ǵ�һ�еĵ�ַ
//			//p+i�ǵ�i�еĵ�ַ
//			//*(p+i) �ǵ�i�е�һ��Ԫ�صĵ�ַ
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
//	//int (*pa)[5] = &arr;//pa������ָ��
//	//void (*pt)(char*) = test;
//
//	//int (* pf)(int, int) = &Add;//pf�Ǻ���ָ��
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
//	//1. ��0ǿ������ת��Ϊvoid (*)()���͵ĺ���ָ��
//	//2. ��ȥ����0��ַ���������Ϊ�޲Σ�����������void�ĺ���
//	//
//	//( *( void (*)() )0 )();//�������κ������ã�����0��ַ���ĺ���
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
//����ָ������-��ź���ָ������飬ÿ��Ԫ�ض��Ǻ���ָ������
//
//ָ������
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
//	int (*pfArr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ������
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

	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfArr��һ������ָ������飬Ҳ��ת�Ʊ�

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("�˳�������\n");
			break;
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����2��������:>");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
		{
			printf("ѡ�����\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("����2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("����2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("����2��������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret = %d\n", ret);
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