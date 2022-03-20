#define _CRT_SECURE_NO_WARNINGS 1



#include<stdio.h>

//int main()
//{
//    unsigned char i = 7;//7,4,1,254,251,.....,5,2,255,252,,6,3,0
//    //
//    //-2
//    //10000000000000000000000000000010
//    //11111111111111111111111111111101
//    //11111111111111111111111111111110
//    //11111110
//    //11111111
//    //255
//    int j = 0;
//
//    for (; i > 0; i -= 3)
//    {
//        ++j;//1,2,3,
//    }
//
//    printf("%d\n", j);
//    return 0;
//}

//
//以下程序运行时，若输入1abcedf2df<回车>输出结果是？
//
//
//#include<stdio.h>
//int main()
//{
//	char a = 0, ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z'))
//			ch = ch - 'a' + 'A';
//		//             32
//		a++;
//		putchar(ch);//1AbC
//	}
//	printf("\n");
//}
//



//A
//flag &= ~2
////00000000000000000000000000000010
////11111111111111111111111111111101
////
//B
//flag |= 2
//C
//flag ^= 2
//D
//flag >>= 2



//
//int x = 1;
//do {
//    printf("%2d\n", x++);
//} while (x--);
//


#include<stdio.h>
#include<stdlib.h>
//void main()
//{
//	int a = -3;
//	//10000000000000000000000000000011
//	//11111111111111111111111111111100
//	//11111111111111111111111111111101
//	//
//	unsigned int b = 2;
//	//00000000000000000000000000000010
//	//11111111111111111111111111111101
//	//11111111111111111111111111111111
//	//
//	long c = a + b;
//	printf("%ld\n", c);
//}
//
//





//int f(int x) {
//    return ((x > 2) ? x * f(x - 1) : 3);
//}
//int main()
//{
//    int i;
//    i = f(3);//3*3
//
//    return 0;
//}


//int p[][4] = { {1},{3,2},{4,5,6},{0} }
//1 0 0 0 
//3 2 0 0
//4 5 6 0
//0 0 0 0



//int fun(int a) {
//	//a=21
//	//00100000
//	//00011111
//	//00010101
//	//00001010
//	//
//	a ^= (1 << 5) - 1;
//	return a;
//}
//
//int main()
//{
//	printf("%d\n", fun(21));
//	return 0;
//}


//int main()
//{
//	const int n = 10;
//	int arr[n] = { 0 };
//
//	return 0;
//}
//


//#define N 
//#define Y(n) ((3+1+1)*5 + 1)
//则执行语句 z = 2 * （ 3 + 1 + ((5) * 5 + 1) ）后， z 的值为


class Solution {
public:
    void replaceSpace(char* str, int length) {
        int spacecnt = 0;
        char* cur = str;
        while (*cur)
        {
            if (*cur == ' ')
                spacecnt++;
            cur++;
        }
        int newlen = length + spacecnt * 2;
        int end1 = length - 1;
        int end2 = newlen - 1;

        while (end1 != end2)
        {
            if (str[end1] != ' ')
            {
                str[end2--] = str[end1--];
            }
            else
            {
                str[end2--] = '0';
                str[end2--] = '2';
                str[end2--] = '%';
                end1--;
            }
        }
    }
};



#include <stdio.h>

int main()
{
    int n = 0;
    int a = 0;
    int b = 1;
    int c = a + b;
    scanf("%d", &n);
    while (1)
    {
        if (n == b)
        {
            printf("%d\n", 0);
            break;
        }
        else if (n < b)
        {
            if (abs(a - n) < abs(b - n))
            {
                printf("%d\n", abs(a - n));
                break;
            }
            else
            {
                printf("%d\n", abs(b - n));
                break;
            }
        }
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}