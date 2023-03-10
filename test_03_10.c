#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
struct S
{
	int age;
	char name[20];
	double i;
}s1,s2;
int main(void)
{
	struct S s1 = { 20,"Àî»ª",24.4 };
	printf("%lf\n", s1.i);
	return 0;
}