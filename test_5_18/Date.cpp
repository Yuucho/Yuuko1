#include "Date.h"

bool Date::operator<( const Date& d)
{
	if ((_year < d._year)
		|| (_year == d._year && _month < d._month)
		|| (_year == d._year && _month == d._month && d._day < d._day))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// d1 == d2
bool Date::operator==(const Date& d)
{
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool isLeapYear(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
	{
		return true;
	}
	return false;
}

int Date::GetMonthDay(int year, int month)
{
	assert(year >= 0 && month > 0 && month < 13);

	const static int monthDayArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (month == 2 && isLeapYear(year))
	{
		return 29;
	}
	else
	{
		return monthDayArray[month];
	}
}


// d1 -= 100
Date& Date::operator-=(int day)
{
	if (day < 0)
		return *this += -day;

	_day -= day;
	while (_day <= 0)
	{
		--_month;
		if (_month == 0)
		{
			_month = 12;
			--_year;
		}

		_day += GetMonthDay(_year, _month);
	}

	return *this;
}

Date& Date::operator+=(int day)
{
	if (day < 0)
	{
		return *this -= -day;
	}
	_day += day;
	while (_day > GetMonthDay(_year, _month))
	{
		_day -= GetMonthDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}
// d1 - d2
int Date::operator-(const Date& d)
{
	int flag = 1;
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		min = *this;
		max = d;
		flag = -1;
	}

	int n = 0;
	while (min != max)
	{
		++n;
		++min;
	}

	return n * flag;
}