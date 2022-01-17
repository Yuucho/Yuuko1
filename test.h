#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
//头文件的包含
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
int my_strlen(char *s);
char *my_strcpy(char *dest, const char*src);
char *my_strcat(char *dest, const char*src);
char *strstr(const char * str1, const char *str2);
int my_strcmp(const char *src, const char *dest);
void * memcpy(void * dst, const void *src, size_t count);
void * memmove(void *dst, const void * src, size_t count);