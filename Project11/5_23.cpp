#include<iostream>
using namespace std;


//class Time
//{
//	friend class Date;
//public:
//	Time(int hour, int minute, int second)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//public:
//	void SetTimeOfDate(int hour, int minute, int second)
//	{
//		_t._hour = hour;
//		_t._minute = minute;
//		_t._second = second;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//	Time _t;
//};

//ostream& operator<<(ostream& _cout, const Date& d)
//{
//	_cout << d._year << "-" << d._month << "-" << d._day;
//	return _cout;
//}
//
//istream& operator>>(istream& _cin, Date& d)
//{
//	_cin >> d._year;
//	_cin >> d._month;
//	_cin >> d._day;
//	return _cin;
//}

//int main()
//{
//	return 0;
//}

//前置声明
//class Date;
//class Time
//{
//	friend void Func(const Date& d, const Time& t);
//public:
//	Time(int hour = 0, int minute = 0, int second = 0)
//		: _hour(hour)
//		, _minute(minute)
//		, _second(second)
//	{}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//	friend void Func(const Date& d, const Time& t);
//public:
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Func(const Date& d, const Time& t)
//{
//	cout << d._year << endl;
//	cout << t._hour << endl;
//
//}
//int main()
//{
//	Date d;
//	Time t;
//	Func(d, t);
//	return 0;
//}

//内部类
class A
{
private:
	static int k;
	int h;
public:
	class B
	{
	public:
		void foo(const A& a)
		{
			cout << k << endl;//OK
			cout << a.h << endl;//OK
		}
	private:

	};
};

int A::k = 1;
int main()
{
	A::B b;
	b.foo(A());
	return 0;
}