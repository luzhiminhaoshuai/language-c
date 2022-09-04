
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("********1.开始游戏********\n");
	printf("********0.退出游戏********\n");
	printf("**************************\n");
}
int main()
{   
	srand((unsigned int)time(NULL));
	int intput = 0;
again:
	menu();
scanf("%d", &intput);
	do
	{ 
		switch (intput)
		{
		case 1:
				printf("游戏开始\n");
				game();
				goto again;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误请重新输入\n");
			break;
		}
	} while(intput);
	
	return 0;
}


