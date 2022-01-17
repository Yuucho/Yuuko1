#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//Ö¸Õë×Ö·ûÊý×é
int main(int argc, char *argv[])
{
	char * s[] = { "apple", "pear", "potato" };
	char ** p;
	int i, n;
	i = 0;
	n = sizeof(s) / sizeof(char *);
	p = &s[0];//p = s;
	while (i < n)
	{
		printf("%s %s\n", s[i], *(p + i));
		i++;
	}
	return 0;
}