#include <iostream>
using namespace std;
////Ƶ�����ö�С����
//inline int Add(int x, int y)
//{
//	int z = x + y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	z += x*y;
//	return z;
//}
// ʵ��ADD�ĺ�
//#define ADD(int x, int y) return x + y;
//#define ADD(x, y) return x + y;
//#define ADD(x, y) (x + y);
//#define ADD(x, y) x + y
//#define ADD(x, y) ((x)+(y))
//��֤�Լ�д�ĺ��Ƿ���ȡ�����ǵ����滻һ��
//#include "F.h"
//int main()
//{
	//ADD(1, 2); // ((1)+(2))
	//if (ADD(1, 2)) // if (((1)+(2));)����
	//{
	//}
	//ADD(1 & 2, 3 | 4);//(1 & 2 + 3 | 4)����
	//ADD(1, 2) * 4;//1 + 2 * 4����

	//Add(1 & 2, 3 | 4);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
	//Add(1, 2);
//	return 0;
//}



//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	const int a = 10;
//	auto b = &a;
//	auto c = 'a';
//	auto d = TestAuto();
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	cout << typeid(d).name() << endl;
//	return 0;
//}

//int main()
//{
//	int x = 10;
//	auto a = &x;
//	auto* b = &x;
//	auto& c = x;
//	cout << typeid(a).name() << endl;
//	cout << typeid(b).name() << endl;
//	cout << typeid(c).name() << endl;
//	*a = 20;
//	*b = 30;
//	c = 40;
//	return 0;
//}

//#include <map>
//#include <string>

auto test()
{
	return 10;
}


int main()
{
	test();
		int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

		for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
		{
			array[i] *= 2;
		}
	
		for (int i = 0; i < sizeof(array) / sizeof(int); ++i)
		{
			cout << array[i] << " ";
		}
		cout << endl;

		for (auto& e : array)
		{
			e /= 2;
		}

		for (int e : array)
		{
			cout << e << " ";
		}
		cout << endl;
		return 0;
}