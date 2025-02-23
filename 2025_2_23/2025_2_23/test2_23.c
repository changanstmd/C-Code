#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//在一个有序数组中查找具体的某个数字
//二分查找
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//mid是要变的，放在外面赋值就死了
//		int mid = left + (right - left) / 2;
//		//防止数值溢出
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没找到");
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
#include<string.h>
#include<windows.h>//睡眠函数的头文件
#include<stdlib.h>//库函数的头文件
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
	//strlen求的是字符串长度，不包含\0，最末位元素下标本身就要减1
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
    //sizeof求的是空间的大小，包含、0，所以要再减1
	/*while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);*///睡眠函数，单位ms
		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//编写一个代码，模拟用户登录情景，并且只能登录三次
//（只允许输入三次密码，如果密码则提示登录成功，如果三次均输入错误，则推出程序）
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设密码是字符串：abcdef
//	for (i = 0;i < 3;i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//数组名本来就是地址，不需要取地址
//		if (strcmp(password, "abcdef") == 0)
//		//比较两个字符串是否相对，不能使用==，而要用一个库函数：strcmp
//        //如果返回值是0，表示两个字符串相等
//		//头文件是string.h
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//		return 0;
//	}
//}


//void fun(int a[])//本质上是个指针变量
//{
//	printf("%zu", sizeof(a));
//}
//int main()
//{
//	int a[10] = { 0 };//40
//	printf("%zu\n", sizeof(a));//4
//	printf("%zu", sizeof(a[1]));//x64是8，x86是4
//	fun(a);
//	//数组传参的时候是传递数组首元素的地址
//}


//猜数字游戏的实现
