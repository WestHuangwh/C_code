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
//	m % 5 == 0 ? printf("YES") : printf("NO");//��Ŀ��������
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
//	printf("��������������:");
//	scanf("%d",&age);
//
//	if (age >= 18)
//	{
//		printf("���Ѿ�������");
//
//	}
//	if (age < 18)
//	{
//		printf("��δ����\n");
//		printf("����̸����\n");
//	}
//		
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("��������������:");
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("����δ����\n");
//	}
//	else if(age>=18 && age < 26)
//	{
//		printf("������������\n");
//	}
//	else if (age >= 26 && age < 60)
//	{
//		printf("������Ϊ����\n");
//	}
//	else if (age >= 60&&age<100)
//	{
//		printf("������Ϊ����\n");
//	}
//	else
//	{
//		printf("���������ϲ���");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
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
//			break;//��whileѭ���break�������õ���ֹѭ����
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
//			continue;//continue��Ϊ����������������ݡ�
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
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ������(Y/N):>");
//	getchar();//��������������'\n'���ת���ַ���
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("����ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��ʧ��");
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
//	int i = 1;//��ʼ��
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
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
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
//	for (i = 0; i < 3; i++)//i��ÿһ��ѭ����Ҫѭ������j
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("���\n");
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
//	} while (i <= 10);//���ٻ�ѭ��һ�Ρ�
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


//��1��+2��+....+10!�ĺ͡�
//#include<stdio.h>
//int Add(int n)//������һ����ײ�ĺ�����
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



////��1��+2��+....+10!�ĺ͡�
//#include<stdio.h>
//int Add(int n)//������һ����ײ�ĺ�����
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




////����1��+2��+3��+...+10���ĺ͡�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0; 
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret*= n;//ԭ��3��=2��*3
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}



#include<stdio.h>
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = 0;
	if (arr[mid] < k)
	{
		int mid = (right + left) / 2;

		left = mid + 1;
	}
	else if (arr[mid] > k)
	{
		right = mid - 1;
	}
	else if(arr[mid]=k)
	{
		printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
	}
	else
	{
		printf("û���ҵ�");
	}
	return 0;
}