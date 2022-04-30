//#include <stdio.h>
//#include <stdlib.h>
////C语言没有很好的解决命名冲突这个问题，C++引入namespace关键字解决这个问题。
////在同一个作用域里，不能有同名变量
//namespace Yuucho
//{
//	int f = 0;
//	int rand = 0;
//}
//
//void f()
//{}
//
//int a = 0;
//int main()
//{
//	//::域作用限定符
//	int a = 1;
//	printf("%p\n", rand);
//	printf("%p\n", f);
//
//	printf("%d\n", Yuucho::rand);
//	printf("%d\n", Yuucho::f);
//
//	printf("%d\n", a);
//	printf("%d\n", ::a);
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//namespace Yuucho
//{
//	int a = 0;
//
//	void f()
//	{
//		printf("void f()\n");
//	}
//
//	struct ListNode
//	{
//		int val;
//		struct ListNode* next;
//	};
//}
//
//namespace John
//{
//	struct ListNode
//	{
//		int val;
//		struct ListNode* next;
//	};
//
//	struct QueueNode
//	{
//		int val;
//		struct QueueNode* next;
//	};
//}
//
//int main()
//{
//	Yuucho::ListNode* n1 = NULL;
//	John::ListNode* n2 = NULL;
//
//	return 0;
//}

//
//#include "List.h"
//#include "Queue.h"
////using namespace Shopee;
////using namespace data;
//using namespace Shopee::cache;
//
//int main()
//{
//	struct Node n1;
//	struct cache::Node n2;
//	struct Node n3;
//	struct cache::Node n4;
//	return 0;
//}

//#include <stdio.h>
//namespace Shopee // 命名空间域
//{
//	int f = 0;
//	int rand = 0;
//}
//
//// 全部放出来
////using namespace bit;
//
//// 只放f出来
//using Shopee::f;
//
//int main()
//{
//	f += 1;
//	printf("%d ", f);
//
//	f += 1;
//	printf("%d ", f);
//
//	f += 1;
//	printf("%d ", f);
//
//	f += 1;
//	printf("%d ", f);
//
//	f += 1;
//	printf("%d ", f);
//
//	f += 1;
//	printf("%d ", f);
//
//	Shopee::rand = 10;
//	printf("%d\n", Shopee::rand);
//
//	return 0;
//}

#include <iostream>
//放部分常用的
using std::cout;
using std::endl;

int main()
{
	cout << "hello world" <<endl;
	std::cout << "hello world" << std::endl;
	return 0;
}