#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//д�����жϵ�ǰ�������ֽ���
//����ֽ��򣺰����ݵĵ�λ�ֽ�������ݴ���ڸߵ�ַ������λ�ֽ�������ݴ���ڵ͵�ַ��
//С���ֽ��򣺰����ݵĵ�λ�ֽ�������ݴ���ڵ͵�ַ������λ�ֽ�������ݴ���ڸߵ�ַ��



//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;//����1��С�ˣ�����0�Ǵ��
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	if (ret == 0)
	{
		printf("���\n");
	}
	return 0;
}