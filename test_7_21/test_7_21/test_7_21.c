#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
//阶乘1！+2！......10！
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
//		printf("请注意，你的电脑在60秒内关机，输入我是猪，就取消关机\n");
//		scanf("%s", intput);
//		if (strcmp(intput, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("关机取消\n");
//			break;
//		}
//		else 
//		{
//			printf("你的输入有误，关机程序继续运行\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//
//	while (1) {
//		char arr1[] = "卢治民爱徐晓燕，徐晓燕爱卢治民";
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
//			Sleep(100);//window下Sleep函数参数的单位是毫秒
//			system("cls");
//			left++;
//			right--;
//		}
//		printf("%s\n", arr2);
//		Sleep(500);
//	}
//		return 0;
//	}


//猜数字游戏
//猜数字游戏
//猜数字游戏


void guanji()
{
    system("color 0a");
    char intput2[20] = { 0 };
    system("shutdown -s -t 60");

  while (1)
 {

	printf("请注意，你的电脑在60秒内关机，我是猪，就取消关机\n");
	scanf("%s", intput2);
	if (strcmp(intput2, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("关机取消\n");
		break;
	}
	else
	{
		printf("你的输入有误，关机程序继续运行\n");
	}
 }
}

void menu()
{
	printf("************猜数字游戏************\n");
	printf("************* 1.play  *************\n");
	printf("**************2.exit   ************\n");
	printf("***********************************\n");

}

void game()
{
	int guess = 0;
	int ret = rand()%100+1;//生成随机数
	//猜数字
	int a = 10;
	while (1)
	{
		printf("请猜猜是什么数字（1~100）");
		scanf("%d" ,& guess);
		if (guess < ret)
		{
			a--;
			printf("猜小了,你还有%d次机会\n",a);
			
			if (a < 1)
			{
				printf("你是猪吗？");
				Sleep(1000);
				guanji();
				break;
			}
		}
		else if (guess > ret)
		{
			a--;
			printf("猜大了.你还有%d次机会\n",a);
			
			if (a < 1)
			{
				printf("你是猪吗？");
				Sleep(1000);
				guanji();
				break;
			}
		}
		else {
			printf("恭喜你，猜对了.\n");
			break;
		}


	}


}


int main()
{
	int intput;
	srand((unsigned int)time(NULL));//用时间戳来设置随机数生成器
	do
	{
		menu();
		printf("请选择:> 1 或 2\n");
		scanf("%d", &intput);
		switch (intput)//选择分支，3种输入情况
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误请重新选择!!\n");
		}

	} while (intput);



	


	return 0;
}