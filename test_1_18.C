#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

//测试qsort排序整型数组
void test1()
{
	int arr[] = { 1,4,2,6,5,3,7,9,0,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);

	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
	float score;
};

int cmp_stu_by_socre(const void* e1, const void* e2)
{
	if (((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
	{
		return 1;
	}
	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int cmp_stu_by_age(const void* e1, const void* e2)
{
	return (*(struct Stu*)e1).age - (*(struct Stu*)e2).age;
	//①若定义的结构体变量，则访问数据时用".";
	//②若定义的结构体指针，则访问数据时用"->";

}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}

void print_stu(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d %f\n", arr[i].name, arr[i].age, arr[i].score);
	}
	printf("\n");
}

//测试qsort排序结构体数据
void test2()
{
	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
	//按照成绩来排序
	int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_socre);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//if (arr[j] > arr[j + 1])
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//两个元素的交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
void test4()
{
	struct Stu arr[] = { {"zhangsan",20,87.5f},{"lisi",22,99.0f},{"wangwu", 10, 68.5f} };
	//按照成绩来排序
	int sz = sizeof(arr) / sizeof(arr[0]);

	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_socre);
	//bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	print_stu(arr, sz);
}

int main()
{
	test4();
	return 0;
}
