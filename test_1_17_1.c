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

void rotate(char* arr, int size, int leftk)//leftk��ʾ��������
{
	int rightk = size - leftk;//����leftk���൱������n-leftk��
	if (rightk >= size)
	{
		rightk %= size;
	}
	Reverse(arr, size - rightk, size - 1);//ǰn-rightk������
	Reverse(arr, 0, size - rightk - 1);//��rightk������
	Reverse(arr, 0, size - 1);//��������
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