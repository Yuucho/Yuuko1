#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//旋转数组
void Reverse(int *nums, int left, int right)
{
	while (left < right)
	{
		int tmp = nums[left];
		nums[left] = nums[right];
		nums[right] = tmp;
		left++;
		right--;
	}
}
void rotate(int *nums, int numsSize, int k)
{
	if (k >= numsSize)
	{
		k %= numsSize;
	}
	Reverse(nums, numsSize - k, numsSize - 1);
	Reverse(nums, 0, numsSize - k - 1);
	Reverse(nums, 0, numsSize - 1);

}
//消失的数字
int missingnumber(int *nums,int numsSize)
{
	int x = 0;
	for (int i = 0; i < numsSize; i++)
	{
		x ^= nums[i];
	}
	for (int j = 0; j < numsSize + 1; j++)
	{
		x ^= j;
	}
	return x;
}
int main()
{
	int arr[7] = { 0,1,2,3,4,5,7 };
	int numsSize = sizeof(arr) / sizeof(arr[0]);
	int ret = missingnumber(arr,7);
	printf("%d\n", ret);
	rotate(arr, numsSize, 3);
	for (int i = 0; i < numsSize; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}