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



//#include<stdio.h>
//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)//i的每一次循环就要循环三次j
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("你好\n");
//		}
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k == 0; i++, k++)
//		k++;
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);//至少会循环一次。
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int num = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n; i++)
//	{
//		num =num* i;
//
//	}
//	printf("%d\n", num);
//
//	return 0;
//}




//#include<stdio.h>
//int Add(int n)
//{
//	int i = 0;
//	int num = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num = num * i;
//	}
//	return num;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = Add(a);
//	printf("%d", b);
//
//	return 0;
//}


//求1！+2！+....+10!的和。
//#include<stdio.h>
//int Add(int n)//定义了一个求阶乘的函数。
//{
//	int i = 0;
//	int num = 1;
//	for (i = 1; i <= n; i++)
//	{
//		num = num * i;
//	}
//	return num;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int g = 0;
//	for (a = 1; a <=10; a++)
//	{
//		 b = Add(a);
//		g =g + b;
//
//	}
//	printf("%d", g);
//
//	return 0;
//}



////求1！+2！+....+10!的和。
//#include<stdio.h>
//int Add(int n)//定义了一个求阶乘的函数。
//{
//	int i = 0;
//	int num = 1;
//	int max = 0;
//	for (i = 1; i <= n; i++)
//	{
//		num = num * i;
//		max = max + num;
//	}
//	return max;
//
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = Add(a);
//	printf("%d", b);
//
//	return 0;
//}




////计算1！+2！+3！+...+10！的和。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0; 
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret*= n;//原理；3！=2！*3
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////二分查找一个数字。
//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//要找的那个数。
//	int sz = sizeof(arr) /sizeof(arr[0]);//求数组的个数。
//	int left = 0;//第一个数的下标。
//	int right = sz - 1;//最后一个数的下标
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//
//		if (arr[mid] < k)//如果要找的数在下标为mid的数的右边。
//		{
//
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)//如果要找的数在下标为mid的数的左边。
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d\n", mid);
//			break;//跳出循环
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("没有找到\n");
//
//	}
//	return 0;
//}




#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		printf("%s\n", arr2);
		Sleep(1000);//1000毫秒，睡眠一秒。
		system("cls");//清空屏幕。

		left++;
		right--;
	}
	printf("%s\n", arr2);//也可以把清空屏幕的指令放在打印语句的前面实现同样的效果。
	return 0;
}