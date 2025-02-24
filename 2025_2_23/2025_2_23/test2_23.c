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



////猜数字游戏的实现
////步骤：
////1.电脑产生一个随机数（1~100）
////2.猜数字
////3.猜大了，猜小了，直到猜对了结束
////int *p = NULL;NULL是空指针，相当于赋值为零
//void menu()
//{
//	printf("*************************\n");
//	printf("*********1. play ********\n");
//	printf("*********0. exit ********\n");
//	printf("*************************\n");
//}
//
////0~RAND_MAX（32767）0x7fff生成随机数的范围
//void game()
//{
//	int guess = 0;
//	//1.生成随机数
//	//任何数%100都是0~99--->1~100
//	int ret = rand()%100 + 1;
//	//头文件是stdlib.h
//	//生成随机数的函数
//	printf("%d\n", ret);
//	//2.猜数字
//	while(1)
//	{
//		printf("请猜数字：>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//不需要每次生成随机数的时候都调用它，只要在主函数里生成一次就行了
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}



//c语言提供了可以滥用的goto语句和标记跳转的符号
//无法跨函数跳转
//适用于多次嵌套循环

//电脑的关机程序
//电脑运行起来后一分钟内关机，如果输入“我是猪”就取消关机
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//debug是调试版本，release是发布版本