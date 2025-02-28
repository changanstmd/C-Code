#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//函数的声明和定义
//函数的声明
//int Add(int, int);
//x,y可加可不加
#include"sub.h"
//想在不同的文件里调用函数，只要把函数写在头文件里就行了

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//加法
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	int ret = Sub(a, b);
//	printf("%d", ret);
//	return 0;
//}

//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}

//#pragma commment(lib, "add.h")
//导入静态库的方法
//#pragma once
//防止头文件被重复包含