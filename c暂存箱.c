//#include<stdio.h>
//int main()
//{
//	printf("�������");
//
//
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	double a, b, c, d;
//
//	a = 63.56;
//
//	b = 54.36;
//
//	c = 64.21;
//
//	d = a * b * c;
//
//	printf("%f\n", d);
//
//	return 0;
//
//}





//#include<stdio.h>
//int main()
//{	
//	int a=0;
//
//	int b=0;
//
//	int c=0;
//
//	scanf_s("%d,%d", &a,&b);
//
//	
//
//	printf("%d,%d",a,b);
//
//	c = a - b;
//
//	printf("%d", c);
//
//	return 0;
//
//
//}





//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//
//}





//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//
//	char arr2[] = { 'a','b','c' };
//
//	printf("%d\n", strlen(arr1));
//
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	printf("\a\a\a");
//
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int coding= 0;
//
//	printf("�Ƿ�Ŭ��ѧϰ?��ѡ1 or 0��:>");
//
//	scanf_s("%d", & coding);
//
//	if (coding == 1)
//	{
//	printf("��֣��������Ǯ\n");
//	}
//	else
//	{
//		printf("�������ؼ��ֺ���\n");
//	}
//
//	return 0;
//}





 
//	int a = 0;
//	while (a < 10000)
//	{
//		printf("Ŭ��ѧϰ��������%d\n", a);
//		a++;
//	}
//	if (a== 10000)
//	{
//		printf("˳�������\n");
//
//	}
//
//	return 0;
//}





//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(arr));
//
//	printf("%d\n", sizeof(arr[0]));
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	printf("%d\n", sz);
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int a, b, c, d;
//
//	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
//
//	if (a > b && a > c && a > d)
//
//	printf("%d", a);
//
//	if (b > a && b > c && b > d)
//
//	printf("%d", b);

	//if (c > a && c > b && c > d)

	//printf("%d", c);

	//if (d > a && d > b && d > c)

	//	printf("%d", d);

	//return 0;
//}




//
//#include<stdio.h>
//int main()
//{
//	int re;
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		re = scanf_s("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (arr[i] > max) {
//			max = arr[i];
//		}
//
//	}
//	printf("\n����ֵ=%d\n", max);
//
//
//	return 0;
//}



//
//#include<stdio.h>
//int main()
//{
//	printf("-------------------\n");
//	printf("|  |  |  |  |  |  |\n");
//	printf("|��|��|��|��|Χ|��|\n");
//	printf("|  |  |  |  |  |  |\n");
//	printf("|��|��|��|��|κ|��|\n");
//	printf("|  |  |  |  |  |  |\n");
//	printf("|��|��|��|ɱ|��|��|\n");
//	printf("|  |  |  |  |  |  |\n");
//	printf("|��|��|��|��|��|��|\n");
//	printf("|  |  |  |  |  |  |\n");
//	printf("-------------------\n");
//	return 0;
//}
//






//#include<stdio.h>
//void joly(void);
//void deny(void);
//
//int main(void)
//{
//	joly();
//	joly();
//	joly();
//	deny();
//
//
//	return 0;
//}
//void joly(void)
//{
//
//	printf("Hello world!\n");
//
//}
//void deny(void)
//{
//
//	printf("��ã�����");
//}