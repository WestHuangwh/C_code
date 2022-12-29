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
//	{
//		printf("获得一份好的工作");
//
//	}
// 
//	else
//	{
//		printf("回家种田去吧");
//
//	}
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
// int Add(int x,int y)
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



////数组-一组数的集合。
////数组是用下标来访问的。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char ah[5] = { 'a','b','c' };//不完全初始化，剩余的部分默认为0。
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	//float a =9 / 2;
//	float a = 9 % 2;
//	printf("%f", a);
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int a = 9;
//	int b = a << 1;//向左移动一个二进制位。由二进制的201变为二进制的2010，所以以十进制打印出来就变成了18
//	printf("%d", b);
//
//	return 0;
//



//#include<stdio.h>
//int main(void)
//{
//	int a = 2;
//	a += 5;
//	printf("%d", a);
//
//	return 0;
//}





//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a != 4)
//	{
//
//		printf("你很幸运，获得了本场比赛的大奖。");
//	}
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//sizeof是一个操作符。可以计算类型和变量的大小。
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof a);//因为sizeof不是一个函数，所以括号可以省略。
//
//	return 0;
//}




//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr[0]));//计算的是第一个数组的长度。
//	printf("%d\n", sizeof(arr));//计算的是整个数组的长度。
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算的是数组的个数。
//	printf("%d\n", sz);
//
//	return 0;
//}




//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int b = ++a;//++在前面的时候先++，后使用。
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++是先使用，再++
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	max = a > b ? a : b;
//
//	printf("%d\n", max);
//	return 0;
//}

//
//#include<stdio.h>
//void test()
//{
//	static int a = 1;//static修饰局部变量，改变了局部变量的生命周期。（其本质是改变了变量的存储类型。）
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
 
 
 
 
 
//#include<stdio.h>
//#define max 10000
//#define Add(x,y)  ((x)+(y))
//int main()
//{
//	printf("%d\n", max);
//	printf("%d\n", 4*Add(3, 4));
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int * pa = &a;//&a是为了取出a的地址。
//	//*说明pa是 指针变量
//	//int说明pa指向的对象是int类型的。
//	printf("%d\n", *pa);
//
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;//pc指向的对象是char类型的。而&ch是为了取出ch的地址。
//	printf("%c\n", *pc);
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{	
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*是解引用操作    *pa就是通过pa里边的地址找到a，也就是指针所指的对象
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'h';
//	printf("%c\n", ch);
//	return 0;
//}


// #include<stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}



//#include<stdio.h>
////创建一个学生类型。
//struct Stu
//{
//	char name[30];//学生名字
//	int age;//学生年龄
//	double score;//学生成绩
//};
////创建一个书的类型。
//struct Book
//{
//	char name[20];//书名
//	float price;//书的定价
//	char id[30];//书的编号
//
//};
//int main()
//{
//	struct Stu s = {"张三",20,85.5};//结构体的创建和初始化
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name ,(*ps).age ,(*ps).score );
//	printf("3:%s %d %lf\n",ps->name ,ps->age ,ps->score );//结构体指针->成员变量名
//
//
//
//	return 0;
//}

