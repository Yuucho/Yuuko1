#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//Ä£ÄâÊµÏÖstrlen
size_t my_strlen(const char* str)
{
	assert(str);
	const char * r = str;
	while (*r++)
		;
		return (r - str - 1);
}
int main()
{
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}