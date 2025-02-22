#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int r = Max(a, b);//求两个整数的较大值
//	printf("%d\n", r);
//	return 0;
//}


//int Max(int x, int y )
//{
//	if (x < y)
//		return 1;
//	if (x = y)
//		return 0;
//	else
//		return -1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	int r = Max(a, b);
//	printf("%d", r);
//	return 0;
//}我自己打的代码


//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	if (x < 0)
//		y = 1;
//	else if (x == 0)
//		y = 0;
//	else
//		y = -1;
//	printf("%d\n", y);
//	return 0;
//}//老师写的


//三目运算符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//		printf("%d\n", r);
//	return 0;
//}
//exp1 ? exp2 : exp3
//如果1为真，则输出2；如果1为假，则输出3

//逗号表达式的特点：从左向右依次计算，整个表达式的结果是最后一个式子的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	arr[3] = 20;//下标引用操作符，arr和3就是[]的操作数
//	return 0;
//}

//Add(2,3)中()是函数调用操作符，Add，2，3，都是操作数


