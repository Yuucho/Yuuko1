#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//������
//��������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)��������������Ǳ�ʾ��������ģ����������������Ĵ�С����λ���ֽڡ�
//2. &�������������������Ҳ��ʾ�������飬ȡ����������ĵ�ַ
//������2����������⣬���е�����������������Ԫ�صĵ�ַ
//

//int main() 
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//������a��������sizeof�ڲ����������������Ĵ�С����λ���ֽڣ�4*4 = 16
//	printf("%d\n", sizeof(a + 0));//a��ʾ����Ԫ�صĵ�ַ��a+0����������Ԫ�صĵ�ַ���ǵ�ַ��С4/8
//	printf("%d\n", sizeof(*a));//a��ʾ����Ԫ�صĵ�ַ,*a���Ƕ���Ԫ�صĵ�ַ�Ľ����ã�������Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));//a��ʾ����Ԫ�صĵ�ַ��a+1�ǵڶ���Ԫ�صĵ�ַ���ǵ�ַ����С��4/8���ֽ�
//	printf("%d\n", sizeof(a[1]));//a[1]������ĵڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(&a)); //&a ��ʾ������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ��С����4/8�ֽ�
//	printf("%d\n", sizeof(*&a));//�������Ϊ*��&����Ч����*&a�൱��a,sizeof(a)��16
//	//&a -> int(*)[4]
//	//&a������ĵ�ַ������������int(*)[4]����ָ�룬��������ã����ʵľ���4��int�����飬��С��16���ֽ�
//	printf("%d\n", sizeof(&a + 1));//&a������ĵ�ַ��&a+1 �������������ĵ�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(&a[0]));//&a[0]ȡ�������һ��Ԫ�صĵ�ַ���ǵ�ַ����4/8
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0]+1���ǵڶ���Ԫ�صĵ�ַ,�ǵ�ַ��С����4/8���ֽ�
//
//	//&a[0] - int*
//	//
//	return 0;
//}

//sizeofֻ��עռ�ÿռ�Ĵ�С����λ���ֽ�
//sizeof����ע����
//sizeof�ǲ�����
// 
//strlen��ע���ַ�����\0��Ϊֹ���������\0֮ǰ�����˶��ٸ��ַ�
//strlenָ����ַ���
//strlen�ǿ⺯��
#include <string.h>
//
//int main()
//{
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr));//arr����Ԫ�صĵ�ַ������arr������û��\0�������ʱ��Ͳ�֪��ʲôʱ��ֹͣ������ǣ����ֵ
//	printf("%d\n", strlen(arr + 0));//arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ������ǣ����ֵ
//	//printf("%d\n", strlen(*arr)); //err,strlen��Ҫ����һ����ַ���������ַ��ʼ������ַ�,ֱ��\0��ͳ���ַ��ĸ�����
//	//����*arr���������Ԫ�أ�Ҳ����'a',���Ǵ���strlen�ľ���'a'��ascii��ֵ97��strlen�������97��Ϊ��ʼ��ַ��ͳ���ַ��������γ��ڴ���ʳ�ͻ
//	
//	//printf("%d\n", strlen(arr[1]));//err ����һ��һ�����ڴ���ʳ�ͻ
//
//	printf("%d\n", strlen(&arr));//&arr��arr����ĵ�ַ����Ȼ���ͺ�strlen�Ĳ��������������죬���Ǵ��ι�ȥ�󣬻��Ǵӵ�һ���ַ���
//	//λ��������ַ�������������ֵ��
//
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//
//	//printf("%d\n", sizeof(arr));//arr��Ϊ��������������sizeof�ڲ����������������Ĵ�С����λ���ֽڣ�6
//	//printf("%d\n", sizeof(arr + 0));//arr������Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ��С����4/8
//	//printf("%d\n", sizeof(*arr));//arr������Ԫ�صĵ�ַ��*arr������Ԫ�أ���һ���ַ�����С��һ���ֽڣ�1
//	//printf("%d\n", sizeof(arr[1]));//arr[1]��������ĵڶ���Ԫ�أ���һ���ַ�����С��1���ֽ�
//	//printf("%d\n", sizeof(&arr));//&arrȡ����������ĵ�ַ������ĵ�ַҲ�ǵ�ַ����ַ����4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));//&arrȡ����������ĵ�ַ��&arr+1���������������飬&arr+1���ǵ�ַ����ַ����4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));//&arr[0]�ǵ�һ��Ԫ�صĵ�ַ��&arr[0]+1���ǵڶ���Ԫ�صĵ�ַ����ַ����4/8���ֽ�
//
//	return 0;
//}


