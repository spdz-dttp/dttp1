#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�����ж�����

#include<math.h>
//int is_prime(int n)
//{
//	int t = 0;
//	if (n % 2 == 0)
//	{
//		return 0;
//	}
//	for (t = 3; t <= sqrt(n); t += 2)
//	{
//		if (n%t == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


////�����ж�year�ǲ�������
//
//int is_leap_year(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	printf("������year��>");
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}


//������������

// void swap(int* i, int* j)
//{
//	int t = 0;
//	t = *i;
//	*i = *j;
//	*j = t;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//�˷��ھ���

void Ride_table(int n)
{
	int a = 0;
	for (a = 1; a <= n;a++)
	{
		int b = 0;
		for (b = 1; b <= a; b++)
		{
			printf("%2d*%-2d=%-3d ", b, a, a*b);
		}
		printf("\n");
	}
}

int main()
{
	int i = 0;
	printf("������һ������>");
	scanf("%d", &i);
	Ride_table(i);
	return 0;
}