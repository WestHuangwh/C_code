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
//	else if (age < 18)
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
//int Add(int n)//������һ����׳˵ĺ�����
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
//int Add(int n)//������һ����׳˵ĺ�����
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


////���ֲ���һ�����֡�
//#include<stdio.h>
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;//Ҫ�ҵ��Ǹ�����
//	int sz = sizeof(arr) /sizeof(arr[0]);//������ĸ�����
//	int left = 0;//��һ�������±ꡣ
//	int right = sz - 1;//���һ�������±�
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//
//		if (arr[mid] < k)//���Ҫ�ҵ������±�Ϊmid�������ұߡ�
//		{
//
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)//���Ҫ�ҵ������±�Ϊmid��������ߡ�
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
//			break;//����ѭ��
//		}
//		
//	}
//	if (left > right)
//	{
//		printf("û���ҵ�\n");
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
//		Sleep(1000);//1000���룬˯��һ�롣
//		system("cls");//�����Ļ��
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//Ҳ���԰������Ļ��ָ����ڴ�ӡ����ǰ��ʵ��ͬ����Ч����
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	//������ȷ��������"123456"
//	char password[20] = {0};
//	for (i = 0; i <= 3; i++)
//	{
//		printf("����������>:");
//		scanf("%s", password);//�ַ������ǵ�ַ������Ҫ��ȡ��ַ��&
//		if (strcmp(password ,"123456")==0)//strcmp���������ַ����ıȽϡ������ַ����ıȽϲ�����==ֱ�ӱȽ�,�ַ��������strcmp����0
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			int g = 0;
//			printf("�����������\n");
//			g = 3 - i;
//			printf("�㻹ʣ��%d��ȷ������Ļ���\n",g);
//		
//		}
//		
//	}
//	return 0;
//}




////��������Ϸ,��Χ��1-100֮��
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
//void game()//��������Ϸ��ʵ��
//{
//	//1.���������
//	int ret = rand()%100+1;//ģ100��������0-99��Ȼ��+1����1-100
//	//printf("%d\n", ret);
//
//	//2.������
//	int gues = 0;
//
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &gues);
//		if (gues < ret)
//		{
//			printf("��С��\n");
//		}
//		else if(gues>ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�����¶���");
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
//		menu();//��ӡ�˵�
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�����������������\n");
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
//	//���������
//	scanf("%d%d%d", &a, &b, &c);
//	//�Ƚ��������Ĵ�С,���Ӵ�С����
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




////�������������Լ����
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



////��շת������������������Լ����
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int max = 0;
//	while (t = m % n)//��t = m % n,t��ֵ���������ʱ��whileѭ��Ϊ��ȷ��
//	{
//		m = n;
//		n = max;
//		
//	}
//	printf("���Լ��Ϊ��%d", n);
//	return 0;
//}




////�ж�1000-2000֮�����������Щ��
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




////��ӡ100-200֮��������������ֽ���������ֻ�ܱ�1������������������
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
//	printf("\n�����ĸ���Ϊ��%d", count);
//
//	return 0;
//}


//60��ػ�����
#include<stdio.h>
#include<stdlib.h>//system�õ���ͷ�ļ�
#include<string.h>//strcmp�õ���ͷ�ļ�
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");//�ػ�������ػ�ʱ��Ϊ60�롣

again:
	printf("��ע����ĵ��Լ�����һ���Ӻ�ػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);//�ַ������¾��ǵ�ַ������Ҫ��ȡ��ַ��&

	if (strcmp(input, "������") == 0)//�����ַ����Ƚϲ����� == ������š�Ҫ��strcmp����������бȽ�
	{
		printf("���ĵ�����ȡ���ػ�\n");
		system("shutdown -a");
	}
	else
	{
		goto again;//goto��䷵��again;
	}

	return 0;
}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	strcpy(arr1, arr2);//���������arr2����ַ����û���arr1��
//	printf("%s", arr1);
//
//
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char arr[] = "hello,bit";
//	memset(arr, 'x', 5);//memset������arr������ַ���ǰ����ַ���Ϊx
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
////дһ����������������������ֵ��
//#include<stdio.h>
//void Add(int* pa, int* pb)//void��ʾ����û�з���ֵ��
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
//	printf("����ǰ��a = %d a = %d\n", a, b);
//
//	Add(&a, &b);
//
//	printf("������a = %d b = %d", a, b);
//
//	return 0;
//}