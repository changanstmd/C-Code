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
//bool����
//ֻ�ܱ�ʾ��ͼ�
#include <stdbool.h>//ͷ�ļ�
//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j <= sqrt(n);j++)
//	{
//		if (n % j == 0)
//		{
//			return false;//0Ҳ��
//		}
//	}
//	return true;//1Ҳ��
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101;i <= 200;i += 2)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



//��ӡ1000~2000֮�������
//������жϹ���
//1.�ܱ�4���������Ҳ��ܱ�100����
//2.�ܱ�400����
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}



//дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)
////�β�arr[]�����ﲻ�����飬����һ��ָ�����
////���鴫��ʵ�����Ǵ��ݵ���������Ԫ�صĵ�ַ
////������һ�������ڲ�����һ������������С�ǲ����׵�
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	{
//		if (ret == -1)
//		{
//			printf("�Ҳ���\n");
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d", ret);
//		}
//	}
//	return 0;
//}
//��ʽ������ʵ�ʲ���������ͬ��Ҳ���Բ�ͬ


//дһ��������ÿ�ε�������������ͻὫnum��ֵ����
//����һ
//void Add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//������
//int Add(int p)
//{
//	return ++p;
//}
//int main()
//{
//	int num = 0;
//	num = Add(num);
//	printf("%d\n", num);
//	num = Add(num);
//	printf("%d\n", num);
//	return 0;
//}



//������Ƕ��
//��������Ƕ�׵��ã�������Ƕ�׶���
//��ʽ����
//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//4321
//	return 0;
//}
//printf�����ķ���ֵ��һ������
//��ʽ���ʵ�ǰ����Ҫ�з���ֵ
//������д����ֵ��Ĭ��Ϊint

//int main(void)
//��ȷ˵��main����û�в���
//main��������������
//int main(int argc, char* argv[], char* envp[])
//{
//	return 0;
//}
