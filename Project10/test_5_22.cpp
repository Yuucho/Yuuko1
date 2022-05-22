#include <iostream>
#include <string>
#include <assert.h>
using std::cout;
using std::cin;
using std::endl;

//class Date
//{
//public:
//	/*Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}*/
//
//	Date(int year = 1, int month = 1, int day = 1)
//		:_year(year)
//		, _month(month)
//	{
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2022, 5, 22);
//	Date d2;
//
//	return 0;
//}


//int value = 10;
//class A
//{
//public:
//	A(int a)
//		:_a(a)
//	{}
//private:
//	int _a;
//};
//class Date
//{
//public:
//	 //初始化列表可以认为就是对象的成员变量定义的地方
//	Date(int year, int n, int a)
//		:_n(n)
//		, _ref(value)
//		, _aa(a)
//	{
//		_year = year;
//	}
//private:
//	// 定义时初始化
//	// 也可以定义时不初始化，后面再赋值修改
//	int _year; // 声明
//	// 只能在定义初始化
//	const int _n;
//	int& _ref;
//	A _aa;
//};
//int main()
//{
//	Date d1(2022, 1,10); // 对象定义
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 0)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		assert(_a);
//		_top = 0;
//		_capacity = capacity;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue
//{
//private:
//	Stack _st1;
//	Stack _st2;
//	size_t _size = 0; // 缺省值
//};
//
//int main()
//{
//	MyQueue mq;
//
//	return 0;
//}

//class A
//{
//public:
//	A(int a)
//		:_a1(a)
//		, _a2(_a1)
//	{}
//	void Print() {
//		cout << _a1 << " " << _a2 << endl;
//	}
//private:
//	int _a2;
//	int _a1;
//};
//int main() 
//{
//	A aa(1);
//	aa.Print();
//}


//class Date
//{
//public:
//	explicit Date(int year)
//		:_year(year)
//	{
//		cout << "Date(int year)" << endl;
//	}
//
//	Date(const Date& d)
//	{
//		cout << "Date(const Date& d)" << endl;
//	}
//
//private:
//	int _year;
//};
//
//int main()
//{
//	Date d1(2022); // 构造
//	// 隐士类型的转换 
//	Date d2 = 2022; // 构造 + 拷贝构造 -> 优化 合二为一
//	return 0;
//}



////统计A类型对象创建了多少个
//int count = 0;
//class A
//{
//public:
//	A()
//	{
//		++count;
//	}
//
//	A(const A& aa)
//	{
//		++count;
//	}
//};
//A Func(A a)
//{
//	A copy(a);
//	return copy;
//}
//int main()
//{
//	A a1;
//	A a2 = Func(a1);
//	cout << count << endl;
//}


 //统计A类型对象创建了多少个

//class A
//{
//public:
//	A()
//	{
//		++_count1;
//	}
//
//	A(const A& aa)
//	{
//		++_count2;
//	}
//
//	// 成员函数也可以是静态，static成员函数没有this指针
//	static int GetCount1()
//	{
//		//_a = 0; // 不能访问非静态成员，因为没有this指针
//		/*	A aa;
//			aa._a = 0;*/
//
//		return _count1;
//	}
//
//	static int GetCount2()
//	{
//		return _count2;
//	}
//private:
//	// 静态成员变量属于整个类，所以类的所有对象
//	static int _count1;
//	static int _count2; // 声明
//
//	int _a;
//};
//
//// 定义
//int A::_count1 = 0;
//int A::_count2 = 0;
//
//A Func(A a)
//{
//	A copy(a);
//	return copy;
//}
//
//int main()
//{
//	A a1;
//	A a2 = Func(a1);
//	cout << a1.GetCount1() << endl;
//	cout << a2.GetCount2() << endl;
//	cout << A::GetCount1() << endl;
//	cout << A::GetCount2() << endl;
//}


class B
{
public:
	B(int b = 0)
		:_b(b)
	{}
	int _b;
};
class A
{
public:
	//A()
	//	:a(10)
	//	, b(20)
	//	, p((int*)malloc(4))
	//{}
	void Print()
	{
		cout << a << endl;
		cout << b._b << endl;
		cout << p << endl;
	}
private:
	// 非静态成员变量，可以在成员声明时给缺省值。
	int a = 10;
	B b = 20;
	int* p = (int*)malloc(4);
	static int n;
};
int A::n = 10;
int main()
{
	A a;
	a.Print();
	return 0;
}