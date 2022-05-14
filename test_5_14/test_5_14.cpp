#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "Stack.h"
using namespace std;

//class Student
//{
//public:
//	void Init(const char* name, const char* gender, int age)
//	{
//		strcpy(_name, name);
//		strcpy(_gender, gender);
//		_age = age;
//	}
//
//	void Print()
//	{
//		cout << _name << " " << _gender << " " << _age << endl;
//	}
//
//private:
//	char _name[20];
//	char _gender[3];
//protected:
//	int _age;
//};
//int main()
//{
//	Student s2;
//	s2.Init("张三", "男", 18);
//	s2.Print();
//	cout << s2._name << endl;
//	return 0;
//}

// //C -- 数据和方法是分离的
// //太自由
//struct Stack
//{
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//void StackInit(struct Stack* ps)
//{
//	ps->_a = NULL;
//	ps->_top = 0; // ps->_top = -1;
//	ps->_capacity = 0;
//}
//
//void StackPush(struct Stack* ps, int x)
//{}
//
//int StackTop(struct Stack* ps)
//{}
//
//int main()
//{
//	struct Stack st;
//	StackInit(&st);
//	StackPush(&st, 1);
//	StackPush(&st, 2);
//	StackPush(&st, 3);
//
//	printf("%d\n", StackTop(&st));
//	printf("%d\n", st._a[st._top]); // 可能就存在误用
//	printf("%d\n", st._a[st._top-1]); // 可能就存在误用
//
//	return 0;
//}

// 封装：更严格管理设计
// 1、数据和方法封装到一起，类里面
// 2、想给你自由访问的设计成共有，不想给你直接访问的设计成私有
// 一般情况设计类，成员数据都是私有或者保护，想给访问的函数是公有，不想给你访问时私有或保护
//class Stack
//{
//private:
//	void Checkcapaicty()
//	{}
//public:
//	void Init()
//	{}
//
//	void Push(int x)
//	{}
//
//	int Top()
//	{}
//
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	st.Push(2);
//	st.Push(3);
//	st.Push(4);
//
//	cout << st.Top() << endl;
//	//cout << st._a[st._top] << endl;
//
//	return 0;
//}

// 两个类域
//class Stack
//{
//public:
//	void Push(int x)
//	{}
//};
//
//class Queue
//{
//public:
//	void Push(int x)
//	{}
//};

//// 类中既有成员变量，又有成员函数
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//	char _ch;
//};
//// 类中仅有成员函数
//class A2 {
//public:
//	void f2() {}
//};
//// 类中什么都没有---空类
//class A3
//{};
//int main()
//{
//	cout << sizeof(Stack) << endl;
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//	return 0;
//}


class Date
{
public:
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
private:
	int _year; // 年
	int _month; // 月
	int _day; // 日
};

int main()
{
	Date d1;
	d1.Init(2022, 5, 14);
	Date d2;
	d2.Init(2022, 5, 15);
	d1.Print();
	d2.Print();
	return 0;
}