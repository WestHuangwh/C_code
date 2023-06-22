#define _CRT_SECURE_NO_WARNINGS 1


//��ת����
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
	k %= sz;//����ת�������������Ԫ�ظ�����ʱ��
	int left = sz - k;
	int right = sz - 1;
	reverse(arr, left, right);//��k������
	reverse(arr, 0, left-1); //ǰn - k������
	reverse(arr,0,right);//��������
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


