#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//模拟实现库函数：strcpy
#include <stdio.h>
#include <string.h>
//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello的拷贝
//	}
//	*dest = *src;//\0的拷贝

char* my_strcpy(char*dest, const char* src)//const防止写成*src++ = *dest++
{
	assert(src != NULL);//断言
	char* r = dest;
	while (*dest++ = *src++)
	{
		;//hello的拷贝
	}
	return r;
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxx";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}

