#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数的递归:把大事化小
//接受一个整型值（无符号），按照顺序打印它的每一位
//例如：
//输入：1234  输出：1 2 3 4
//%d是打印有符号整数（会有正负数）
//%u是打印无符号整数
//void print(unsigned n)
//{
//	if (n > 9)
//		//如果没有if语句就会栈溢出，死递归
//		//函数的每一次调用都会在栈区上申请空间
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//递归的两个必要条件
//1.存在限制条件，当满足时，递归便不再继续
//2.每次递归之后越来越接近这个条件



//编写函数不允许创建临时变量，求字符串长度
//方法一
//int my_strlen(char str[])
//参数部分写成数组的形式
//int my_strlen(char* str)
////参数部分写成指针的形式
////数组名是首字符的地址，指针指向a
//{
//	int count = 0;//计数，临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//方法二
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



//递归与迭代
//n的阶乘（不考虑溢出）
//递归实现
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//迭代实现-非递归
//int fac(int n)
//{
//	int i = 0;
//	int let = 1;
//	for (i = 1;i <= n; i++)
//	{
//		let *= i;
//	}
//	return let;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int let = fac(n);
//	printf("%d", let);
//	return 0;
//}


//求第n个斐波那契数(不考虑溢出)
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55...
//递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
////循环
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}