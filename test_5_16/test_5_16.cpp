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
//		//this = nullptr; //thisָ�뱾�����޸ģ���Ϊ����const���ε�
//	 //   //thisָ�������Ա��޸�
//		cout << this << endl;
//		this->_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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
//	// ���ǲ�д��������������һ��Ĭ���޲ι��캯��
//	// ��������/�������ͣ�int/char/double/ָ��...
//	// �Զ������ͣ�class/structȥ�������Ͷ���
//	// Ĭ�����ɹ��캯�������������ͳ�Ա�����������������Զ������ͳ�Ա�����Żᴦ��
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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
//	// Ĭ�����ɹ��캯���Ϳ�������
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
//	// Ĭ�����ɹ��캯���Ϳ�������
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

// ��������

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
//	// ջ���涨���������˳��͹���˳���Ƿ���
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
//	int _year; // ��
//	int _month; // ��
//	int _day; // ��
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
//		// ...���
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
//	//C++11��Ĳ�������Ա������Լ�����Ĭ�ϳ�Ա��������ʼ��������
//    //����ȱʡֵ���������Լ�����Ĭ�Ϲ��캯����
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

	Date d3(d1); // ��������  -- һ�����ڵĶ���ȥ��ʼ����һ��Ҫ�����Ķ���
	d3 = d2 = d1;     // ��ֵ����/���ƿ��� -- �����Ѿ����ڶ���֮�丳ֵ
	(d3 = d2) = d1;     // ��ֵ����/���ƿ��� -- �����Ѿ����ڶ���֮�丳ֵ
	d1 = d1;
	return 0;
}