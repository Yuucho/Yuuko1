#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//指针函数
//返回值：1.全局变量的地址 2.static变量的地址  3.字符串常量的地址 4.堆的地址

char * getstring();
int main()
{
	printf("%s\n", getstring());
	return 0;
}
char * getstring()
{
	static char str[20];//static使得数组的作用域变长
	//char * str = "hello" 如果这样写第12,14行要删去
	strcpy(str, "hello");
	return str;
}