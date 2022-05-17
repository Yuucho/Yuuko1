#include <iostream>
#include <assert.h>
using namespace std;
//class Date
//{
//public:
//
//
//	void Print()
//	{
//		cout << this << endl;
//		cout << this->_year << "-" << this->_month << "-" << this->_day << endl;
//	}
//
//	void Init(int year, int month, int day)
//	{
//		//this = nullptr; //this指针本身不能修改，因为他是const修饰的
//	 //   //this指向对象可以被修改
//		cout << this << endl;
//		this->_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1;
//	Date d2;
//	Date d3;
//
//	cout <<"d1:"<<&d1<< endl;
//	cout << "d2:" << &d2 << endl;
//
//	d1.Init(2022, 5, 15);
//	d2.Init(2022, 5, 20);
//
//	d1.Print();
//	d2.Print();
//
//	return 0;
//}

//class A
//{
//public:
//	void Show()
//	{
//		cout << this << endl;
//		cout << "Show()" << endl;
//	}
////private:
//	int _a;
//};
//
//int main()
//{
//	A* p = nullptr;
//	p->Show();
//}
//
//class Date
//{
//public:
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1;
//	return 0;
//}


//class Date
//{
//public:
//	//Date()
//	//{
//	//	_year = 1;
//	//	_month = 1;
//	//	_day = 1;
//	//}
//
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}




//class A
//{
//public:
//	A()
//	{
//		cout << " A()" << endl;
//		_a = 0;
//	}
//private:
//	int _a;
//};
//
//class Date
//{
//public:
//	// 我们不写，编译器会生成一个默认无参构造函数
//	// 内置类型/基本类型：int/char/double/指针...
//	// 自定义类型：class/struct去定义类型对象
//	// 默认生成构造函数对于内置类型成员变量不做处理，对于自定义类型成员变量才会处理
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//
//	A _aa;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//	return 0;
//}

//class MyQueue {
//public:
//	// 默认生成构造函数就可以用了
//	void push(int x) {
//	}
//
//	int pop() {
//	}
//
//private:
//	Stack _st1;
//	Stack _st2;
//};
//
//int main()
//{
//	Date d1;
//	d1.Print();
//
//	MyQueue q;
//	Stack st;
//
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity)
//	{
//		_a = (int*)malloc(sizeof(int)*capacity);
//		assert(_a);
//	
//		_top = 0;
//		_capacity = capacity;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue {
//public:
//	// 默认生成构造函数就可以用了
//
//	void push(int x) {
//	}
//	
//	int pop() {
//	}
//	
//private:
//	Stack _st1;
//	Stack _st2;
//};	
//
//int main()
//{
//	MyQueue q;
//	return 0;
//}

// 析构函数

//class Stack
//{
//public:
//	Stack(int capacity = 10)
//	{
//		_a = (int*)malloc(sizeof(int)*capacity);
//		assert(_a);
//
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack():" << this << endl;
//
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//class MyQueue {
//public:
//	void push(int x) {
//	}
//	
//	int pop() {
//	}
//	
//private:
//	Stack _st1;
//	Stack _st2;
//};
//
//int main()
//{
//	// 栈里面定义对象，析构顺序和构造顺序是反的
//	Stack st1(1);
//	Stack st2(2);
//	MyQueue q;
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//
//	// Date d2(d1);
//	Date(const Date &d)
//	{
//		_year = d._year;
//		_month = d._month;
//		_day = d._day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year; // 年
//	int _month; // 月
//	int _day; // 日
//};
//void Func(Date& d)
//{
//
//}
//
//int main()
//{
//	Date d1(2022,5,17);
//	Func(d1);
//}

//class Stack
//{
//public:
//	Stack(int capacity = 10)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		assert(_a);
//
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack():" << this << endl;
//
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st1(10);
//	Stack st2(st1);
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		cout << "Stack(int capacity = 4)" << endl;
//
//		_a = (int*)malloc(sizeof(int)*capacity);
//		assert(_a);
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	Stack(const Stack& st)
//	{
//		cout << "Stack(const Stack& st)" << endl;
//		// ...深拷贝
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_capacity = _top = 0;
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
//	//C++11打的补丁，针对编译器自己生成默认成员函数不初始化的问题
//    //给的缺省值，编译器自己生成默认构造函数用
//	int _size = 0;
//	Stack _st1;
//	Stack _st2;
//};
//
//int main()
//{
//	MyQueue mq1;
//	MyQueue mq2(mq1);
//}

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	Date operator=(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1(2022, 5, 16);
	Date d2(2022, 5, 18);

	Date d3(d1); // 拷贝构造  -- 一个存在的对象去初始化另一个要创建的对象
	d3 = d2 = d1;     // 赋值重载/复制拷贝 -- 两个已经存在对象之间赋值
	(d3 = d2) = d1;     // 赋值重载/复制拷贝 -- 两个已经存在对象之间赋值
	d1 = d1;
	return 0;
}