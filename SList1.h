#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
// 1����ͷ+����+��ѭ��������ɾ���ʵ��
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType data;
	struct SListNode* next;
}SListNode;
// ��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x);
// �������ӡ
void SListPrint(SListNode* phead);
// ������β��
void SListPushBack(SListNode** phead, SLTDateType x);
// �������ͷ��
void SListPushFront(SListNode** phead, SLTDateType x);
// �������βɾ
void SListPopBack(SListNode** phead);
// ������ͷɾ
void SListPopFront(SListNode** phead);
// ���������
SListNode* SListFind(SListNode* phead, SLTDateType x);
// ��������posλ��֮�����x
// ����˼��Ϊʲô����posλ��֮ǰ���룿
void SListInsertAfter(SListNode* pos, SLTDateType x);
// ������ɾ��posλ��֮���ֵ
// ����˼��Ϊʲô��ɾ��posλ�ã�
void SListEraseAfter(SListNode* pos);
void SListDestroy(SListNode** pphead);