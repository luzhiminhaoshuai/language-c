
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("********1.��ʼ��Ϸ********\n");
	printf("********0.�˳���Ϸ********\n");
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
				printf("��Ϸ��ʼ\n");
				game();
				goto again;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while(intput);
	
	return 0;
}


