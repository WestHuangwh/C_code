#define _CRT_SECURE_NO_WARNINGS 1
//ˮ�ɻ���
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




//ð������
#include<stdio.h>

int main()
{
	int n[10] = { 25,35,68,79,21,13,98,7,16,62 };//����һ����СΪ10������
	int i, j, temp;
	for (i = 1; i <= 9; i++)//���ѭ���ǱȽϵ���������������10��������ô��Ӧ�ñȽ�10-1=9��
	{
		for (j = 0; j <= 9 - i; j++)//�ڲ�ѭ���Ƚϵ��ǵ�ǰһ�ֵıȽϴ��������磺��һ�ֱȽ�9-1=8�Σ��ڶ��ֱȽ�9-2=7��
		{
			if (n[j] > n[j + 1])//������������������򽻻�λ��
			{
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	printf("����������˳��:\n");
	for (i = 0; i < 10; i++)
		printf("%-4d", n[i]);
	printf("\n");
	return 0;
}




//����������е����ֵ
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("��������������:\n");
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





//���������ж�
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
        printf("%d��һ��������!\n", num);
    }
    else
    {
        printf("%d����һ��������!\n", num);
    }
}




//����2����������������ƽ���Ͳ����
#include<stdio.h>

int main()
{
	int a, b;
	printf("����������������\n");
	scanf("%d %d", &a, &b);
	printf("%d", a * a + b * b);
	return 0;
}




//����һ��Բ�뾭(n����r>=0ʱ�����㲢���Բ��������ܳ������������ʾ��Ϣ
#include <stdio.h>
#define Pi 3.14 // �����

int main() 
{
    float r;// �뾶
    float area, perimeter; // ������ܳ�

    printf("������Բ�뾶: ");
    scanf("%f", &r);

    if (r >= 0) 
    {
        area = Pi * r * r;
        perimeter = 2 * Pi * r;

        printf("Բ�����Ϊ: %.2f\n", area);
        printf("Բ���ܳ�Ϊ: %.2f\n", perimeter);
    }
    else 
    {
        printf("����뾶������ڵ���0\n");
    }
    return 0;
}





//��дһ�����򣬴�4���������ҳ���С����������ʾ����
#include <stdio.h>

int main() 
{
    int a, b, c, d;
    int min; // ��Сֵ

    printf("�������ĸ�����: \n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    min = a; // ����a����С��

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

    printf("��СֵΪ: %d\n", min);
    return 0;
}






//��һ������X<0ʱy=1,��X>0ʱ��y-3,��X-0ʱy=5,��̣��Ӽ�������һ��Xֵ
#include <stdio.h>

int main() 
{
    int x;
    int y;

    printf("������xֵ: ");
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

    printf("��Ӧ��yֵΪ: %d\n", y);
    return 0;
}





//��д������S=1/(1*2)+1/(2*3)+1/(3*4)+.!...... ǰ50��֮�͡�
#include <stdio.h>

int main()
{
    int i;
    double s = 0; // �洢��

    for (i = 1; i <= 50; i++) 
    {
        s += 1.0 / (i * (i + 1));
    }

    printf("ǰ50��֮��Ϊ: %.6f\n", s);
    return 0;
}





//������������(����Ԫ�ظ����Զ�)����������������ж����ֵ�Ԫ��
#include <stdio.h>

int main() 
{
    int arr1[] = { 1, 2, 3, 4, 5 };
    int arr2[] = { 4, 5, 6, 7, 8, 9 };
    int len1 = sizeof(arr1) / sizeof(arr1[0]); // ��ȡ����1�ĳ���
    int len2 = sizeof(arr2) / sizeof(arr2[0]); // ��ȡ����2�ĳ���
    int i, j;

    printf("���������ж����ֵ�Ԫ���У�\n");
    for (i = 0; i < len1; i++) 
    {
        for (j = 0; j < len2; j++) 
        {
            if (arr1[i] == arr2[j]) 
            {
                printf("%d ", arr1[i]); // ������ֵ�Ԫ��
                break; // �˳���ѭ����������һ��Ԫ�صĲ���
            }
        }
    }

    printf("\n");
    return 0;
}






//�������year.�б������Ƿ����(����һ�������б������Ƿ����)
#include <stdio.h>

#define IS_LEAP_YEAR(year) ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

int main()
{
    int year;

    printf("������һ�����: ");
    scanf("%d", &year);

    if (IS_LEAP_YEAR(year))
    {
        printf("%d��������\n", year);
    }
    else
    {
        printf("%d�겻������\n", year);
    }

    return 0;
}





//��д������������һ�����������г��ִ���������������ִ�����
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
    printf("���ִ�����������%d, ������%d��\n", num, count);
    return 0;
}