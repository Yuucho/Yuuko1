#include<iostream>
using namespace std;

//int main()
//{
//	////1. �����ڶ���ʱ�����ʼ��
//	//int& a;
//	// 2��һ�����������ж������
//	int a = 10;
//	int& b = a;
//	int& c = a;
//	int& d = b;
//	int* p = &b;
//
//
//	//3. ����һ������һ��ʵ�壬�ٲ�����������ʵ��
//	int e = 20;
//	//e��ֵ��b
//	b = e; 
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int& b = a; // ����
//
//	// ȡ����ԭ��:��ԭ���ñ�����Ȩ��ֻ����С�����ܷŴ�
//	const int x = 20;
//	//int& y = x;       // �Ŵ�
//	const int& e = x;   // ����
//	int c = 30;
//	const int& d = c;  // ��С
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
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
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
// ֵ����
A TestFunc1() { return a; }
// ���÷���
A& TestFunc2() { return a; }
void TestReturnByRefOrValue()
{
	// ��ֵ��Ϊ�����ķ���ֵ����
	size_t begin1 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc1();
	size_t end1 = clock();
	// ��������Ϊ�����ķ���ֵ����
	size_t begin2 = clock();
	for (size_t i = 0; i < 100000; ++i)
		TestFunc2();
	size_t end2 = clock();
	// �������������������֮���ʱ��
	cout << "TestFunc1 time:" << end1 - begin1 << endl;
	cout << "TestFunc2 time:" << end2 - begin2 << endl;
}

int main()
{
	TestReturnByRefOrValue();
	return 0;
}