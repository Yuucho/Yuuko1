#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>    
//
////声明函数    
//extern int Add(int x, int y);
//
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 0;
//
//    c = Add(a, b);
//    printf("%d\n", c);
//
//    return 0;
//}

#include <stdio.h>
//
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//
//	int i = 0;
//	//记录日志
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		//....
//		return 1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf, "%s %s %s %d i=%d\n", __DATE__, __TIME__, __FILE__, __LINE__, i);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//VS2022 是不遵循 ANSI C

//int main()
//{
//	//printf("%d\n", __STDC__);
//
//	return 0;
//}

//#define MM 100
//
//#define reg register
//
//int main()
//{
//	//printf("%d\n", MM);
//	//register int num = 10;
//	//reg int num2 = 20;
//	int a = 0;
//	int b = 0;
//	if (a < 10)
//		a = MM;
//	else
//		a = -10;
//
//	return 0;
//}
//

//#define MAX(x,y)  ((x)>(y)?(x):(y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int m = MAX(a+2, b);
//	printf("%d\n", m);
//
//	return 0;
//}

//
//#define M 100
//#define N M+2
//
//
//#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//
//	printf("%d\n", 10*DOUBLE(3+M));
//	//printf("%d\n", 10 * 3+3);//33
//	printf("M = %d\n", 10);
//	return 0;
//}


//#define PRINT(n) printf("the value of "#n" is %d\n", n)
//
//int main()
//{
//	int a = 10;
//	//printf("the value of a is %d\n", a);
//	PRINT(a);
//	printf("the value of ""a"" is %d\n", a);
//
//	int b = 20;
//	//printf("the value of b is %d\n", b);
//	PRINT(b);
//	printf("the value of ""b"" is %d\n", b);
//
//	//printf("hello world\n");
//	//printf("hello " "world\n");
//	//printf("hel" "lo " "world\n");
//
//
//
//	return 0;
//}

//#define CAT(C, num)  C##num
//
//int main()
//{
//	int Class104 = 10000;
//	printf("%d\n", CAT(Class, 104));//Class104
//	return 0;
//}

//int main()
//{
//	//getchar();
//	//fgetc();
//	int a = 2;
//	int b = ++a;  //b=3, a=3
//	int b = a + 1;//b=3, a=2
//	return 0;
//}


//#define MAX(x, y) ((a++)>(b++)?(a++):(b++))

//#define MAX(x,y) ((x)>(y)?(x):(y))

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
// 
//	printf("%d\n", m);
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}


//
//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//宏
//	int m = MAX(a, b);
//	printf("%d\n", m);
//
//	m = get_max(a, b);
//	printf("%d\n", m);
//
//
//	return 0;
//}

#define MALLOC(num, type)  (type*)malloc(num*sizeof(type))

int main()
{
	int* p = (int*)malloc(10 * sizeof(int));
	if (p == NULL)
	{
	}

	//int *p2 = malloc(10, int);

	int* p2 = MALLOC(10, int);
	//int *p2 = (int*)malloc(10*sizoef(int));

	return 0;
}
