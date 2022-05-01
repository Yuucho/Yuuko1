//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int main()
//{
//	int a = 0;
//	double b;
//	scanf("%d", &a);
//	scanf("%lf", &b);
//	printf("%d ", a);
//	printf("%.2lf\n", b);
//	cin >> a >> b;
//	cout << a << " " << b << endl;
//	cout << a << " : " << b << "\n";
//	cout << "hello world" << endl;
//	return 0;
//}

//void TestFunc(int a = 0)
//{
//	cout << a << endl;
//}
//int main()
//{
//	TestFunc(); // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	TestFunc(10); // ����ʱ��ʹ��ָ����ʵ��
//}

//void TestFunc(int a = 10, int b = 20, int c = 30)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//}

//void TestFunc(int a=1, int b , int c = 20)
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}

//int main()
//{
//	TestFunc();
//	TestFunc(1); 
//	return 0;
//}

//
//int Add(int left, int right)
//{
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	return left + right;
//}
//
//long Add(long left, long right)
//{
//	return left + right;
//}

//short Add(short left, short right)
//{
//	return left + right;
//}
//int Add(short left, short right)
//{
//	return left + right;
//}

//void TestFunc(int a = 10)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//void TestFunc(int a)
//{
//	cout << "void TestFunc(int)" << endl;
//}
//int main()
//{
//	TestFunc();
//	TestFunc(20);
//	return 0;
//}


//���߱�������extern "C"�����ĺ�����C�⣬Ҫ��C�ķ�ʽȥ�˽����
extern "C"
{
    #include "../Stack_C/Stack.h"
}

bool isValid(const char* s)
{
    ST st;
    StackInit(&st);
    while (*s)
    {
        //����������ž���ջ
        if (*s == '[' || *s == '(' || *s == '{')
        {
            StackPush(&st, *s);
            ++s;
        }
        else
        {
            //ֻ�������ţ�ƥ��ʧ��
            if (StackEmpty(&st))
                return false;

            char top = StackTop(&st);
            StackPop(&st);
            if ((*s == ']' && top != '[')
                || (*s == '}' && top != '{')
                || (*s == ')' && top != '('))
            {
                //��ƥ�䣬return false��return֮ǰ����ջ��ֹ�ڴ�й©
                StackDestroy(&st);
                return false;
            }
            else
            {
                //ƥ�䣬������
                ++s;
            }
        }
    }
    //ջΪ�գ�˵���������Ŷ�ƥ����
    bool ret = StackEmpty(&st);
    StackDestroy(&st);
    return ret;
}

int main()
{
    printf("%d\n", isValid("[]{}"));
    printf("%d\n", isValid("[{]}"));
    return 0;
}