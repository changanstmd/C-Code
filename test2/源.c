#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//变量只能是字母、数字、下划线组成，不能有特殊字符，并且不能以数字开头



//1.字面常量
//int main()
//{
//	30;
//	3.14;
//	'w';//字符
//	"abc";//字符串
//	return 0;
//}

//int main()
//{
//	const int a = 10;//2.cosnt修饰的常变量，本质是变量，但是不能修改，具有常量的属性
//	return 0;
//}

//#define MAX 100//3.define定义的标识符常量
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	return 0;
//}

//4.枚举常量
//enum Color
//{
//	RED,
//	GREEN,
//	BLUE
//};//类似于集合
//
//int main()
//{
//	int num = 10;
//	enum Color c = RED; 
//	return 0;
//}


#include<string.h>
//int main()
//{
//	//char 字符类型
//	//char ch = 'w';
//	//c语言中没有字符串类型
//	//"adfg";
//	//*char arr[] = "abcdef";
//	char arr1[] = "abcdefg";
//	char arr2[] = { 'a','b','c','d','e','f','g','\0'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//int len = strlen("abc");//求字符串长度的函数，string length  需要添加头文件string.h
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//%d--打印整型
//%c--打印字符
//%s--打印字符串
//%f--打印float类型的数据
//%lf--打印double类型的数据



//循环语句和选择语句
//int main()
//{
//	int input = 0;
//	printf("要加入c语言学习吗？\n");
//	printf("你要认真学习吗？（1/0）");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("五朵和王宇豪");
//	}
//	else
//	{
//		printf("玩绝区零");
//	}
//	return 0;
//}
