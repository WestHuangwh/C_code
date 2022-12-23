#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int a = 80;
//	printf("比特\n");
//	printf("hehe\n");
//	printf("%d\n", 100);
//	printf("%d", sizeof(int));
//
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int age = 20;//定义年龄。
//	double weight = 65;//定义身高。
//
//	age = age + 1;
//	weight = weight + 5;
//
//	printf("%d\n", age);//整形用%d来表示。
//	printf("%lf\n", weight);//double要用%lf来表示。
//
//	return 0;
//}



//#include<stdio.h>
//int a = 100;//这是一个全局变量。
//int main(void)
//{
//	int a = 20;//这是一个局部变量。
//	printf("%d", a);
//	return 0;
//	//当局部变量与全局变量名字冲突时，局部变量优先。
//	//不建议把全局变量和局部变量的名字写成一样的。
//}




////写一个代码，求两数的和。
//#include<stdio.h>
//int main(void)
//{
//	int a = 56;
//	int b = 44;
//	int c = 0;
//
//	c = a + b;
//
//	printf("a,b两数之和为%d", c);
//
//
//	return 0;
//}





//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	int len = strlen("abc");
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d", len);
//
//	return 0;
//}
//



//#include<stdio.h>
//int main(void)
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a > 10)
//		printf("%s", "\a");
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\130');
//	return 0;
//}




//
//#include<stdio.h>
//int main(void)
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));//八进制里没有8，\ddd的形式是八进制的形式。长度应该为14。
//	return 0;
//}





//#include<stdio.h>
//int main(void)
//{
//	int input = 0;
//	printf("是否要努力学习编程技术(1/0)?>:");
//
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("获得一份好的工作");
//	else
//		printf("回家种田去吧");
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int line = 0;//给line这个变量赋值。
//	while (line < 30000)//循环。
//	{
//		printf("我要努力学习，找个好工作:%d\n",line);
//		line++;//自加
//	}
//	if (line == 30000)
//	{
//		printf("找到了一个好工作\n");
//		
//	}
//	return 0;
//}




//#include<stdio.h>
//Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d,%d", &num1, &num2);
//
//	//int sum = num1 + num2;
//
//	int sum = Add(num1, num2);
//
//	printf("%d", sum);
//
//	
//
//	return 0;
//}



//数组-一组数的集合。
//数组是用下标来访问的。
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char ah[5] = { 'a','b','c' };//不完全初始化，剩余的部分默认为0。
	int i = 0;
	for (i=0, i < 10, i++)



	return 0;
}