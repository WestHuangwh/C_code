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