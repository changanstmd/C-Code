#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����������Ӵ�С���
//void Swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	//��ͨ��ֵ
//	int temp = 0;
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	//������ַ
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//дһ�����룬��ӡ1~100������3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 3;i <= 100;i+=3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//���������������������������Լ��
//��ͨ����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d", m);
//	return 0;
//}


//շת�����
//����ԭ��
//�����������Լ���������н�С�����ֺͶ���֮�����������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//������������С������
//����������ٳ������ǵ���С��Լ��



//��д������һ��1~100�����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}



//�������
//����1/1 - 1/2 + 1/3 -...+1/99 - 1/100��ֵ����ӡ���
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//��ʮ�������е����ֵ
//int main()
//{
//	int arr[10] = {0};
//	int i = 0;
//	for (i = 0;i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1;i <= 10;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}



//����Ļ�ϴ�ӡ9*9�˷���
//int main()
//{
//	int i = 0;
//	for (i = 1;i < 10;i++)
//	{
//		int j = 0;
//		for (j = 1;j < 1;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		//%2d��ӡ��λ��������ʹһλ������Ҳ�ÿո���䣬�����Ҷ��䣬-2%d��λ�����
//		printf("\n");
//	}
//	return 0;
//}0


//���ű��ʽ���������Ҽ���������ʽ��ֵ���涨���һ�����ʽ��ֵΪ�������ű��ʽ��ֵ
//��������ӡn*n�˷���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}



//�Ѻ������������������ݷ��ظ���������
//1.return�޷�����������

//2.�β�������
//void test(int arr[])//int* arr
////����Ԫ�صĵ�ַ����ȥ
//{
//	arr[0] = 3;//arr[0]--> *(arr+0)
//	arr[1] = 4;//arr[1]--> *(arr+1)
//	//��Ԫ�ص�ַ+1
//}
//
//int main()
//{
//	int arr[2] = { 0 };
//	test(arr);
//	return 0;
//}

//3.�β�������ָ��
//void test(int* px, int* py)
//{
//	*px = 3;
//	*py = 4;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	return 0;
//}

//4.�β�������ȫ�ֱ���
//int a = 0;
//int b = 0;
//
//void test()
//{
//	a = 3;
//	b = 4;
//}
//
//int main()
//{
//	test();
//	printf("a=%d b=%d\n", a, b);
//}