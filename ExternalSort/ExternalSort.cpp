#define _CRT_SECURE_NO_WARNINGS 1
#include "ExternalSort.h"

void _MergeSortFile(const char* file1, const char* file2, const char* mfile)
{
    FILE* fout1 = fopen(file1, "r");
    if (fout1 == NULL)
    {
        printf("打开文件失败\n");
        exit(-1);
    }

    FILE* fout2 = fopen(file2, "r");
    if (fout2 == NULL)
    {
        printf("打开文件失败\n");
        exit(-1);
    }

    FILE* fin = fopen(mfile, "w");
    if (fin == NULL)
    {
        printf("打开文件失败\n");
        exit(-1);
    }

    int num1, num2;
    int ret1 = fscanf(fout1, "%d\n", &num1);
    int ret2 = fscanf(fout2, "%d\n", &num2);
    //文件指针会自动++怎么办呢？
    /*while(fscanf(fout1,"%d\n", &num1) != EOF
       && fscanf(fout2,"%d\n", &num2) != EOF)*/
    while (ret1 != EOF && ret2 != EOF)//这里最后会吞掉最后一个数据
    {
        if (num1 < num2)
        {
            fprintf(fin, "%d\n", num1);
            ret1 = fscanf(fout1, "%d\n", &num1);//保证谁归并后谁的文件指针往后动
        }
        else
        {
            fprintf(fin, "%d\n", num2);
            ret2 = fscanf(fout2, "%d\n", &num2);//保证谁归并后谁的文件指针往后动
        }
    }

    //这里还是按之前的方式写就不会漏掉最后一个数据
    while (ret1 != EOF)
    {
        fprintf(fin, "%d\n", num1);
        ret1 = fscanf(fout1, "%d\n", &num1);
    }

    while (ret2 != EOF)
    {
        fprintf(fin, "%d\n", num2);
        ret2 = fscanf(fout2, "%d\n", &num2);
    }

    fclose(fout1);
    fclose(fout2);
    fclose(fin);

}

void MergeSortFile(const char* file)
{
    FILE* fout = fopen(file, "r");
    if (fout == NULL)
    {
        printf("打开文件失败\n");
        exit(-1);
    }

    // 分割成一段一段数据,内存排序后写到小文件
    int n = 10;//模拟:100个数据切成10份
    int a[10];//每个文件10个数据
    int i = 0;
    int num = 0;
    char subfile[20];
    int filei = 1;

    memset(a, 0, sizeof(int) * n);
    //从fout中一次读取10个数据
    while (fscanf(fout, "%d ", &num) != EOF)
    {
        //if(i < n) 这样写fscanf文件下标会自动走到第11个数据，导致每次读取会丢失一个数据
        if (i < n - 1)
        {
            a[i++] = num;
        }
        else
        {
            a[i] = num;//第10个数据在这里单独处理
            QuickSort(a, 0, n - 1);
            //在subfile中存储文件名,文件名为1,2,3...
            sprintf(subfile, "%d", filei++);
            FILE* fin = fopen(subfile, "w");//创建0号文件,再把排序好的第一份数据写入，不断迭代。
            if (fin == NULL)
            {
                printf("打开文件失败\n");
                exit(-1);
            }
            for (int i = 0; i < n; i++)
            {
                fprintf(fin, "%d\n", a[i]);//自动转字符串
            }
            fclose(fin);

            i = 0;
            memset(a, 0, sizeof(int) * n);
        }
    }
    // 利用互相归并到文件，实现整体有序
    char mfile[100] = "12";
    char file1[100] = "1";
    char file2[100] = "2";
    for (int i = 2; i <= n; ++i)
    {
        //读取file1和file2进行归并出mfile
        _MergeSortFile(file1, file2, mfile);

        strcpy(file1, mfile);
        sprintf(file2, "%d", i + 1);
        sprintf(mfile, "%s%d", mfile, i + 1);
    }

    fclose(fout);
}

int main()
{
    MergeSortFile("D:\\练习\\ExternalSort\\sub.txt");

    return 0;
}