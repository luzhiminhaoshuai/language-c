#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
//�׳�1��+2��......10��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//
//
//return 0;
// }
//
//

//int main()
//{
//	system("color 0a");
//	char intput[20] = { 0 };
//	system("shutdown -s -t 60");
//	
//	while (1)
//	{
//		
//		printf("��ע�⣬��ĵ�����60���ڹػ���������������ȡ���ػ�\n");
//		scanf("%s", intput);
//		if (strcmp(intput, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�ػ�ȡ��\n");
//			break;
//		}
//		else 
//		{
//			printf("����������󣬹ػ������������\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//
//	while (1) {
//		char arr1[] = "¬���������࣬�����మ¬����";
//		char arr2[] = "###############################";
//
//		int left = 0;
//		int right = strlen(arr1) - 1;
//
//		while (left <= right)
//		{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s\n", arr2);
//
//			Sleep(100);//window��Sleep���������ĵ�λ�Ǻ���
//			system("cls");
//			left++;
//			right--;
//		}
//		printf("%s\n", arr2);
//		Sleep(500);
//	}
//		return 0;
//	}


//��������Ϸ
//��������Ϸ
//��������Ϸ


void guanji()
{
    system("color 0a");
    char intput2[20] = { 0 };
    system("shutdown -s -t 60");

  while (1)
 {

	printf("��ע�⣬��ĵ�����60���ڹػ�����������ȡ���ػ�\n");
	scanf("%s", intput2);
	if (strcmp(intput2, "������") == 0)
	{
		system("shutdown -a");
		printf("�ػ�ȡ��\n");
		break;
	}
	else
	{
		printf("����������󣬹ػ������������\n");
	}
 }
}

void menu()
{
	printf("************��������Ϸ************\n");
	printf("************* 1.play  *************\n");
	printf("**************2.exit   ************\n");
	printf("***********************************\n");

}

void game()
{
	int guess = 0;
	int ret = rand()%100+1;//���������
	//������
	int a = 10;
	while (1)
	{
		printf("��²���ʲô���֣�1~100��");
		scanf("%d" ,& guess);
		if (guess < ret)
		{
			a--;
			printf("��С��,�㻹��%d�λ���\n",a);
			
			if (a < 1)
			{
				printf("��������");
				Sleep(1000);
				guanji();
				break;
			}
		}
		else if (guess > ret)
		{
			a--;
			printf("�´���.�㻹��%d�λ���\n",a);
			
			if (a < 1)
			{
				printf("��������");
				Sleep(1000);
				guanji();
				break;
			}
		}
		else {
			printf("��ϲ�㣬�¶���.\n");
			break;
		}


	}


}


int main()
{
	int intput;
	srand((unsigned int)time(NULL));//��ʱ��������������������
	do
	{
		menu();
		printf("��ѡ��:> 1 �� 2\n");
		scanf("%d", &intput);
		switch (intput)//ѡ���֧��3���������
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��!!\n");
		}

	} while (intput);



	


	return 0;
}