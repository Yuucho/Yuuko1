#include<iostream>
#include <string>
using namespace std;

// 模板参数--很多用法和函数参数是很像的
// 模板参数 -- 传递的是类型
// 函数参数 -- 传递的对象值
//template<class T = char>  
//T* func(int n)
//{
//	return new T[n];
//}
//
//int main()
//{
//	// 函数模板显示实例化
//	int* p1 = func<int>(10);
//	double* p2 = func<double>(10);
//	char* p3 = func(10);
//	return 0;
//}

//#include "template.hpp"
//int main()
//{
//	int a = 0, b = 1;
//	Swap(a, b);
//	Vector<int> v1;
//	Vector<double> v2;
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.0, d2 = 20.0;
//	Add(a1, a2);
//	Add(d1, d2);
//	//使用显式实例化
//	Add<int>(a1, d2);
//	Add<double>(a1, d2);
//	//用户自己来强制转化
//	Add(a1, (int)d2);
//	Add((double)a1, d2);
//
//	return 0;
//}

// 专门处理int的加法函数
int Add(int left, int right)
{
	return left + right;
}
// 通用加法函数
template<class T>
T Add(T left, T right)
{
	return left + right;
}

int main()
{
	Add(1, 2);
	Add<int>(1, 2);

	return 0;
}