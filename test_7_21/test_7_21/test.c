#define _CRT_SECURE_NO_WARNINGS 1


//ʹ��do whileѭ����ӡ1~10
#include <stdio.h>

//int main()
//{
//	int i = 1;
//	do
//	{
//		if(5==i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i<=10);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//	} while (i < 10);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//���� 1!+2!+3!+����+10!
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6 = 9
//	//3!
//	//4!=3!*4
//	//n!=(n-1)!*n
//	//for (n = 1; n <= 3; n++)
//	//{
//	//	ret = 1;
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		ret = ret * i;
//	//	}
//	//	sum = sum + ret;
//	//}
//
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//
//��һ�����������в��Ҿ����ĳ������n��
//1 2 3 4 5 6 7 8 9 10
//
//����7
//
//���ֲ���/�۰����
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;
//	int right = sz-1;
//	int k = 0;
//	scanf("%d", &k);
//
//	while (left<=right)
//	{
//		//int mid = (left + right) / 2;
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//
//	return 0;
//}
//
//


//welcome to bit!!!!!
//###################
//w#################!
//we###############!!
//wel#############!!!
//..
//welcome to bit!!!!!

#include <windows.h>
#include <string.h>
#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//
//		Sleep(100);//window��Sleep���������ĵ�λ�Ǻ���
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ��
//��ʾ��¼�ɣ�������ξ�����������˳�����

//������ȷ�������ǣ�"bitbit"
//string compare - strcmp
#include <string.h>

//C���������ַ����� - �� ""
//C���������ַ��������� û��
//string - C++

//strcmp �ķ���ֵ
//>0 
//<0 
//==0
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�ж�������ȷ��
//		if (strcmp(password, "bitbit") == 0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}

//
//abcd
//abq
//

//��������Ϸʵ��

//
//�����������һ��1~100֮�������
//������
//������С�ˣ���֪��С��
//�����´��ˣ���֪�´���
//�����¶��ˣ���֪�¶���
//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*********************************\n");
//	printf("**********  1. play  ************\n");
//	printf("**********  0. exit  ************\n");
//	printf("*********************************\n");
//}
//
////rand�����������������
////����һ��0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1. ���������
//	int ret = rand()%100+1;//0~99-->1~100
//	//printf("%d\n", ret);
//	
//	//2. ������
//	while (1)
//	{
//		printf("�������:>");
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
//	int input = 0;
//	//�����������������
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��!\n");
//			break;
//		}
//
//	} while (input);
//
//	return 0;
//}
//


//int main()
//{
//	printf("hehe\n");
//	goto flag;
//	printf("haha\n");
//flag:
//	printf("heihei\n");
//	return 0;
//}
//��̫����ʹ��goto����
//

//дһ���ػ����� ֻҪ��������������������1�����ھ͹ػ����������:��������ȡ���ػ�
//shutdown -s -t 60

#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ��\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			printf("�ػ�ȡ��\n");
//			break;
//		}
//	}
//	return 0;
//}



//debug - ����
//release - ����
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int t = n / 12 * 4 + 2;
//    printf("%d\n", t);
//
//    return 0;
//}
//



//#include <stdio.h>
//int main()
//{
//    int n = printf("Hello world!");
//    printf("%d\n", n);
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int n = printf("Hello world!");
//    printf("\n%d\n", n);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    //char c = 0;
//    //scanf("%c", &c);
//    int ch = getchar();
//    //A~Z a~z
//    //if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
//        //printf("YES\n");
//    //else
//       // printf("NO\n");
//
//    if (ch >= 'a' && ch <= 'z')
//        printf("YES\n");
//    else if (ch >= 'A' && ch <= 'Z')
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}