#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����ĵݹ�:�Ѵ��»�С
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//���磺
//���룺1234  �����1 2 3 4
//%d�Ǵ�ӡ�з���������������������
//%u�Ǵ�ӡ�޷�������
//void print(unsigned n)
//{
//	if (n > 9)
//		//���û��if���ͻ�ջ��������ݹ�
//		//������ÿһ�ε��ö�����ջ��������ռ�
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


//�ݹ��������Ҫ����
//1.��������������������ʱ���ݹ�㲻�ټ���
//2.ÿ�εݹ�֮��Խ��Խ�ӽ��������



//��д��������������ʱ���������ַ�������
//����һ
//int my_strlen(char str[])
//��������д���������ʽ
//int my_strlen(char* str)
////��������д��ָ�����ʽ
////�����������ַ��ĵ�ַ��ָ��ָ��a
//{
//	int count = 0;//��������ʱ����
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}


//������
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}



//�ݹ������
//n�Ľ׳ˣ������������
//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}

//����ʵ��-�ǵݹ�
//int fac(int n)
//{
//	int i = 0;
//	int let = 1;
//	for (i = 1;i <= n; i++)
//	{
//		let *= i;
//	}
//	return let;
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int let = fac(n);
//	printf("%d", let);
//	return 0;
//}


//���n��쳲�������(���������)
//쳲���������
//1 1 2 3 5 8 13 21 34 55...
//�ݹ�
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
////ѭ��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}