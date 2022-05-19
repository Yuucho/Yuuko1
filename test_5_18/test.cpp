#include "Date.h"

void TestDate1()
{
	Date d1(2022, 5, 18);
	Date d2(2023, 3, 20);
	Date d3(2023, 3, 20);

	cout << (d1 < d2) << endl;
	cout << (d1 > d2) << endl;
	cout << (d1 == d3) << endl;
	cout << (d2 <= d3) << endl;
	cout << (d2 == d3) << endl;
}

void TestDate2()
{
	Date d1(2022, 5, 18);
	Date d2 = d1 + 15;
	Date d3;
	d3 = d1 + 15;

	//Date d3 = d1; // ¿½±´ Date d3(d1);
	//d1 = d2;

	d2.Print();
	d1.Print();

	d1 += 15;
	d1.Print();
}

void TestDate3()
{
	Date d3(2022, 5, 18);
	d3 -= -100;
	d3.Print();
	d3 += 10000;
	d3.Print();

	d3 -= 10000;
	d3.Print();
}


void TestDate4()
{
	Date d2(2022, 5, 18);
	Date ret1 = ++d2; // d2.operator++()
	ret1.Print();
	d2.Print();

	Date ret2 = d2++; // d2.operator++(0)
	ret2.Print();
	d2.Print();
}

void TestDate5()
{
	Date d1(2022, 5, 18);
	Date d2(2020, 2, 4);
	cout << (d1 - d2) << endl;
	cout << (d2 - d1) << endl;
}


void TestDate6()
{
	Date d1(2022, 5, 18);
	d1.Print(); // d1.Print(&d1); -> Date* 
}

int main()
{
	TestDate5();

	return 0;
}