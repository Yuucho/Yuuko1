#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
//模拟实现strlen
int my_strlen(char *s)
{
	char *p = s;
	while (*p != '\0')
		p++;
	return p - s;
}
//模拟strcpy
char *my_strcpy(char *dest, const char*src)
{
	char *ret = dest;
	assert(dest && src);
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
//模拟实现strcat
char *my_strcat(char *dest, const char*src)
{
	char *ret = dest;
	assert(dest && src);
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
//模拟实现strstr
char *strstr(const char * str1, const char *str2)
{
	char *cp = (char *)str1;
	char *s1, *s2;
	if (!*str2)
		return((char *)str1);
	while (*cp)
	{
		s1 = cp;
		s2 = (char *)str2;
		while (*s1 && *s2 && !(*s1 - *s2))
			s1++, s2++;
		if (!*s2)
			return(cp);
		cp++;
	}
	return(NULL);
}
//模拟实现strcmp
int my_strcmp(const char *src, const char *dest)
{
	int ret = 0;
	assert(src && dest);
	while (!(ret = *(unsigned char *)src - *(unsigned char *)dest) && *dest)
		++src, ++dest;
	if (ret < 0)
		ret = -1;
	else if (ret > 0)
		ret = 1;
	return(ret);
}
//模拟实现memcpy
void * memcpy(void * dst, const void *src, size_t count)
{
	void * ret = dst;
	assert(dst && src);
	//copy from lower addresses to higher addresses
	while (count--)
	{
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;
	}
	return (ret);
}
//模拟实现memmove
void * memmove(void *dst, const void * src, size_t count)
{
	void * ret = dst;
	if (dst <= src || (char *)dst >= ((char*)src + count))
	{
		//Non-Overlapping Buffers
		//copy from lower addresses to higher addresses
		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		//Overlapping Buffers
		//copy from lower addresses to higher addresses
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;
		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return(ret);
}