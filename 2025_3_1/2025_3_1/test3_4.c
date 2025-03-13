#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//将三个整数从大到小输出
//void Swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	//普通换值
//	int temp = 0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	//函数换址
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//写一个代码，打印1~100间所有3的倍数
//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//给定两个数，求这两个数的最大公约数
//普通方法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d", m);
//	return 0;
//}


//辗转相除法
//核心原理：
//两个数的最大公约数等于其中较小的数字和二者之间余数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//求两个数的最小公倍数
//两个数相乘再除以他们的最小公约数



//编写程序数一下1~100的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}



//分数求和
//计算1/1 - 1/2 + 1/3 -...+1/99 - 1/100的值，打印结果
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//求十个整数中的最大值
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0;i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1;i <= 10;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}



//在屏幕上打印9*9乘法表
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		int j = 0;
//		for (j = 1;j < 1;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		//%2d打印两位整数，即使一位整数，也用空格填充，两个右对其，-2%d两位左对齐
//		printf("\n");
//	}
//	return 0;
//}0


//逗号表达式：从左往右计算各个表达式的值，规定最后一个表达式的值为整个逗号表达式的值
//函数：打印n*n乘法表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//把函数处理结果的两个数据返回给主调函数
//1.return无法传两个数据

//2.形参用数组
//void test(int arr[])//int* arr
////把首元素的地址传过去
//{
//	arr[0] = 3;//arr[0]--> *(arr+0)
//	arr[1] = 4;//arr[1]--> *(arr+1)
//	//首元素地址+1
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	return 0;
//}

//3.形参用两个指针
//void test(int* px, int* py)
//{
//	*px = 3;
//	*py = 4;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}

//4.形参用两个全局变量
//int a = 0;
//int b = 0;
//
//void test()
//{
//	a = 3;
//	b = 4;
//}
//
//int main()
//{
//	test();
//	printf("a=%d b=%d\n", a, b);
//}