//int main()
//{
////	char arr[] = "abcdef";
////	printf("%d\n", strlen(arr));
////	printf("%d\n", strlen(arr + 0));
//////	printf("%d\n", strlen(*arr));
//////	printf("%d\n", strlen(arr[1]));
////	printf("%d\n", strlen(&arr));
////	printf("%d\n", strlen(&arr + 1));
////	printf("%d\n", strlen(&arr[0] + 1));
//
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n", sizeof(arr + 0));
//	//printf("%d\n", sizeof(*arr));
//	//printf("%d\n", sizeof(arr[1]));
//	//printf("%d\n", sizeof(&arr));
//	//printf("%d\n", sizeof(&arr + 1));
//	//printf("%d\n", sizeof(&arr[0] + 1));
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", strlen(p));//p�д�ŵ���'a'�ĵ�ַ��strlen(p)���Ǵ�'a'��λ��������ַ����ĳ��ȣ�������6
//	printf("%d\n", strlen(p + 1));//p+1��'b'�ĵ�ַ����b��λ�ÿ�ʼ���ַ���������5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//p[0] -> *(p+0) -> *p ->'a' ,&p[0]�������ַ��ĵ�ַ��&p[0]+1���ǵڶ����ַ��ĵ�ַ
//	//�ӵ�2 �ַ���λ��������ַ�����������5
//
//
//	//printf("%d\n", sizeof(p)); //p��һ��ָ�������sizeof(p)����ľ���ָ������Ĵ�С��4 / 8���ֽ�
//	//printf("%d\n", sizeof(p + 1));//p��ָ��������Ǵ�ŵ�ַ�ģ�p+1Ҳ�ǵ�ַ����ַ��С����4/8�ֽ�
//	//printf("%d\n", sizeof(*p));//*p���ʵ���1���ֽ�
//	//printf("%d\n", sizeof(p[0]));//p[0]--> *(p+0) -> *p   1���ֽ�
//
//	//printf("%d\n", sizeof(&p));//&pҲ�ǵ�ַ���ǵ�ַ����4/8�ֽڣ�&p�Ƕ���ָ��
//
//	//printf("%d\n", sizeof(&p + 1)); //&p�ǵ�ַ�� + 1���ǵ�ַ���ǵ�ַ����4 / 8�ֽ�
//	////&p + 1,��p�ĵ�ַ+1�����ڴ�������p������ĵ�ַ
//
//	//printf("%d\n", sizeof(&p[0] + 1));//p[0]����a��&p[0]����a�ĵ�ַ��&p[0]+1����b�ĵ�ַ���ǵ�ַ����4/8�ֽ�
//
//	return 0;
//}




//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", &a+1);
//
//	////printf("%p\n", a[0] + 1);
//	//printf("%p\n", a + 1);
//	//int* p = a + 1;
//	
//	//printf("%d\n", sizeof(a));//��������������sizeof�ڲ������������������Ĵ�С
//	//printf("%d\n", sizeof(a[0][0]));
//	//printf("%d\n", sizeof(a[0]));//a[0]��ʾ��һ�е���������a[0]��Ϊ��������������sizeof�ڲ���������ǵ�һ�еĴ�С��
//	//printf("%d\n", sizeof(a[0] + 1));//
//	//printf("%d\n", sizeof(*(a[0] + 1)));
//	//printf("%d\n", sizeof(a + 1));
//	//printf("%d\n", sizeof(*(a + 1)));
//	//printf("%d\n", sizeof(&a[0] + 1));
//	//printf("%d\n", sizeof(*(&a[0] + 1)));
//	//printf("%d\n", sizeof(*a));
//	//printf("%d\n", sizeof(a[3]));
//
//	return 0;
//}


//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//
//    return 0;
//}
//
//
//
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//
//	printf("%x\n", p + 0x1);
//	printf("%x\n", (unsigned long)p + 0x1);
//	printf("%x\n", (unsigned int*)p + 0x1);
//	//%p �Ե�ַ����ʽ��ӡ����ʡ��
//	//%x ���Ǵ�ӡ16���ƣ�ʡ��
//	return 0;
//}
//

//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}


//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p = a;
//    printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//    return 0;
//}

//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}