#include <stdio.h>
void Reverse(char* arr, int left, int right)
{
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		++left;
		--right;
	}
}

void rotate(char* arr, int size, int leftk)//leftk表示左旋步数
{
	int rightk = size - leftk;//左旋leftk步相当于右旋n-leftk步
	if (rightk >= size)
	{
		rightk %= size;
	}
	Reverse(arr, size - rightk, size - 1);//前n-rightk个逆置
	Reverse(arr, 0, size - rightk - 1);//后rightk个逆置
	Reverse(arr, 0, size - 1);//整体逆置
}

void print(char* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
}
int main()
{
	char arr[4] = "ABCD";
	int size = sizeof(arr) / sizeof(arr[0]);
	print(arr, size);
	rotate(arr, size, 1);
	print(arr, size);
	rotate(arr, size, 1);
	print(arr, size);
	return 0;




}