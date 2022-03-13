#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}
//


//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}

#include <string.h>

//1. 计数器的方法
//2. 递归的方法
//3. 指针-指针
//4. 

#include <assert.h>

//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}
//


//int main()
//{
////	if ((int)strlen("abc") - (int)strlen("abcdef") > 0)
//	if (strlen("abc") > (int)strlen("abcdef") )
//		printf(">");
//	else
//		printf("<=");
//
//	return 0;
//}
//
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//	char arr2[20] = "xxxxxxxxxxxx";
//
//	//const char* p = "xxxxxxxxxx";
//	my_strcpy(arr2, arr1);
//	
//	printf("%s\n", arr2);
//
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int* test()
//{
//	int a = 10;//0x0012ff40
//	return &a;
//}
//
//int main()
//{
//	// p = 0x0012ff40
//	int*p = test();
//	*p = 20;
//	return 0;
//}

//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abcdef"));
//	
//	char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//	char arr2[20] = "xxxxxxxxxxxx";
//
//	printf("%s\n", strcpy(arr2, arr1));
//	return 0;
//}
//

//
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1. 目标空间中的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. 追加内容到目标空间
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";// {'w', 'o', 'r', 'l', 'd', '\0'};
//
//	printf("%s\n", my_strcat(arr1, arr2));
//
//	return 0;
//}


//
//函数调用约定
//
//
//int my_strcmp(const char* str1, const char*str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//}
//int main()
//{
//	//strcmp - 字符串比较
//	//比较是对应位置上的字符大小
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//
//	int ret = my_strcmp(arr1, arr2);
//
//	if (ret<0)
//	{
//		printf("arr1<arr2");
//	}
//	else if (ret >0)
//	{
//		printf("arr1>arr2");
//	}
//	else
//	{
//		printf("arr1==arr2");
//	}
//
//	return 0;
//}
//

//char* strncpy(char* strDest, 
//	          const char* strSource, 
//	          size_t count);

//strcpy
//strncpy

//strcat
//strncat


//int main()
//{
//	char arr1[] = "abcwef";
//	char arr2[] = "abcqqqqqq";
//	int ret = strncmp(arr1, arr2, 4);
//
//	printf("%d\n", ret);
//
//	//char arr1[20] = "hello\0xxxxxxx";
//	//char arr2[] = "world";
//	//strncat(arr1, arr2, 7);
//
//	//printf("%s\n", arr1);
//	//strncpy(arr1, arr2, 5);
//	//printf("%s\n", arr1);
//
//	return 0;
//}

//strstr

//char* strstr(const char* string, 
//	         const char* strCharSet);

//abcdefabcdef 
//bcdq
//
//
//char* my_strstr(const char* str, const char* substr)
//{
//	const char* s1 = str;
//	const char* s2 = substr;
//	const char* cur = str;
//
//	assert(str && substr);
//	if (*substr == '\0')
//	{
//		return (char*)str;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = substr;
//		while (*s1 &&  *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)cur;
//
//		cur++;
//	}
//	return NULL;
//}
//
////KMP 可以研究一下
////比特大博哥 B站号
//
//int main()
//{
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbcq";
//
//	char* ret = my_strstr(arr1, arr2);
//
//	if (NULL == ret)
//		printf("没找到\n");
//	else
//		printf("%s\n", ret);
//
//	return 0;
//}
