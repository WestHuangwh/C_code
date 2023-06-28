#define _CRT_SECURE_NO_WARNINGS 1
//水仙花数
#include <stdio.h>

int main()
{
    int i, j, k, n;
    for (i = 100; i < 1000; i++)
    {
        j = i % 10;
        k = i / 10 % 10;
        n = i / 100;
        if (j * j * j + k * k * k + n * n * n == i)
            printf("%5d\n", i);
    }
    return 0;
}




//冒泡排序
#include<stdio.h>

int main()
{
	int n[10] = { 25,35,68,79,21,13,98,7,16,62 };//定义一个大小为10的数组
	int i, j, temp;
	for (i = 1; i <= 9; i++)//外层循环是比较的轮数，数组内有10个数，那么就应该比较10-1=9轮
	{
		for (j = 0; j <= 9 - i; j++)//内层循环比较的是当前一轮的比较次数，例如：第一轮比较9-1=8次，第二轮比较9-2=7次
		{
			if (n[j] > n[j + 1])//相邻两个数如果逆序，则交换位置
			{
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	printf("排序过后的数顺序:\n");
	for (i = 0; i < 10; i++)
		printf("%-4d", n[i]);
	printf("\n");
	return 0;
}




//输出三个数中的最大值
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入三个整数:\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a < b)
	{
		a = b;
	}
	if (a < c)
	{
		a = c;
	}
	printf("%d ", a);
	return 0;
}





//回文数的判断
#include <stdio.h>
void main() 
{
    int num, s, y = 0;
    printf("Please input numbers: ");
    scanf("%d", &num);
    s = num;
    while (s > 0) 
    {
        y = y * 10 + s % 10;
        s = s / 10;
    }
    if (y == num) 
    {
        printf("%d是一个回文数!\n", num);
    }
    else
    {
        printf("%d不是一个回文数!\n", num);
    }
}




//输入2个整数，求两数的平方和并输出
#include<stdio.h>

int main()
{
	int a, b;
	printf("请输入两个整数：\n");
	scanf("%d %d", &a, &b);
	printf("%d", a * a + b * b);
	return 0;
}




//输入一个圆半经(n，当r>=0时，计算并输出圆的面积和周长，否则，输出提示信息
#include <stdio.h>
#define Pi 3.14 // 定义π

int main() 
{
    float r;// 半径
    float area, perimeter; // 面积和周长

    printf("请输入圆半径: ");
    scanf("%f", &r);

    if (r >= 0) 
    {
        area = Pi * r * r;
        perimeter = 2 * Pi * r;

        printf("圆的面积为: %.2f\n", area);
        printf("圆的周长为: %.2f\n", perimeter);
    }
    else 
    {
        printf("输入半径必须大于等于0\n");
    }
    return 0;
}





//编写一个程序，从4个整数中找出最小的数，并显示此数
#include <stdio.h>

int main() 
{
    int a, b, c, d;
    int min; // 最小值

    printf("请输入四个整数: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min = a; // 假设a是最小的

    if (b < min)
    {
        min = b;
    }

    if (c < min) 
    {
        min = c;
    }

    if (d < min)
    {
        min = d;
    }

    printf("最小值为: %d\n", min);
    return 0;
}






//有一函数当X<0时y=1,当X>0时，y-3,当X-0时y=5,编程，从键盘输入一个X值
#include <stdio.h>

int main() 
{
    int x;
    int y;

    printf("请输入x值: ");
    scanf("%d", &x);

    if (x < 0)
    {
        y = 1;
    }
    else if (x > 0) 
    {
        y = 3;
    }
    else
    {
        y = 5;
    }

    printf("对应的y值为: %d\n", y);
    return 0;
}





//编写程序，求S=1/(1*2)+1/(2*3)+1/(3*4)+.!...... 前50项之和。
#include <stdio.h>

int main()
{
    int i;
    double s = 0; // 存储和

    for (i = 1; i <= 50; i++) 
    {
        s += 1.0 / (i * (i + 1));
    }

    printf("前50项之和为: %.6f\n", s);
    return 0;
}





//输入两个数组(数组元素个数自定)，输出在两个数组中都出现的元素
#include <stdio.h>

int main() 
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 4, 5, 6, 7, 8, 9 };
    int len1 = sizeof(arr1) / sizeof(arr1[0]); // 获取数组1的长度
    int len2 = sizeof(arr2) / sizeof(arr2[0]); // 获取数组2的长度
    int i, j;

    printf("两个数组中都出现的元素有：\n");
    for (i = 0; i < len1; i++) 
    {
        for (j = 0; j < len2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                printf("%d ", arr1[i]); // 输出出现的元素
                break; // 退出内循环，继续下一个元素的查找
            }
        }
    }

    printf("\n");
    return 0;
}






//给定年份year.判别该年份是否闺年(定义一个宏以判别该年份是否闺年)
#include <stdio.h>

#define IS_LEAP_YEAR(year) ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

int main()
{
    int year;

    printf("请输入一个年份: ");
    scanf("%d", &year);

    if (IS_LEAP_YEAR(year))
    {
        printf("%d年是闰年\n", year);
    }
    else
    {
        printf("%d年不是闰年\n", year);
    }

    return 0;
}





//编写函数，返回在一个整数数组中出现次数最多的数及其出现次数。
#include <stdio.h>
void findMostFrequent(int arr[], int len, int* pNum, int* pCount) 
{
    int i, j;
    int maxCount = 0, num = 0;

    for (i = 0; i < len; i++) 
    {
        int count = 0;
        for (j = 0; j < len; j++) 
        {
            if (arr[j] == arr[i]) 
            {
                count++;
            }
        }
        if (count > maxCount) 
        {
            maxCount = count;
            num = arr[i];
        }
    }

    *pNum = num;
    *pCount = maxCount;
}

int main() 
{
    int arr[] = { 1, 2, 3, 2, 3, 2, 3, 1, 3, 5, 4, 1, 4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int num, count;

    findMostFrequent(arr, len, &num, &count);
    printf("出现次数最多的数是%d, 出现了%d次\n", num, count);
    return 0;
}