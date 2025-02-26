#define _CRT_SECURE_NO_WARNINGS
//函数
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	//strcpy(目的地， 源头)
//	printf("%s\n", arr1);
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);
//	//memset(目的地，要改变的字节，字节数)
//	printf("%s\n", arr);
//	return 0;
//}



//自定义函数
//char *strcpy(char * destination, const char * source);
//char为返回值类型
//*strcpy为函数名
//括号内为参数
//写一个函数交换两个整型变量的内容
//x,y形式参数
//void Swap(int x, int y)
////void是函数不需要返回值，为无返回值
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//上述为传值调用，本题错误

//void Swap(int* px, int* py)
//{
//	int z = *px;//z = a
//	*px = *py;//a = b
//	*py = z;//z = a
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//交换
//	printf("交换前：a=%d b=%d\n", a, b);
//	//a，b是实参
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d", a, b);
//	return 0;
//}
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	a = 20;//直接改
//	*p = 30;//间接改
//}



//函数调用
//传值调用
//传址调用是把函数外部创建变量的地址传递给函数参数的一种调用函数的方式
//这种传参方式可以让函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量



//打印100~200中的素数并计算数量
//方法一
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
////sqrt是数学库函数，是开平方的意思，要加math.h的头文件
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//方法二
int is_prime(int n)
{
	int j = 0;
	for (j = 2;j <= sqrt(n);j++)
	{
		if (n % j == 0)
		{
			return 0;
		}	
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101;i <= 200;i+=2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}