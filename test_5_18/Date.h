#include <iostream>
#include <assert.h>
using std::cin;
using std::cout;
using std::endl;

class Date
{
public:
	// 获取某年某月的天数
	int GetMonthDay(int year, int month);

	// 全缺省的构造函数
	Date(int year = 1900, int month = 1, int day = 1)
	{
		if (year >= 1 &&
			month <= 12 && month >= 1 &&
			day >= 1 && day <= GetMonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "非法访问" << endl;
		}
	}

	// 拷贝构造函数
	// d2(d1)
	Date(const Date& d)
	{
		this->_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	// 赋值运算符重载
	// d2 = d3 -> d2.operator=(&d2, d3)
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			this->_year = d._year;
			this->_month = d._month;
			this->_day = d._day;
		}
		return *this;
	}

	bool operator<(const Date& d);

	bool operator==(const Date& d);

	// d1 <= d2
	bool operator<=(const Date& d)
	{
		return *this < d || *this == d;
	}

	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	Date& operator-=(int day);

	Date& operator+=(int day);

	Date operator+(int day)
	{
		Date ret(*this);
		ret += day;
		return ret;
	}

	Date operator-(int day)
	{
		Date ret = *this;
		ret -= day;
		return ret;
	}

	int operator-(const Date& d);

	// 前置++
    // ++d -> d.operator++(&d)
	Date& operator++()
	{
		*this += 1;
		return *this;
	}

	// 后置++
    // d++ -> d.operator++(&d, 0)
	Date operator++(int)
	{
		Date ret(*this);
		*this += 1;
		return ret;
	}

	// // 后置--
	Date operator--(int)

	{
		Date ret(*this);
		*this -= 1;
		return ret;
	}

	// 前置--
	Date& operator--()
	{
		*this -= 1;
		return *this;
	}

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};