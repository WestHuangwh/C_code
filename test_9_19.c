#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int a = 80;
//	printf("����\n");
//	printf("hehe\n");
//	printf("%d\n", 100);
//	printf("%d", sizeof(int));
//
//	return 0;
//}



//#include<stdio.h>
//int main(void)
//{
//	int age = 20;//�������䡣
//	double weight = 65;//������ߡ�
//
//	age = age + 1;
//	weight = weight + 5;
//
//	printf("%d\n", age);//������%d����ʾ��
//	printf("%lf\n", weight);//doubleҪ��%lf����ʾ��
//
//	return 0;
//}



//#include<stdio.h>
//int a = 100;//����һ��ȫ�ֱ�����
//int main(void)
//{
//	int a = 20;//����һ���ֲ�������
//	printf("%d", a);
//	return 0;
//	//���ֲ�������ȫ�ֱ������ֳ�ͻʱ���ֲ��������ȡ�
//	//�������ȫ�ֱ����;ֲ�����������д��һ���ġ�
//}




////дһ�����룬�������ĺ͡�
//#include<stdio.h>
//int main(void)
//{
//	int a = 56;
//	int b = 44;
//	int c = 0;
//
//	c = a + b;
//
//	printf("a,b����֮��Ϊ%d", c);
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
//	printf("%d\n", strlen("c:\test\328\test.c"));//�˽�����û��8��\ddd����ʽ�ǰ˽��Ƶ���ʽ������Ӧ��Ϊ14��
//	return 0;
//}





//#include<stdio.h>
//int main(void)
//{
//	int input = 0;
//	printf("�Ƿ�ҪŬ��ѧϰ��̼���(1/0)?>:");
//
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("���һ�ݺõĹ���");
//
//	}
// 
//	else
//	{
//		printf("�ؼ�����ȥ��");
//
//	}
//
//	return 0;
//}





//#include<stdio.h>
//int main()
//{
//	int line = 0;//��line���������ֵ��
//	while (line < 30000)//ѭ����
//	{
//		printf("��ҪŬ��ѧϰ���Ҹ��ù���:%d\n",line);
//		line++;//�Լ�
//	}
//	if (line == 30000)
//	{
//		printf("�ҵ���һ���ù���\n");
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



////����-һ�����ļ��ϡ�
////���������±������ʵġ�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char ah[5] = { 'a','b','c' };//����ȫ��ʼ����ʣ��Ĳ���Ĭ��Ϊ0��
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
//	int b = a << 1;//�����ƶ�һ��������λ���ɶ����Ƶ�201��Ϊ�����Ƶ�2010��������ʮ���ƴ�ӡ�����ͱ����18
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
//		printf("������ˣ�����˱��������Ĵ󽱡�");
//	}
//	
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	//sizeof��һ�������������Լ������ͺͱ����Ĵ�С��
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof a);//��Ϊsizeof����һ���������������ſ���ʡ�ԡ�
//
//	return 0;
//}




//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr[0]));//������ǵ�һ������ĳ��ȡ�
//	printf("%d\n", sizeof(arr));//���������������ĳ��ȡ�
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����������ĸ�����
//	printf("%d\n", sz);
//
//	return 0;
//}




//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int b = ++a;//++��ǰ���ʱ����++����ʹ�á�
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
//	int b = a++;//����++����ʹ�ã���++
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
//	static int a = 1;//static���ξֲ��������ı��˾ֲ��������������ڡ����䱾���Ǹı��˱����Ĵ洢���͡���
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
//	int * pa = &a;//&a��Ϊ��ȡ��a�ĵ�ַ��
//	//*˵��pa�� ָ�����
//	//int˵��paָ��Ķ�����int���͵ġ�
//	printf("%d\n", *pa);
//
//	return 0;
//}


//
//#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char * pc = &ch;//pcָ��Ķ�����char���͵ġ���&ch��Ϊ��ȡ��ch�ĵ�ַ��
//	printf("%c\n", *pc);
//
//	return 0;
//}



//#include<stdio.h>
//int main()
//{	
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;//*�ǽ����ò���    *pa����ͨ��pa��ߵĵ�ַ�ҵ�a��Ҳ����ָ����ָ�Ķ���
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
////����һ��ѧ�����͡�
//struct Stu
//{
//	char name[30];//ѧ������
//	int age;//ѧ������
//	double score;//ѧ���ɼ�
//};
////����һ��������͡�
//struct Book
//{
//	char name[20];//����
//	float price;//��Ķ���
//	char id[30];//��ı��
//
//};
//int main()
//{
//	struct Stu s = {"����",20,85.5};//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name ,(*ps).age ,(*ps).score );
//	printf("3:%s %d %lf\n",ps->name ,ps->age ,ps->score );//�ṹ��ָ��->��Ա������
//
//
//
//	return 0;
//}

