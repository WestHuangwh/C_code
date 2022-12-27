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



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d, ", i);
//		}
//	}
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//在while循环里，break用于永久的终止循环。
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;//continue是为了跳过它后面的内容。
//
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{	
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	getchar();//清理缓存区，处理'\n'这个转义字符。
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("密码确认成功");
//	}
//	else
//	{
//		printf("密码确认失败");
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



#include<stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}