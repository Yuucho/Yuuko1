#define _CRT_SECURE_NO_WARNINGS 1
//��n�Ľ׳�
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}