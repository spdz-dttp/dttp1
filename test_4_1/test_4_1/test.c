#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int year = 1000;
//	int count = 0;
//	while (year<=2000)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ",year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		year++;
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}


//求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	printf("请输入两个数：");
//	scanf("%d%d", &a, &b);
//	while (i=a%b)
//	{
//		a = b;
//		b = i;
//	}
//	printf("最大公约数： %d\n", b);
//	return 0;
//}

//求一到二百素数
//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j < i)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

#include<math.h>

//int main()
//{
//	int i = 100;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j <= sqrt(i))  //sqrt 开平方
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i++;
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 101;
//	int count = 0;
//	while (i <= 200)
//	{
//		int j = 2;
//		while (j <= sqrt(i))
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		i+=2;
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	ch = getchar();
//	putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//EOF 文件结束标志 end of file
//	while ((ch = getchar()) != EOF) // Ctrl+z结束
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char input[20] = { 0 };
//	int ch = 0;
//	printf("请输入你的密码：>");
//	scanf("%s", input);
//	printf("请确认密码（Y/N）:>");
//	//while (getchar() != '\n')
//	//{
//	//	getchar();
//	//}
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	//清空缓存区
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n ", count);
//	return 0;
//}


//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <10);
//	return 0;
//}

//求n的阶乘
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	while (i <= n)
//	{
//		ret *= i;
//		i++;
//	}
//	printf("%d \n",ret);
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d \n", ret);
//	return 0;
//}


////阶乘和


//int main()
//{
//	int n = 0;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		int i = 0;
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d \n", sum);
//	return 0;
//}


int main()
{
	int n = 0;
	int sum = 0;
	int i = 0;
	int ret = 1;
	for (n = 1; n <=10; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d \n", sum);
	return 0;
}