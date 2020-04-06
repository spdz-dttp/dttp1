#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//strcpy -- string copy -字符串拷贝
//int main()
//{
//	char arr1[20] = "########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset - 内存设置
//memory - 内存 set -设置

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//int get_max(int x, int y)
//{
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	scanf("%d%d", &a, &b);
//	max = get_max(a,b);
//	//max = get_max(a, get_max(30, 5));
//	printf("max= %d\n", max);
//	return 0;
//}


//void Swap(int* pa, int* pb)
//{
//	int t = 0;
//	t = *pa;
//	*pa = *pb;
//	*pb = t;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//#include<math.h>
////int is_prime(int n)
////{
////	int t = 0;
////	for (t = 2; t < n; t++)
////	{
////		if (n%t == 0)
////		{
////			return 0;
////		}
////	}
////		return 1;
////}
//
//int is_prime(int n)
//{
//	int t = 0;
//	if (n % 2 == 0)
//		return 0;
//	for (t = 3; t <= sqrt(n); t += 2)
//	{
//		if (n%t == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//
//	//printf("请输入一个数：> ");
//	//scanf("%d", &i);
//	//if (is_prime(i) == 1)
//	//{
//	//	printf("是素数\n");
//	//}
//	//if (is_prime(i) == 0)
//	//{
//	//	printf("不是素数\n");
//	//}
//
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


//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	return (n % 4 == 0 && n % 100 != 0 || n % 400 == 0);
//
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}


//int binary_search(int arr[],int k,int right)
//{
//	int left = 0;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int k = 0;
//	int j = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	printf("请输入你要查找的数：>");
//	scanf("%d",&k);
//	//数组传参的时候，传过去一个数组名，本质上传过去的是数组的首元素地址  &arr[0]
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了,下标为：%d\n",ret);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//	//1
//	int len = strlen("bit");
//	printf("len=%d\n", len);
//	//2
//	printf("len=%d\n", strlen("bit"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}


//int main()
//{
//	printf("%d", 43);
//	return 0;
//}



#include"Add.h"
#include"Sub.h"
int main()
{
	int a = 10;
	int b = 20;

	//函数调用
	int c = Sub(a, b);
	int sum = Add(a, b);
	printf("c=%d\n", c);
	printf("sum=%d\n", sum);
	return 0;
}

