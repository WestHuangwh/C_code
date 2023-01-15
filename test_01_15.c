#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
	int n = 0;
	int input = 0;
	int num = 0;
	scanf("%d", &n);

	if (n >= 0 && n <= 40)
	{
		input = 1;
	}
	if (input)
	{
		if (n > 0 && n <= 10)
		{
			return 1;
		}
		else if (n >= 11 && n <= 20)
		{
			return 2;
		}
		else if(n>=21&&n<=40)
		{
			return 3;
		}
		switch (input)
		{
		case 1:
			num = 6 * n;
			break;
		case 2:
			num = 6 * n + (n - 10) * 2;
			break;
		case 3:
			num = (6 * n )+ (10 * 2)+(n-20);
			break;
		}
		printf("%d", num);
	}
	return 0;
}