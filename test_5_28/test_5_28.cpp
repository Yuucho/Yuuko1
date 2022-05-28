# include <iostream>
using std::cin;
using std::endl;
using std::cout;


//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}


//template<typename T>
//void Swap(T& left, T& right)
//{
//	T temp = left;
//	left = right;
//	right = temp;
//}
//
//int main()
//{
//	int a = 0, b = 1;
//	double c = 2.2, d = 3.3;
//	Swap(a, b);
//	Swap(c, d);
//	printf("a=%d b=%d\n", a, b);
//	printf("c=%lf d=%lf\n", c, d);
//	return 0;
//}

//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int capacity = 0)
//	{
//		_a = new STDataType[capacity];
//		_capacity = capacity;
//		_top = 0;
//	}
//
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		delete[] _a;
//		_capacity = 0;
//		_top = 0;
//	}
//
//	void Push(STDataType x)
//	{}
//private:
//	STDataType* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st1; // int
//	Stack st2; // double
//
//	return 0;
//}


template<class T>
class Stack
{
public:
	Stack(int capacity = 0)
	{
		_a = new T[capacity];
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

	void Push(const T& x)
	{}
private:
	T* _a;
	int _top;
	int _capacity;
};

int main()
{
	Stack<int> st1; // int
	st1.Push(1);

	Stack<double> st2; // double
	st2.Push(2.2);

	return 0;
}