#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;//向内存申请4个字符，存储10
//	int* p = &a;
//	*p = 20;//解除引用操作符
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	printf("%zu", sizeof(int*));//32位地址4byte，64位指针大小8byte
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//void print(struct Stu* pc)
//{
//	printf("%s %d %s %s\n", (*pc).name, (*pc).age,(*pc).sex, (*pc).tele);
//	printf("%s %d %s %s\n", pc->name, pc->age, pc->sex, pc->tele);
//    //结构体指针变量->成员名
//}
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","18256292207" };
//	//结构体对象.成员名
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);
//	print(&s);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}