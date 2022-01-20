#pragma once
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdlib.h>
int my_strlen(char* s);
char* my_strcpy(char* dest, const char* src);
int my_strcmp(const char* src, const char* dest);
char* my_strcat(char* dest, const char* src);
int KMP(const char* str, const char* sub, int pos);