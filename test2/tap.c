#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;//���ڴ�����4���ַ����洢10
//	int* p = &a;
//	*p = 20;//������ò�����
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	printf("%zu", sizeof(int*));//32λ��ַ4byte��64λָ���С8byte
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
//    //�ṹ��ָ�����->��Ա��
//}
//int main()
//{
//	struct Stu s = { "zhangsan",20,"nan","18256292207" };
//	//�ṹ�����.��Ա��
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