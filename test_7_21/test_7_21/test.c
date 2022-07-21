#define _CRT_SECURE_NO_WARNINGS 1


//使用do while循环打印1~10
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

//计算 1!+2!+3!+……+10!
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
//在一个有序数组中查找具体的某个数字n。
//1 2 3 4 5 6 7 8 9 10
//
//查找7
//
//二分查找/折半查找
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
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
//		Sleep(100);//window下Sleep函数参数的单位是毫秒
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
//提示登录成，如果三次均输入错误，则退出程序。

//假设正确的密码是："bitbit"
//string compare - strcmp
#include <string.h>

//C语言中有字符串吗？ - 有 ""
//C语言中有字符串类型吗？ 没有
//string - C++

//strcmp 的返回值
//>0 
//<0 
//==0
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//判断密码正确性
//		if (strcmp(password, "bitbit") == 0)
//		{
//			printf("密码正确，登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}

//
//abcd
//abq
//

//猜数字游戏实现

//
//电脑随机生成一个1~100之间的数字
//猜数字
//如果你猜小了，告知猜小了
//如果你猜大了，告知猜大了
//如果你猜对了，告知猜对了
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
////rand函数可以生成随机数
////返回一个0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1. 生成随机数
//	int ret = rand()%100+1;//0~99-->1~100
//	//printf("%d\n", ret);
//	
//	//2. 猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	//设置随机数的生成器
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择!\n");
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
//不太建议使用goto语句的
//

//写一个关机程序， 只要程序运行起来，电脑在1分钟内就关机，如果输入:我是猪，才取消关机
//shutdown -s -t 60

#include <string.h>
#include <stdlib.h>

//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消\n");
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
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("关机取消\n");
//			break;
//		}
//	}
//	return 0;
//}



//debug - 调试
//release - 发布
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