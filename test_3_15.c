#define _CRT_SECURE_NO_WARNINGS 1

//
//"zpengwei@yeah.net"
//
//zpengwei
//yeah
//net
//
//"@."

#include <stdio.h>
#include <string.h>

//int main()
//{
//	const char* p = "@.#";
//	char arr[] = "zpengwei@yeah.net#hehe";
//	char buf[50] = { 0 };// "zpengwei@yeah.net"
//	strcpy(buf, arr);
//	char* str = NULL;
//
//	for (str = strtok(buf, p); str != NULL; str=strtok(NULL, p))
//	{
//		printf("%s\n", str);
//	}
//
//	//char* str = strtok(buf, p);//zpengwei
//	//printf("%s\n", str);
//	//str = strtok(NULL, p);//yeah
//	//printf("%s\n", str);
//	//str = strtok(NULL, p);//net
//	//printf("%s\n", str);
//	//strtok - 开始返回NULL
//
//	return 0;
//}


//C语言中
//规定了一些信息
//错误码 - 错误信息
//0 - "No Error"
//1 - 
//2 - 
//3 - 
//

//
//strerror - 可以把错误码翻译成错误信息
//

//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%s\n", strerror(i));
//	}
//	return 0;
//}

//
//C语言可以操作文件
//打开文件 - fopen
//
//当库函数使用的时候，发生错误会把errno这个全局的错误变量设置为本次执行库函数产生的错误码
//errno是C语言提供的一个全局变量，可以直接使用，放在errno.h文件中的
#include <errno.h>

//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		//出错误的原因是什么
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	//...
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

#include <ctype.h>

//int main()
//{
//	//printf("%d\n", isspace('!'));
//	char ch = 'w';
//	if (isspace(ch))
//	{
//		//空白字符
//	}
//	else
//	{
//
//	}
//	return 0;
//}
//int main()
//{
//	//char ch = '0';
//	//if (ch >= '0' && ch <= '9')
//	//{
//
//	//}
//	//if (isdigit(ch))
//	//{
//
//	//}
//
//	char ch = 0;
//	ch = getchar();
//	if (islower(ch))
//	{
//		ch = toupper(ch);
//	}
//	else
//	{
//		ch = tolower(ch);
//	}
//	printf("%c\n", ch);
//
//	return 0;
//}
//

//void* memcpy(void* destination, 
//	         const void* source, 
//	         size_t num);

#include <assert.h>

//void* my_memcpy(void* dest, const void*src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	while (num--) 
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	
//	if (dest < src)
//	{
//		//前->后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//			*((char*)dest+num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//void test1()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//1 2 1 2 3 4 5 8 9 10
//	//my_memcpy(arr3+2, arr3, 5 * sizeof(arr3[0]));
//	my_memmove(arr3, arr3+2, 20);
//
//	//memcpy(arr3+2, arr3, 20);
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr3[i]);
//	}
//}
//int main()
//{
//	test1();
//	//char arr1[] = "abcdef";
//	//char arr2[20] = { 0 };
//	//strcpy(arr2, arr1);//拷贝字符串的
//
//	//int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int arr4[5] = { 0 };
//
//	//my_memcpy(arr4, arr3+5, 5*sizeof(arr3[0]));
//
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	printf("%d\n", arr4[i]);
//	//}
//
//	return 0;
//}
//


//int main()
//{
//	int arr1[] = { 1,2,7,4,5 };
//	int arr2[] = { 1,2,3,4,5 };
//	int ret = memcmp(arr1, arr2, 9);
//
//	printf("%d\n", ret);
//	return 0;
//}
//
//int main()
//{
//	//char arr[20] = { 0 };
//	//memset(arr, 'x', 10);
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr, 'x', 10);
//	//00 00 00 00 00 00 00 00 00 00 00 00 04 00 00 00 ...
//	return 0;
//}
//