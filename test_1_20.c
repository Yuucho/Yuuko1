#include "test_1_20.h"
int my_strlen(char* s)
{
	char* p = s;
	while (*p != '\0')
	{
		p++;
	}
	return p - s;
}

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while ((*dest++=*src++))
	{
		;
	}
	return ret;
}
int my_strcmp(const char* src, const char* dest)
{
		assert(src && dest);
		while (*src == *dest)
		{
			if (*src == '\0')
			{
				return 0;
			}
			src++;
			dest++;
		}
		return *src - *dest;
}

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest&& src);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}

void GetNext(int* next, const char* sub)
{
	int lensub = strlen(sub);
	next[0] = -1;
	next[1] = 0;
	int i = 2;
	int k = 0;
	while (i < lensub)
	{
		if ((k == -1) || sub[k] == sub[i - 1])
		{
			next[i] = k + 1;
			if (sub[k + 1] == sub[i])
				next[i] = next[next[i]];
			i++;
			k++;
		}
		else
		{
			k = next[k];
		}
	}
}
int KMP(const char* str, const char* sub, int pos)
{
	int i = 0;
	int j = 0;
	int lenstr = strlen(str);
	int lensub = strlen(sub);
	int* next = (int*)malloc((lensub * sizeof(int)));
	assert(next != NULL);
	GetNext(next, sub);
	while (i < lenstr && j < lensub)
	{
		if ((j == -1) || (str[i] == sub[j]))
		{
			i++;
			j++;
		}
		else
		{
			j = next[i];
		}
	}
	free(next);
	if (j >= lensub)
	{
		return i - j;
	}
	else
	{
		return -1;
	}
}