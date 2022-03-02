#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	//printf("hehe\n");
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		return 0;
//	}
//	//写文件
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//gcc
//

#include <errno.h>
#include <string.h>
//
//int main()
//{
//	//printf("hehe\n");
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//写文件
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//读文件
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		printf("%c ", ch);
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//


//写一行

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputs("hello world\n", pf);
//	fputs("hehe\n", pf);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//读文件-读一行
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	char buf[1000] = {0};
//	//读文件
//	fgets(buf, 3, pf);
//	printf("%s", buf);
//
//	fgets(buf, 3, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//
//int main()
//{
//	//实现一个代码将data.txt 拷贝一份 生成data2.txt
//	FILE* pr = fopen("data.txt", "r");
//	if (pr == NULL)
//	{
//		printf("open for reading: %s\n", strerror(errno));
//		return 0;
//	}
//
//	FILE* pw = fopen("data2.txt", "w");
//	if (pw == NULL)
//	{
//		printf("open for writting: %s\n", strerror(errno));
//		fclose(pr);
//		pr = NULL;
//		return 0;
//	}
//	//拷贝文件
//	int ch = 0;
//	while ((ch = fgetc(pr)) != EOF)
//	{
//		fputc(ch, pw);
//	}
//
//	fclose(pr);
//	pr = NULL;
//	fclose(pw);
//	pw = NULL;
//
//	return 0;
//}
//


struct Stu
{
	char name[20];
	int age;
	double d;
};

//
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读格式化的数据
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//
//	printf("%s %d %lf\n", s.name, s.age, s.d);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	struct Stu s = { "张三", 20, 95.5 };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写格式化的数据
//	fprintf(pf, "%s %d %lf", s.name, s.age, s.d);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//二进制的写
//int main()
//{
//	struct Stu s[2] = { {"张三", 20, 95.5} , {"lisi", 16, 66.5}};
//
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//按照二进制的方式写文件
//	fwrite(s, sizeof(struct Stu), 2, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//二进制的读
//
//int main()
//{
//	struct Stu s[2] = {0};
//
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//按照二进制的方式读文件
//	fread(s, sizeof(struct Stu), 2, pf);
//
//	printf("%s %d %lf\n", s[0].name, s[0].age, s[0].d);
//	printf("%s %d %lf\n", s[1].name, s[1].age, s[1].d);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




int main()
{
	struct Stu s = { "张三", 20, 95.5 };
	struct Stu tmp = { 0 };

	char  buf[100] = { 0 };
	sprintf(buf, "%s %d %lf", s.name, s.age, s.d);//
	printf("%s\n", buf);

	sscanf(buf, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.d));
	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.d);

	return 0;
}