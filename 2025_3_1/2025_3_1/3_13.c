#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组是一组相同类型元素的集合
//元素类型+数组名+常量表达式
//int main()
//{
//	int arr[10] = { 1, 2, 3 };
//	//不完全初始化，其余元素默认初始化为0
//	char ch1[10] = { 'a', 'b', 'c' };
//	//a b c 0 0 0 0 0 0 0
//	char ch2[10] = "abc";
//	//a b c \0 0 0 0 0 0 0
//	//[]————下标引用操作符
//	return 0;
//}
//数组在内存中是连续存放的


//二维数组的初始化
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4 };
//	int arr2[3][4] = { {1, 2},{4, 5} };
//	int arr3[][4] = { {2,3},{4,5} };
//	//二维数组如果有初始化，行可以省略，列不能省略
//}


//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,5,6,7 };
//	int i = 0;
//	for (i = 0;i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0;i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0;j < 4;j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//可以把二维数组理解为一维数组的数组


//数组越界
//数组下标<0或者>n - 1



//冒泡排序
//两个相邻的元素进行比较
//一趟冒泡排序让一个数据来到它最终应该出现的位置
//数组传参时，形参有两种写法
//1.数组
//2.指针
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr ,sz);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组名确实能表示首元素的地址
//但是有两个例外
//1.sizeof(数组名)，这里的数组名表示整个数组，计算整个数组的大小，单位是字节
//2.&数组名，这里数组名表示整个数组，取出的是整个数组的地址
//二维数组数组名的理解
//int main()
//{
//	int arr[3][4];
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	printf("%d", sizeof(arr[0]) / sizeof(arr[0][0]));
//	arr;
//	二维数组的数组名也表示首行一维数组的地址
//	return 0;
//}