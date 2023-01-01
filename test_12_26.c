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
//	else if (age < 18)
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




//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//		Sleep(1000);//1000毫秒，睡眠一秒。
//		system("cls");//清空屏幕。
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//也可以把清空屏幕的指令放在打印语句的前面实现同样的效果。
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//假设正确的密码是"123456"
//	char password[20] = {0};
//	for (i = 0; i <= 3; i++)
//	{
//		printf("请输入密码>:");
//		scanf("%s", password);//字符串就是地址，不需要加取地址符&
//		if (strcmp(password ,"123456")==0)//strcmp函数用于字符串的比较。两个字符串的比较不能用==直接比较,字符串相等则strcmp返回0
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			int g = 0;
//			printf("密码输入错误\n");
//			g = 3 - i;
//			printf("你还剩下%d次确定密码的机会\n",g);
//		
//		}
//		
//	}
//	return 0;
//}




////猜数字游戏,范围在1-100之间
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*************************************\n");
//	printf("******     1.play     ***************\n");
//	printf("******     0.exit     ***************\n");
//	printf("*************************************\n");
//}
//void game()//猜数字游戏的实现
//{
//	//1.生成随机数
//	int ret = rand()%100+1;//模100的余数是0-99，然后+1就是1-100
//	//printf("%d\n", ret);
//
//	//2.猜数字
//	int gues = 0;
//
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &gues);
//		if (gues < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if(gues>ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜您，猜对了");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	 
//	do
//	{
//		menu();//打印菜单
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("输入错误，请重新输入\n");
//		}
//
//	} while (input);
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输出三个数
//	scanf("%d%d%d", &a, &b, &c);
//	//比较三个数的大小,并从大到小排列
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//
//	
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d", a, b, c);
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




////算两个数的最大公约数。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int* pa = &min;
//	for(c=*pa;c>1;c--)
//	{
//		if (a % c == 0 && b % c == 0)
//		{
//			printf("%d ", c);
//			break;
//		}
//	}
//	return 0;
//}



////用辗转相除法求两个数的最大公约数。
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int max = 0;
//	while (t = m % n)//当t = m % n,t的值不等于零的时候while循环为正确。
//	{
//		m = n;
//		n = max;
//		
//	}
//	printf("最大公约数为：%d", n);
//	return 0;
//}




////判断1000-2000之间的瑞年有哪些。
//#include<stdio.h>
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}




////打印100-200之间的素数。素数又叫质数，是只能被1和它本身整除的数。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int s = 0;
//	int count = 0;
//	for (s = 100; s <= 200; s++)
//	{
//		int j = 0;
//		for (j = 2; j <s; j++)
//		{
//			if (s % j == 0)
//			{
//				break;
//			}
//		}
//		if (s == j)
//		{
//			printf("%d ", s);
//			count++;
//		}
//	}
//	printf("\n质数的个数为：%d", count);
//
//	return 0;
//}


//60秒关机程序
#include<stdio.h>
#include<stdlib.h>//system用到的头文件
#include<string.h>//strcmp用到的头文件
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//关机的命令，关机时间为60秒。

again:
	printf("请注意你的电脑即将在一分钟后关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);//字符串本事就是地址，不需要用取地址符&

	if (strcmp(input, "我是猪") == 0)//两个字符串比较不能用 == 这个符号。要用strcmp这个函数进行比较
	{
		printf("您的电脑已取消关机\n");
		system("shutdown -a");
	}
	else
	{
		goto again;//goto语句返回again;
	}

	return 0;
}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	strcpy(arr1, arr2);//这个函数把arr2里的字符串置换到arr1里
//	printf("%s", arr1);
//
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello,bit";
//	memset(arr, 'x', 5);//memset函数把arr里面的字符串前五个字符改为x
//	printf("%s", arr);
//
//	return 0;
//}





//#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max = %d", max);
//
//
//	return 0;
//}



//
////写一个函数，交换两个变量的值。
//#include<stdio.h>
//void Add(int* pa, int* pb)//void表示函数没有返回值。
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a = %d a = %d\n", a, b);
//
//	Add(&a, &b);
//
//	printf("交换后：a = %d b = %d", a, b);
//
//	return 0;
//}