#include"test_1_20.h"
int main()
{
	char str1[] = "yangkang";
	char str2[] = "wangkexing";
	printf("%d\n", my_strlen("Yuucho"));
	printf("%s\n", my_strcpy(str1,str2));
	printf("%d\n", my_strcmp(str1,str2));
	printf("%s\n", my_strcat(str1, str2));
	printf("%d\n", KMP("abcdef", "abc", 0));
	return 0;
}