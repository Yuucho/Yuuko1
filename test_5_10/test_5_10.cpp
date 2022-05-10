#include<iostream>
using namespace std;

//int main()
//{
//	////1. 引用在定义时必须初始化
//	//int& a;
//	// 2、一个变量可以有多个引用
//	int a = 10;
//	int& b = a;
//	int& c = a;
//	int& d = b;
//	int* p = &b;
//
//
//	//3. 引用一旦引用一个实体，再不能引用其他实体
//	int e = 20;
//	//e赋值给b
//	b = e; 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& b = a; // 不变
//
//	// 取别名原则:对原引用变量，权限只能缩小，不能放大
//	const int x = 20;
//	//int& y = x;       // 放大
//	const int& e = x;   // 不变
//	int c = 30;
//	const int& d = c;  // 缩小
//	cout << d << endl;
//	d = 40;
//	return 0;
//}

//template<class T>
//void func(const T& x)
//{}
//int main()
//{
//	int a = 10;
//	int& b = a;
//	const int& c = 20;
//	double d = 2.2;
//	int f = d;
//	const int& e = d;
//	func(a);
//	func(10);
//	func(c);
//	func(d);
//	func(e);
//	return 0;
//}


//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//
//int main()
//{
//	int a = 0, b = 1;
//	Swap(a, b);
//
//	double c = 1.1, d = 2.2;
//	Swap(c, d);
//	return 0;
//}

//typedef struct ListNode
//{
//	int val;
//	struct ListNode* next;
//}LTNode, * PLTNode;
//void LTPushBack_C(LTNode** pphead, int x)
//{
//	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
//	if (*pphead == NULL)
//	{
//		*pphead = newnode;
//	}
//}
////void LTPushBack_CPP(LTNode*& phead, int x)
//void LTPushBack_CPP(PLTNode& phead, int x)
//{
//	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
//	if (phead == NULL)
//	{
//		phead = newnode;
//	}
//}
//
//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// 以值作为函数参数
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// 以引用作为函数参数
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// 分别计算两个函数运行结束后的时间
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	TestRefAndValue();
//	return 0;
//}

//int& Count()
//{
//	int n = 0;
//	n++;
//	cout << "&n:" << &n << endl;
//	return n;
//}
//
//int main()
//{
//	int& ret = Count();
//	cout << ret << endl;
//	cout << "&ret:" << &ret << endl;
//	cout << ret << endl;
//	return 0;
//}

#include <time.h>
struct A { int a[10000]; };
A a;
// 值返回
A TestFunc1() { return a; }
// 引用返回
A& TestFunc2() { return a; }
void TestReturnByRefOrValue()
{
	// 以值作为函数的返回值类型
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();
	// 以引用作为函数的返回值类型
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();
	// 计算两个函数运算完成之后的时间
	cout << "TestFunc1 time:" << end1 - begin1 << endl;
	cout << "TestFunc2 time:" << end2 - begin2 << endl;
}

int main()
{
	TestReturnByRefOrValue();
	return 0;
}