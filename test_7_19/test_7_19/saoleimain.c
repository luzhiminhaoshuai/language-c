//#include"game.h"
////�˵�
//void menu()
//{
//	printf("|----------------------|\n");
//	printf("|        1.play        |\n");
//	printf("|        0.exit        |\n");
//	printf("|----------------------|\n");
//}
////ɨ����Ϸ��ʵ��
//void game()
//{
//	char mine[ROWS][COLS];//��Ų��úõ��׵���Ϣ
//	char show[ROWS][COLS];//����Ų�����׵���Ϣ
//	//��ʼ������
//	InitBoard(mine, ROWS, COLS, '0');
//	InitBoard(show, ROWS, COLS, '*');
//	//��ӡ����
//	//DisplayBoard(mine, ROW, COL);
//	DisplayBoard(show, ROW, COL);
//	//������
//	SetMine(mine, ROW, COL, COUNT);
//	//DisplayBoard(mine, ROW, COL);
//	//�Ų���
//	FindMine(mine, show, ROW, COL);
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			system("cls");
//			game();//ɨ����Ϸ��ʵ��
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
////��������������������������������
////��Ȩ����������ΪCSDN������2021dragon����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
////ԭ�����ӣ�https ://blog.csdn.net/chenlong_cxy/article/details/113125481