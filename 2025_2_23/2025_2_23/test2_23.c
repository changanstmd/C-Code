#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��һ�����������в��Ҿ����ĳ������
//���ֲ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//mid��Ҫ��ģ��������渳ֵ������
//		int mid = left + (right - left) / 2;
//		//��ֹ��ֵ���
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
#include<string.h>
#include<windows.h>//˯�ߺ�����ͷ�ļ�
#include<stdlib.h>//�⺯����ͷ�ļ�
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
	//strlen������ַ������ȣ�������\0����ĩλԪ���±걾���Ҫ��1
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
    //sizeof����ǿռ�Ĵ�С��������0������Ҫ�ټ�1
	/*while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);*///˯�ߺ�������λms
		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��дһ�����룬ģ���û���¼�龰������ֻ�ܵ�¼����
//��ֻ���������������룬�����������ʾ��¼�ɹ���������ξ�����������Ƴ�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	for (i = 0;i < 3;i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//�������������ǵ�ַ������Ҫȡ��ַ
//		if (strcmp(password, "abcdef") == 0)
//		//�Ƚ������ַ����Ƿ���ԣ�����ʹ��==����Ҫ��һ���⺯����strcmp
//        //�������ֵ��0����ʾ�����ַ������
//		//ͷ�ļ���string.h
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//		return 0;
//	}
//}


//void fun(int a[])//�������Ǹ�ָ�����
//{
//	printf("%zu", sizeof(a));
//}
//int main()
//{
//	int a[10] = { 0 };//40
//	printf("%zu\n", sizeof(a));//4
//	printf("%zu", sizeof(a[1]));//x64��8��x86��4
//	fun(a);
//	//���鴫�ε�ʱ���Ǵ���������Ԫ�صĵ�ַ
//}



////��������Ϸ��ʵ��
////���裺
////1.���Բ���һ���������1~100��
////2.������
////3.�´��ˣ���С�ˣ�ֱ���¶��˽���
////int *p = NULL;NULL�ǿ�ָ�룬�൱�ڸ�ֵΪ��
//void menu()
//{
//	printf("*************************\n");
//	printf("*********1. play ********\n");
//	printf("*********0. exit ********\n");
//	printf("*************************\n");
//}
//
////0~RAND_MAX��32767��0x7fff����������ķ�Χ
//void game()
//{
//	int guess = 0;
//	//1.���������
//	//�κ���%100����0~99--->1~100
//	int ret = rand()%100 + 1;
//	//ͷ�ļ���stdlib.h
//	//����������ĺ���
//	printf("%d\n", ret);
//	//2.������
//	while(1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//����Ҫÿ�������������ʱ�򶼵�������ֻҪ��������������һ�ξ�����
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}



//c�����ṩ�˿������õ�goto���ͱ����ת�ķ���
//�޷��纯����ת
//�����ڶ��Ƕ��ѭ��

//���ԵĹػ�����
//��������������һ�����ڹػ���������롰��������ȡ���ػ�
//int main()
//{
//	char input[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���60���ػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//debug�ǵ��԰汾��release�Ƿ����汾