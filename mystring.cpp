#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include "string.h"
using namespace std;


void test_string1()
{
    Yuucho::string s1("hello world");
    //s1.operator[](0) = 'x';
    s1[0] = 'x';
    cout << s1.c_str() << endl;

    for (size_t i = 0; i < s1.size(); ++i)
    {
        cout << s1[i] << " ";
    }
    cout << endl;
}

void test_string2()
{
    Yuucho::string s1("hello world");
    Yuucho::string s2(s1);
    cout << s1.c_str() << endl;
    cout << s2.c_str() << endl;
}

void test_string5()
{
	Yuucho::string s1("hello world");
	s1.push_back('1');
	s1.push_back('1');

	cout << s1.c_str() << endl;

	s1 += '2';
	s1 += '3';
	s1 += '4';
	cout << s1.c_str() << endl;

	s1 += "Yuucho";
	cout << s1.c_str() << endl;

	Yuucho::string s2;
	//s2.reserve(20);
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	s2 += '1';
	cout << s1.c_str() << endl;

	Yuucho::string s3("hello world");
	s3.reserve(15);
	//s3.resize(21, 'x');
	s3.resize(14, 'x');
	s3.resize(5);

	s1 < s2;
}
int main()
{
    test_string5();
    return 0;
}