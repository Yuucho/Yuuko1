#include <iostream>
#include <assert.h>
using std::cin;
using std::cout;
using std::endl;

//int globalVar = 1;
//static int staticGlobalVar = 1;
//void Test()
//{
//	static int staticVar = 1;
//	int localVar = 1;
//	int num1[10] = { 1, 2, 3, 4 };
//	char char2[] = "abcd";
//	const char* pChar3 = "abcd";
//	int* ptr1 = (int*)malloc(sizeof(int) * 4);
//	int* ptr2 = (int*)calloc(4, sizeof(int));
//	int* ptr3 = (int*)realloc(ptr2, sizeof(int) * 4);
//	free(ptr1);
//	free(ptr3);
//}


//int main()
//{
//	//1. new 1��int����
//	int* p1 = new int;
//	//2. new 10��int����
//	int* p2 = new int[10];
//	//3. newһ��int����, ��ʼ����10
//	int* p3 = new int(10);
//	//4. new ���int���󲢳�ʼ����C++11������
//	int* p4 = new int[10]{ 10,9,8,7 };
//	return 0;
//}


class Stack
{
public:
	Stack(int capacity = 0)
	{
		cout << "Stack(int capacity)" << endl;
		_a = new int[capacity];
		_capacity = capacity;
		_top = 0;
	}

	~Stack()
	{
		cout << "~Stack()" << endl;
		delete[] _a;
		_capacity = 0;
		_top = 0;
	}

	void Push(int x)
	{}
private:
	int* _a;
	int _top;
	int _capacity;
};

int main()
{
	Stack* obj = (Stack*)operator new(sizeof(Stack));
	// ���һ���ռ䣬��ʾ���ù��캯����ʼ��
	new(obj)Stack(4);

	return 0;
}






//int main()
//{ 
//	Stack* ps1 = (Stack*)malloc(sizeof(Stack));
//	assert(ps1);
//	Stack* ps2 = new Stack;
//	free(ps1);
//	delete ps2;
//
//	return 0;
//}

//class MyQueue {
//public:
//	//MyQueue()
//	//	: _pushST(4)
//	//	, _popST(4)
//	//{}
//private:
//	Stack _pushST;
//	Stack _popST;
//};