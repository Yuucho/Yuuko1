#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType *a;
	int Top;
	int capacity;
}ST;

//#ifdef __cplusplus
//	#define EXTERN_C extern "C"
//#else
//	#define EXTERN_C
//#endif
//
//EXTERN_C void StackInit(ST*ps);
//EXTERN_C void StackDestroy(ST*ps);
////»Î’ª
//EXTERN_C void StackPush(ST*ps, STDataType x);
////≥ˆ’ª
//EXTERN_C void StackPop(ST*ps);
//EXTERN_C STDataType StackTop(ST *ps);
//EXTERN_C int StackSize(ST *ps);
//EXTERN_C bool StackEmpty(ST *ps);

#ifdef __cplusplus
extern "C"
{
#endif 

	void StackInit(ST* ps);
	void StackDestroy(ST* ps);

	void StackPush(ST* ps, STDataType x);

	void StackPop(ST* ps);
	STDataType StackTop(ST* ps);
	int StackSize(ST* ps);
	bool StackEmpty(ST* ps);
#ifdef __cplusplus
}
#endif 
