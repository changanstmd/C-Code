#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef unsigned int uint;//typedef类型重命名
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	return 0;
//}


//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//void test()//void是无返回值
//{
//	static int a = 1;//修饰局部变量，不销毁，生命周期变为和程序生命一样，存储位置从栈区到静态区
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//tsatic修饰全局变量,全局变量的外部链接属性变为内部链接属性，其他源文件就不能使用这个全局变量了

//函数具有外部链接属性，static修饰函数变为内部属性


//register--寄存器
//int main()
//{
//	register int num = 3;//建议3存放在寄存器里
//
//	return 0;
//}


//define定义标识符常量
//#define NUM 100

//define定义宏
//宏是有参数
//#define ADD(x,y) ((x)+(y))//x,y宏的参数无类型
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d", c);
//	return 0;
//}


