#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//ģ��ʵ�ֿ⺯����strcpy
#include <stdio.h>
#include <string.h>
//void my_strcpy(char*dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello�Ŀ���
//	}
//	*dest = *src;//\0�Ŀ���

char* my_strcpy(char*dest, const char* src)//const��ֹд��*src++ = *dest++
{
	assert(src != NULL);//����
	char* r = dest;
	while (*dest++ = *src++)
	{
		;//hello�Ŀ���
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

