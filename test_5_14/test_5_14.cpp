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
//	s2.Init("����", "��", 18);
//	s2.Print();
//	cout << s2._name << endl;
//	return 0;
//}

// //C -- ���ݺͷ����Ƿ����
// //̫����
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
//	printf("%d\n", st._a[st._top]); // ���ܾʹ�������
//	printf("%d\n", st._a[st._top-1]); // ���ܾʹ�������
//
//	return 0;
//}

// ��װ�����ϸ�������
// 1�����ݺͷ�����װ��һ��������
// 2����������ɷ��ʵ���Ƴɹ��У��������ֱ�ӷ��ʵ���Ƴ�˽��
// һ���������࣬��Ա���ݶ���˽�л��߱�����������ʵĺ����ǹ��У�����������ʱ˽�л򱣻�
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

// ��������
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

//// ���м��г�Ա���������г�Ա����
//class A1 {
//public:
//	void f1() {}
//private:
//	int _a;
//	char _ch;
//};
//// ���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//};
//// ����ʲô��û��---����
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
	int _year; // ��
	int _month; // ��
	int _day; // ��
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