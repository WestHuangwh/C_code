#define _CRT_SECURE_NO_WARNINGS 1


//轮转数组
#include<stdio.h>
void reverse(int* nums, int left, int right)
{
	while (left < right)
	{
		int tmp = *(nums + left);
		*(nums + left) = *(nums + right);
		*(nums + right) = tmp;
		++left;
		--right;
	}
}
int main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	k %= sz;//当轮转次数超过数组的元素个数的时候
	int left = sz - k;
	int right = sz - 1;
	reverse(arr, left, right);//后k个逆置
	reverse(arr, 0, left-1); //前n - k个逆置
	reverse(arr,0,right);//整体逆置
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	printf("Hello world");
	int input = 0;
	scanf("%d", &input);
	printf("%d\n", input);
	return 0;
}


