#define _CRT_SECURE_NO_WARNINGS 1

//struct Stu
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int hight;
//}s2, s3, s4;//s2,s3,s4全局变量
//
//struct Stu s5;
//
//int main()
//{
//	struct Stu s1;//结构体变量
//
//	return 0;
//}

//struct
//{
//	char c;
//	int a;
//	double d;
//}sa;
//
//struct
//{
//	char c;
//	int a;
//	double d;
//}* ps;
//
//
//int main()
//{
//	//编译器认为等号两边时不同的结构体类型，所以这种写法时错误的
//	ps = &sa;
//
//	return 0;
//}

//err
//struct Node
//{
//	int data;//4
//	struct Node next;
//};

//struct Node
//{
//	int data;
//	struct Node* next;
//};

//err
//typedef struct
//{
//	int data;
//	Node* next;
//}Node;

#include <stdio.h>
#include <stddef.h>

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

//struct Stu
//{
//	char name[20];
//	char sex[5];
//	int age;
//	int hight;
//};
//
//struct Data
//{
//	struct Stu s;
//	char ch;
//	double d;
//};
//
//int main()
//{
//	struct Node n2 = {100, NULL};
//	struct Stu s1 = { "zhangsan", "nan", 20, 180 };
//	struct Data d = { {"lisi", "nv", 30, 166},'w', 3.14};
//
//	return 0;
//}
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};//12
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};//8
//
////offsetof
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S4 s;
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//
//
//	//printf("%d\n", offsetof(struct S1, c1));
//	//printf("%d\n", offsetof(struct S1, i));
//	//printf("%d\n", offsetof(struct S1, c2));
//
//	return 0;
//}
//

//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}

//#pragma pack(4)
//struct S
//{
//	char c1;//0
//	//1~3
//	double d;//8 4 4 4~11
//	char c2;//12
//	//13~15
//};
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}