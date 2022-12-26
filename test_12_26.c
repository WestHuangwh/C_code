#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
// int Max(int x,int y)
//{
//	int z = 0;
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0 ;
//	int b = 0 ;
//	scanf("%d %d", &a, &b);
//	printf("%d\n",Max(a,b));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	
//	m % 5 == 0 ? printf("YES") : printf("NO");//三目操作符。
//	return 0;
//}


#include<stdio.h>
int main()
{
	int m = 0;
	printf("请输入一个整数:");
	scanf("%d", &m);
	printf("能被5整除吗？");
	if (m % 5 == 0)
	{
		printf("YES\n");
	}

	else
	{
		printf("NO\n");
	}
	return 0;
}
