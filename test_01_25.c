#define _CRT_SECURE_NO_WARNINGS 1

//ָ�����͵�����
//1.ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//2.ָ�����;����ˣ�ָ����һ�������߶�Զ��������
//3.


////ָ��������顣
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
//	//�����p����һ��Ұָ��
//	int* p;//��һ���ֲ���ָ��������ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	*p = 20;//�Ƿ������ڴ���
//	//2.Խ�����
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
//	//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL
//	int* p = NULL;//ָ��ĳ�ʼ��
//	//��ȷ֪����ʼ����ֵ
//	int a = 0;
//	int* ptr = &a;
//
//	//C���Ա����������ݵ�Խ����Ϊ��
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
//	//ָ���ָ�������ǰ���ǣ�
//	//����ָ��ָ��ͬһ��ռ�
//	printf("%d\n", &arr[9]-&arr[0]);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)//�ü������ķ��������ַ����ĳ���
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
//	//strlen(); - ���ַ����ĳ���
//	int len = my_strlen("abc");//����ȥ�����ַ�������Ԫ�صĵ�ַ
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int my_strlen(char* str)//��ָ���ָ��ķ��������ַ����ĳ���
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
//	//strlen(); - ���ַ����ĳ���
//	int len = my_strlen("abc");//����ȥ�����ַ�������Ԫ�صĵ�ַ
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<stdio.h>//ָ���������
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
//	int* pa = &a;//pa��ָ�������һ��ָ��
//	//ppa��һ������ָ�����
//	int** ppa = &pa;//paҲ��һ��������&paȡ��pa���ڴ�����ʼ��ַ
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
//	//��Ա����
//	struct B sb;
//	char name[20];//����
//	int age;//����
//	char id[20];
//}s1,s2;//s1��s2Ҳ�ǽṹ�����
////s1,s2��ȫ�ֱ���
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'H',20,3.14},"����",30,"w12345678" };//����
//	//.  ->
//	//printf("%c\n", s.sb.a);
//	//printf("%s\n", s.id);
//	struct Stu* pa = &s;
//	printf("%c\n", (*pa).sb.a);
//	//ʹ�ýṹ��ָ�����ָ�����ĳ�Ա
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
//void print1(struct Stu t)//��ֵ����
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.a, t.sb.b, t.sb.c, t.name, t.age, t.id);
//}
//void print2(struct Stu* pa)//��ַ����
//{
//	printf("%c %d %lf %s %d %s\n", pa->sb.a, pa->sb.b, pa->sb.c, pa->name, pa->age, pa->id);
//}
//int main()
//{
//	//s�Ǿֲ�����
//	struct Stu s = { {'H',20,3.14},"����",30,"w12345678" };//����
//	//дһ��������ӡs������
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



//��������ʽ����
//#include<stdio.h>
//void test2()
//{
//	printf("��ð�\n");
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




////����n�Ľ׳˺�1��+2��+3��+...+n!�ĺ�
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



////ģ��ʵ��strcpy��1��
////strcpy - �ַ�������
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
//	my_strcpy(arr1, arr2);//���ݵ����ַ������׵�ַ����ߵ���Ŀ��ռ����ʼ��ַ���ұ���Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}




////ģ��ʵ��strcpy��2��
////strcpy - �ַ�������
//#include<stdio.h>
//#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//Ϊ�˰�����\0��������ȥ
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//���ݵ����ַ������׵�ַ����ߵ���Ŀ��ռ����ʼ��ַ���ұ���Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}


////ģ��ʵ��strcpy��3��
////strcpy - �ַ�������
//#include<stdio.h>
//#include<string.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		//Hello�Ŀ���
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//���ݵ����ַ������׵�ַ����ߵ���Ŀ��ռ����ʼ��ַ���ұ���Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	return 0;
//}


////ģ��ʵ��strcpy��3��,�������Ż�
////strcpy - �ַ�������
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)//const�����ܸı�
//{
//	assert(dest != NULL);//����
//	assert(src!=NULL);//����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		//Hello�Ŀ���
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[20] = "Hello";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);//���ݵ����ַ������׵�ַ����ߵ���Ŀ��ռ����ʼ��ַ���ұ���Դ�ռ����ʼ��ַ
//	printf("%s\n", my_strcpy(arr1, arr2));//��ʽ���ʣ����Һ������ز���Ϊchar*���͡�
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
//	//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ����Ǳ����ϻ��Ǳ���
//	//
//	const int num = 10;
//	
//
//	//const����ָ�������ʱ��
//	//const�������*����ߣ����ε���*p��ʾָ��ָ��������ǲ���ͨ��ָ�����ı��
//	//		����ָ����������ǿ����޸ĵ�
//	const int* p  = &num;
//	*p = 20;
//	int** pa = &p;
//	printf("%d\n", num);
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)//�ü������ķ��������ַ����ĳ���
//{
//	assert(str != NULL);//����
//	int count = 0;
//	while (*str++)//���strָ��\0��ʱ��whileѭ��ֹͣ����Ϊ\0�İ�˹��ֵΪ��
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	//strlen(); - ���ַ����ĳ���
//	int len = my_strlen("abc");//����ȥ�����ַ�������Ԫ�صĵ�ַ
//	printf("�ַ����ĳ���Ϊ:>%d\n", len);
//
//	return 0;
//}



////��������ʱ�����������������������ݡ�
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;//���a^b�൱�����룬�ٺ�b���͵���a��ֵ
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d,b = %d", a, b);
//	return 0;
//}


////����С������
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



////�����ַ�������һ�仰�ĵ��ʽ��е��ã���㲻���á�
////���� l like beijing.�����������Ϊ��beijing.like l
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
//	gets(arr);//gets��Ϊ������һ�������ո���ַ�����������scanf��������Ϊscanf���������ո��ֹͣ��
//	int len = strlen(arr);
//	rever(arr, arr + len - 1);
//	char* start = arr;
//	//�õ���������ת�����Ȱ��ַ�����β���ã��ٵ��������ٽ���һ�ε���
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')//�ַ������пո���ַ���β����\0
//		{
//			end++;
//		}
//
//		rever(start, end - 1);
//		if (*end == ' ')
//		{
//			start = end+1;//end+1��Ϊ�������ո�
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