#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("No\n");
//	return 0;
//}
//判断一个数为奇数


//输出1~100之间的奇数
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}


//switch语句
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


//int main()
//{
//	int ch = getchar();//读取字符，erro或不是字符则返回值为EOF
//	printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//举个例子
//int main()
//{
//	char password[20] = { 0 };//假设密码是个字符串
//	printf("请输入密码：");
//	scanf("%s", password);//字符串就是地址，不用取地址
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码:(Y/N)");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	//只打印数字
//	return 0;
//}


//题目1
//转换ASCII码为对应字符并输出它
//int main()
//{
//	int arr[] = { 90,56,32,78,98,84,76,59,49 };
//	int i = 0;
//	int r = sizeof(arr) / sizeof(arr[0]);
//	while (i < r)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}


//题目2
//输入一个人的出生日期，将该生日中的年月日分别输出
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}


//题目3
//int main()
//{
//	int id = 0;
//	double c = 0.0;
//	double math = 0.0;
//	double eng = 0.0;
//	scanf("%d %lf %lf %lf", &id, &c, &math, &eng);
//	printf("the each subject sorce of no. %d is %.2lf ,%.2lf ,%.2lf ", id, c, math, eng);
//	return 0;
//}


//题目4
//int main()
//{
//	int n = printf("Hello,World!");
//	printf("\n%d\n", n);
//	return 0;
//}
//printf的返回值为int类型，表示打印成功的字符数


//题目5
//用c语言和c++打印hello world
//int main()
//{
//	printf("printf(\"Hello,World!\\n\");\n");
//	printf("cout<<\"Hello,World!\"<<endl;\n");
//}


//题目6
//从四个整数中找到最大整数
//方法一
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int max = 0;
//	scanf("%d", &max);
//	while (i < 4)
//	{
//		scanf("%d", &n);
//		if (n > max)
//			max = n;
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//方法二
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0]; 
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			i++;
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//题目7
//给定球的半径，计算球的体积
//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//	scanf("%lf", &r);
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3lf\n", v);
//	return 0;
//}


//题目8
//计算体重指数
//int main()
//{
//	double weight = 0.0;
//	double high = 0.0;
//	scanf("%lf %lf", &weight, &high);
//	double bmi = 0.0;
//	bmi = weight / (high /100.0) / ( high /100.0);
//	printf("%.2lf", bmi);
// 	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;//跳过本次循环后面的代码，进行下一次循环
//		printf("%d ", i);
//	}
//	return 0;
//}
//在for循环中break直接终结循环
//for循环的判断省略意味着判断会恒成立


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i < 10);
//	return 0;
//}
//do...while...语句


//n的阶乘
//int main()
//{
//	int i = 1;
//	int r = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1;i <= n;i++)
//	{
//		r = r * i;
//	}
//	printf("%d", r);  
//	return 0;
//}

//计算1！+2！+3！+……+10！
//方法一
//int main()
//{
//	int i = 1;
//  int n = 1;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10; n++);
//	{
//		ret = 1;
//		for (i = 1;i <= n;i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//方法二
//int main()
//{
//	int n = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字
//方法一
//int main()
//{
//	int i = 0;
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("没有找到");
//	return 0;
//}

//方法二(二分查找)
int main()
{
	int i = 0;
	int k = 7;
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}