#define _CRT_SECURE_NO_WARNINGS 1

//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了：指针走一步，能走多远（步长）
//3.


////指针遍历数组。
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//这里的p就是一个野指针
//	int* p;//是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	*p = 20;//非法访问内存了
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int  i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;//指针的初始化
//	//明确知道初始化的值
//	int a = 0;
//	int* ptr = &a;
//
//	//C语言本身不会检查数据的越界行为的
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pand = arr+9;
//	while (p <= pand)
//	{
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针和指针相减的前提是：
//	//两个指针指向同一块空间
//	printf("%d\n", &arr[9]-&arr[0]);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)//用计数器的方法来求字符串的长度
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen(); - 求字符串的长度
//	int len = my_strlen("abc");//传过去的是字符串的首元素的地址
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//用指针减指针的方法来求字符串的长度
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//
//	return str - start;
//}
//int main()
//{
//	//strlen(); - 求字符串的长度
//	int len = my_strlen("abc");//传过去的是字符串的首元素的地址
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>//指针遍历数组
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针
//	//ppa是一个二级指针变量
//	int** ppa = &pa;//pa也是一个变量，&pa取出pa在内存中起始地址
//	printf("%d\n", **ppa);
//	return 0;
//}


//#include<stdio.h>
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];
//}s1,s2;//s1和s2也是结构体变量
////s1,s2是全局变量
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'H',20,3.14},"张三",30,"w12345678" };//对象
//	//.  ->
//	//printf("%c\n", s.sb.a);
//	//printf("%s\n", s.id);
//	struct Stu* pa = &s;
//	printf("%c\n", (*pa).sb.a);
//	//使用结构体指针访问指向对象的成员
//	printf("%s\n", pa->name);
//
//	return 0;
//}



//#include<stdio.h>
//struct B
//{
//	char a;
//	int b;
//	double c;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)//传值调用
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.a, t.sb.b, t.sb.c, t.name, t.age, t.id);
//}
//void print2(struct Stu* pa)//传址调用
//{
//	printf("%c %d %lf %s %d %s\n", pa->sb.a, pa->sb.b, pa->sb.c, pa->name, pa->age, pa->id);
//}
//int main()
//{
//	//s是局部变量
//	struct Stu s = { {'H',20,3.14},"张三",30,"w12345678" };//对象
//	//写一个函数打印s的内容
//	print1(s);
//	print2(&s);
//
//	return 0;
//}



//#include<stdio.h>
//void test()
//{
//	int a = 0;
//	int b = 0;
//	int c = a + b;
//
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//
//	}	
//	for (int i = 0; i < sz; i++)
//	{
//		test();
//		arr[i] = i + 1;
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}



//函数的链式访问
//#include<stdio.h>
//void test2()
//{
//	printf("你好啊\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}




////计算n的阶乘和1！+2！+3！+...+n!的和
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int j = 0;
//	int ret = 1;
//	int i = 1;
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d\n", ret);
//	printf("%d\n", sum);
//	return 0;
//}



////模拟实现strcpy（1）
////strcpy - 字符串拷贝
//#include<stdio.h>
//#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	int sz = strlen(dest);
//	int sz1 = strlen(src);
//	char* pc = dest;
//	char* pc2 = src;
//	for (int i = 0; i < sz; i++)
//	{
//		*(pc + i) = src[i];
//	}
//
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//传递的是字符串的首地址，左边的是目标空间的起始地址，右边是源空间的起始地址
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}




////模拟实现strcpy（2）
////strcpy - 字符串拷贝
//#include<stdio.h>
//#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//为了把最后的\0给拷贝过去
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//传递的是字符串的首地址，左边的是目标空间的起始地址，右边是源空间的起始地址
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}


////模拟实现strcpy（3）
////strcpy - 字符串拷贝
//#include<stdio.h>
//#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		//Hello的拷贝
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//传递的是字符串的首地址，左边的是目标空间的起始地址，右边是源空间的起始地址
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}


////模拟实现strcpy（3）,进行了优化
////strcpy - 字符串拷贝
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)//const对象不能改变
//{
//	assert(dest != NULL);//断言
//	assert(src!=NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		//Hello的拷贝
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//传递的是字符串的首地址，左边的是目标空间的起始地址，右边是源空间的起始地址
//	printf("%s\n", my_strcpy(arr1, arr2));//链式访问，并且函数返回参数为char*类型。
//	//printf("%s\n", arr2);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	/*int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);*/
//	//
//	//const 修饰变量，这个变量就被称为常变量，不能被修改，但是本质上还是变量
//	//
//	const int num = 10;
//	
//
//	//const修饰指针变量的时候
//	//const如果放在*的左边，修饰的是*p表示指针指向的内容是不能通过指针来改变的
//	//		但是指针变量本身是可以修改的
//	const int* p  = &num;
//	*p = 20;
//	int** pa = &p;
//	printf("%d\n", num);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)//用计数器的方法来求字符串的长度
//{
//	assert(str != NULL);//断言
//	int count = 0;
//	while (*str++)//如果str指向\0的时候，while循环停止，因为\0的阿斯玛值为零
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen(); - 求字符串的长度
//	int len = my_strlen("abc");//传过去的是字符串的首元素的地址
//	printf("字符串的长度为:>%d\n", len);
//
//	return 0;
//}



////不创建临时变量，交换两个整数的内容。
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;//异或，a^b相当于密码，再和b异或就等于a的值
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}


////求最小公倍数
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = a > b ? a : b;
//	while (1)
//	{
//		if (max % a == 0 && max % b == 0)
//		{
//			printf("%d", max);
//			break;
//		}
//		max++;
//	}
//	return 0;
//}



////倒置字符串，将一句话的单词进行倒置，标点不倒置。
////比如 l like beijing.经过函数后变为：beijing.like l
//#include<stdio.h>
//#include<string.h>
//void rever(char*left, char*right)
//{
//	while (left < right)
//	{
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);//gets是为了输入一整串带空格的字符串，不能用scanf函数，因为scanf函数碰到空格会停止。
//	int len = strlen(arr);
//	rever(arr, arr + len - 1);
//	char* start = arr;
//	//用到了三步翻转法，先把字符串首尾倒置，再单个单词再进行一次倒置
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')//字符串中有空格和字符串尾部的\0
//		{
//			end++;
//		}
//
//		rever(start, end - 1);
//		if (*end == ' ')
//		{
//			start = end+1;//end+1是为了跳过空格
//		}
//		else
//		{
//			start = end;
//		}
//
//	}
//	printf("%s", arr);
//	
//	return 0;
//}