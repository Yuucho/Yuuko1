#include <string>
#include <vector>
#include <list>
#include <iostream>
using namespace std;

#include <assert.h>

void test_string1()
{
	//std::string s;
	string s1;
	string s2("hello world");
	string s3(s2);
	string s4 = s2;

	string s5("http://m.cplusplus.com/reference/string/string/string/", 4);
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	string s6(10, 'x');
	cout << s6 << endl;

	string s7(s2, 6, 3);
	cout << s7 << endl;

	string s8(s2, 6, 100);
	cout << s8 << endl;

	string s9(s2, 6);
	cout << s8 << endl;
}

void test_string2()
{
	string s1("hello");
	string s2("xxx");

	s1 = s2;
	s1 = "yyy";
	s1 = 'y';
}

void test_string3()
{
	// 遍历string的每一个字符
	string s1("hello");
	cout << s1[0] << endl;
	s1[0] = 'x';

	cout << s1.size() << endl;

	// 第一个中方式，下标+[]
	for (size_t i = 0; i < s1.size(); i++)
	{
		// s1.operator[](i);
		cout << s1[i] << " ";
	}
	cout << endl;

	//const char* s2 = "world";
	//s2[i]; // *(s2+i)

	// 迭代器
	string::iterator it = s1.begin();
	while (it != s1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	// 范围for -- 原理：替换成迭代器
	for (auto ch : s1)
	{
		cout << ch << " ";
	}
	cout << endl;

	//vector<int> v;
	//v.push_back(1);
	//v.push_back(2);
	//v.push_back(3);
	//v.push_back(4);

	//vector<int>::iterator vit = v.begin();
	//while (vit != v.end())
	//{
	//	cout << *vit << " ";
	//	++vit;
	//}
	//cout << endl;
}

// 管理动态增长字符数组，这个字符串以\0结尾
namespace bit
{
	class string
	{
	public:
		// 值修改返回对象
		char& operator[](size_t pos)
		{
			assert(pos <= _size);

			return _str[pos];
		}

		const char& operator[](size_t pos) const
		{
			assert(pos <= _size);

			return _str[pos];
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;
	};
}

void test_string4()
{
	string s1("hello");
	const string s2("hello");
	//s1[6];
	//s2[6];
	s1.at(6);
	s2.at(6);

	s1[0] = 'x';
	//s2[0] = 'x';
	s1.at(0) = 'y';
}

void Func(const string& rs)
{
	string::const_iterator it = rs.begin();
	while (it != rs.end())
	{
		//*it += 1;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	//string::const_reverse_iterator rit = rs.rbegin();
	auto rit = rs.rbegin();
	while (rit != rs.rend())
	{
		//(*rit) -= 1;
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
}

void test_string5()
{
	// 正向迭代器
	string s("hello world");
	string::iterator it = s.begin();
	while (it != s.end())
	{
		(*it) += 1;
		cout << *it << " ";
		++it;
	}
	cout << endl;

	cout << s << endl;

	// 反向迭代器
	string::reverse_iterator rit = s.rbegin();
	while (rit != s.rend())
	{
		(*rit) -= 1;
		cout << *rit << " ";
		++rit;
	}
	cout << endl;
	cout << s << endl;

	Func(s);
}

void test_string6()
{
	/*string s("hello world");
	cout << s.length() << endl;
	cout << s.size() << endl;
	cout << s.max_size() << endl;
	cout << s.capacity() << endl;*/

	//string s;
	////s.reserve(1000); // 扩空间
	//s.resize(1000, 'x'); // 扩空间+初始化

	//size_t sz = s.capacity();
	//cout << "making s grow:\n";
	//cout << "capacity changed: " << sz << '\n';
	//for (int i = 0; i < 1000; ++i)
	//{
	//	s.push_back('c');
	//	if (sz != s.capacity())
	//	{
	//		sz = s.capacity();
	//		cout << "capacity changed: " << sz << '\n';
	//	}
	//}

	//string s("hello");
	////s.reserve(100);
	//s.resize(100, 'x');

	//// vs下他们都不会缩容量
	//s.reserve(10);
	//s.resize(10);

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

//int main()
//{
//	try
//	{
//		test_string6();
//	}
//	catch (const exception& e)
//	{
//		cout << e.what() << endl;
//	}
//
//	return 0;
//}

// 
namespace bit
{
	template<class T>
	class basic_string
	{
	public:
		basic_string(const T* str)
		{
			// 开空间存储字符串，方便增删查改
			size_t len = strlen(str);
			_str = new T[len + 1];
			strcpy(_str, str);
		}

		T& operator[](size_t pos)
		{
			return _str[pos];
		}
	private:
		const T* _str;
		size_t _size;
		size_t _capacity;
	};
}

// typedef basic_string<char> string;
//int main()
//{
//	//char a[10];
//	//a[100] = 'a';
//
//	string s("hello world");
//	//s += "hello";
//	// 1:下表+[]
//	//s[12];
//	for (size_t i = 0; i < s.size(); ++i)
//	{
//		s[i] += 1;
//		cout << s[i] << " ";
//	}
//	cout << endl;
//
//	// 2: 迭代器 -- 像指针一样的访问数据结构的东西
//	string::iterator it = s.begin();
//	while (it != s.end())
//	{
//		*it -= 1;
//		cout << *it << " ";
//
//		++it;
//	}
//	cout << endl;
//	
//	// 3：范围for--语法糖 底层：编译器替换成了迭代器
//	for (auto e : s)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

void test_string7()
{
	string s("hello");
	s += ' ';
	s += "world";
	cout << s << endl;

	s.insert(0, 1, 'x');
	s.insert(s.begin(), 'y');
	cout << s << endl;

	s.insert(3, 1, 'x');
	s.insert(s.begin() + 3, 'y');
	cout << s << endl;

	s.insert(0, "sort ");
	cout << s << endl;
}

void test_string8()
{
	string s("hello world");
	cout << s << endl;

	s.erase(s.begin());
	cout << s << endl;

	s.erase(s.begin() + 3);
	cout << s << endl;

	s.erase(3, 2);
	cout << s << endl;

	//s.erase(3);
	s.erase(3, 100);
	cout << s << endl;
}

void test_string9()
{
	string s1("hello world");
	string s2("string");

	// C++98
	s1.swap(s2);   // 效率高
	swap(s1, s2);  // 效率低

	cout << s1 << endl;
	cout << s1.c_str() << endl;

	// 要求取出文件的后缀
	//string file("string.cpp");
	//string file("string.c");
	string file("string.c.tar.zip");

	//size_t pos = file.find('.');
	size_t pos = file.rfind('.');

	if (pos != string::npos)
	{
		//string suffix = file.substr(pos, file.size() - pos);
		string suffix = file.substr(pos);

		cout << file << "后缀：" << suffix << endl;
	}
	else
	{
		cout << "没有后缀" << endl;
	}

	// 取出url中的域名
	string url1("http://www.cplusplus.com/reference/string/string/find/");
	string url2("https://leetcode.cn/problems/design-skiplist/solution/tiao-biao-probabilistic-alternative-to-b-0cd8/");

	string& url = url2;

	// 协议 域名 uri
	string protocol;
	size_t pos1 = url.find("://");
	if (pos1 != string::npos)
	{
		protocol = url.substr(0, pos1);
		cout << "protocol:" << protocol << endl;
	}
	else
	{
		cout << "非法url" << endl;
	}

	string domain;
	size_t pos2 = url.find('/', pos1 + 3);
	if (pos2 != string::npos)
	{
		domain = url.substr(pos1 + 3, pos2 - (pos1 + 3));
		cout << "domain:" << domain << endl;
	}
	else
	{
		cout << "非法url" << endl;
	}

	string uri = url.substr(pos2 + 1);
	cout << "uri:" << uri << endl;
}

void test_string10()
{
	string s1("hello world");
	string s2("string");

	s1 < s2;
	s1 < "hello";
	"hello" < s1;
}

//int main()
//{
//	test_string10();
//
//	return 0;
//}

#include<iostream>
using namespace std;

//cin >> year >> month >> day;
int main()
{
	string str;
	//cin >> str;
	getline(cin, str);
	size_t pos = str.rfind(' ');
	if (pos != string::npos)
	{
		cout << str.size() - pos - 1 << endl;
	}
	else
	{
		cout << str.size() << endl;
	}

	return 0;
}