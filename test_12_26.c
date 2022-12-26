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


//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//	{
//		printf("YES\n");
//	}
//
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("请输入您的年龄:");
//	scanf("%d",&age);
//
//	if (age >= 18)
//	{
//		printf("您已经成年了");
//
//	}
//	if (age < 18)
//	{
//		printf("还未成年\n");
//		printf("不能谈恋爱\n");
//	}
//		
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("请输入您的年龄:");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("您还未成年\n");
//	}
//	else if(age>=18 && age < 26)
//	{
//		printf("您现在是青年\n");
//	}
//	else if (age >= 26 && age < 60)
//	{
//		printf("您现在为中年\n");
//	}
//	else if (age >= 60&&age<100)
//	{
//		printf("您现在为老年\n");
//	}
//	else
//	{
//		printf("您现在是老不死");
//	}
//	return 0;
//}



#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i < 100; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d, ", i);
		}
	}
	
	return 0;
}