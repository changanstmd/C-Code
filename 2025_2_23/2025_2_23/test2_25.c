#define _CRT_SECURE_NO_WARNINGS
//����
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	//strcpy(Ŀ�ĵأ� Դͷ)
//	printf("%s\n", arr1);
//	char arr[20] = "hello world";
//	memset(arr, 'x', 5);
//	//memset(Ŀ�ĵأ�Ҫ�ı���ֽڣ��ֽ���)
//	printf("%s\n", arr);
//	return 0;
//}



//�Զ��庯��
//char *strcpy(char * destination, const char * source);
//charΪ����ֵ����
//*strcpyΪ������
//������Ϊ����
//дһ�����������������ͱ���������
//x,y��ʽ����
//void Swap(int x, int y)
////void�Ǻ�������Ҫ����ֵ��Ϊ�޷���ֵ
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}

//����Ϊ��ֵ���ã��������

//void Swap(int* px, int* py)
//{
//	int z = *px;//z = a
//	*px = *py;//a = b
//	*py = z;//z = a
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//a��b��ʵ��
//	Swap(&a, &b);
//	printf("������a=%d b=%d", a, b);
//	return 0;
//}
//��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	a = 20;//ֱ�Ӹ�
//	*p = 30;//��Ӹ�
//}



//��������
//��ֵ����
//��ַ�����ǰѺ����ⲿ���������ĵ�ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ
//���ִ��η�ʽ�����ú�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���



//��ӡ100~200�е���������������
//����һ
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i+=2)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2;j <= sqrt(i);j++)
////sqrt����ѧ�⺯�����ǿ�ƽ������˼��Ҫ��math.h��ͷ�ļ�
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//������
int is_prime(int n)
{
	int j = 0;
	for (j = 2;j <= sqrt(n);j++)
	{
		if (n % j == 0)
		{
			return 0;
		}	
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101;i <= 200;i+=2)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
	return 0;
}