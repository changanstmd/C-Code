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

void Swap(int* px, int* py)
{
	int z = *px;//z = a
	*px = *py;//a = b
	*py = z;//z = a
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	//����
	printf("����ǰ��a=%d b=%d\n", a, b);
	//a��b��ʵ��
	Swap(&a, &b);
	printf("������a=%d b=%d", a, b);
	return 0;
}
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