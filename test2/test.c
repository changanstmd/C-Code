#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef unsigned int uint;//typedef����������
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;
//	return 0;
//}


//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//void test()//void���޷���ֵ
//{
//	static int a = 1;//���ξֲ������������٣��������ڱ�Ϊ�ͳ�������һ�����洢λ�ô�ջ������̬��
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

//tsatic����ȫ�ֱ���,ȫ�ֱ������ⲿ�������Ա�Ϊ�ڲ��������ԣ�����Դ�ļ��Ͳ���ʹ�����ȫ�ֱ�����

//���������ⲿ�������ԣ�static���κ�����Ϊ�ڲ�����


//register--�Ĵ���
//int main()
//{
//	register int num = 3;//����3����ڼĴ�����
//
//	return 0;
//}


//define�����ʶ������
//#define NUM 100

//define�����
//�����в���
//#define ADD(x,y) ((x)+(y))//x,y��Ĳ���������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d", c);
//	return 0;
//}


