#include<iostream>
#include <string>
using namespace std;

//int main()
//{
//	string s1;
//	string s2("Hello World!");
//	return 0;
//}

//int main()
//{
//	cout << sizeof(char) << endl;
//	cout << sizeof(char16_t) << endl;
//	cout << sizeof(char32_t) << endl;
//	cout << sizeof(wchar_t) << endl;
//
//	return 0;
//}

#include <string>
#include <iostream>
#include <assert.h>
using namespace std;
//void test_string1()
//{
//	string s1;
//	string s2("hello world");
//	string s3(s2);
//	string s4 = s2;
//	//前4个初始化
//	string s5("http://m.cplusplus.com/reference/string/string/string/", 4);
//	//用n个C初始化
//	string s6(10, 'x');
//
//	//string (const string& str, size_t pos, size_t len = npos);
//	//static const size_t npos = -1;
//	//npos表示如果取的字符超过剩余的字符数量，有多少取多少
//
//	//从s2的第6个字符起，取3个字符初始化
//	string s7(s2, 6, 3);
//	//超过剩余的字符数量，有多少取多少
//	string s8(s2, 6, 100);
//	//不给第三个参数，默认参数是npos
//	string s9(s2, 6);
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << s4 << endl;
//	cout << s5 << endl;
//	cout << s6 << endl;
//	cout << s7 << endl;
//	cout << s8 << endl;
//	cout << s8 << endl;
//}

//
//void test_string2()
//{
//	string s1("hello");
//	string s2("xxx");
//
//	s1 = s2;
//	s1 = "yyy";
//	s1 = 'y';
//}


//void test_string3()
//{
//	// 遍历string的每一个字符
//	string s1("hello");
//	cout << s1[0] << endl;
//	s1[0] = 'x';
//
//	cout << s1.size() << endl;
//
//	// 第一个中方式，下标+[]
//	for (size_t i = 0; i < s1.size(); i++)
//	{
//		// s1.operator[](i);
//		cout << s1[i] << " ";
//	}
//	cout << endl;
//
//	//const char* s2 = "world";
//	//s2[i]; // *(s2+i)
//
//	// 迭代器
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	// 范围for -- 原理：替换成迭代器
//	for (auto ch : s1)
//	{
//		cout << ch << " ";
//	}
//	cout << endl;
//}


//void test_string4()
//{
//	string s1("hello");
//	const string s2("hello");
//	//s1[6];
//	//s2[6];
//	s1.at(6);
//	s2.at(6);
//
//	s1[0] = 'x';
//	//s2[0] = 'x';
//	s1.at(0) = 'y';
//}
//int main()
//{
//	try
//	{
//		test_string4();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

//
//void test_string5()
//{
//	// 正向迭代器
//	string s("hello world");
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	// 反向迭代器
//	string::reverse_iterator rit = s.rbegin();
//	while (rit != s.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}

void test_string6()
{
	string s;
	s.push_back('x');
	s.append("hello");
	string str("world");
	s.append(str);
	cout << s << endl;

	s += 'x';
	s += "hello";
	s += str;
	cout << s << endl;
}

int main()
{
	test_string6();
	return 0;
}