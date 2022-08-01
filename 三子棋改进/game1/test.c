#include"game1.h"
//������



int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();
			
			break;
		default:
			printf("�����������������룡\n");
			break;


		}
	} while (input);
	

	return 0;
}

void game()
{
	char board[ROW][COL];//��Ҫһ��3*3������������
	init_board(board, ROW, COL);//��ʼ������
	display_board(board, ROW, COL);//��ӡ����

	char ret;
	int qa = rand()%2;//�����ѡ������ 0�������  1��������
	if (qa == 0)
	{
		printf("������֣�\n");

		while (1)
		{
			player_move(board, ROW, COL);//�������
			system("cls");

			display_board(board, ROW, COL);//��ӡ����
			ret = is_win(board, ROW, COL);

			if (ret == '*')
			{    
				system("cls");

				printf("���Ӯ��\n");
				display_board(board, ROW, COL);//��ӡ����

				break;
			}
			if (ret == '#')
			{
				system("cls");

				printf("����Ӯ!\n");
				display_board(board, ROW, COL);//��ӡ����

				break;
			}
			if (ret == 'Q')
			{
				system("cls");

				printf("ƽ�֣�\n");
				display_board(board, ROW, COL);//��ӡ����

				break;
			}

			//���Խ���
			int i = computer_attack(board, ROW, COL);
			if (i == 0)//����������������,�Ϳ������������Ƿ�����
			{

				int z = computer_defend(board, ROW, COL);
				if (z == 0)//����������������
				{
					computer_move(board, ROW, COL);
					system("cls");
					display_board(board, ROW, COL);//�����������
					ret = is_win(board, ROW, COL);



					if (ret == '*')
					{
						printf("���Ӯ��\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
					if (ret == '#')
					{
						printf("����Ӯ!\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
					if (ret == 'Q')
					{
						printf("ƽ�֣�\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}

				}
				else//��������������
				{   
					system("cls");

					display_board(board, ROW, COL);
					ret = is_win(board, ROW, COL);

					if (ret == '*')
					{
						printf("���Ӯ��\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
					if (ret == '#')
					{
						printf("����Ӯ!\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
					if (ret == 'Q')
					{
						printf("ƽ�֣�\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
				}
			}
			else//��������������
			{
				system("cls");

				display_board(board, ROW, COL);//��ӡ����
				ret = is_win(board, ROW, COL);


				if (ret == '*')
				{
					printf("���Ӯ��\n");
					display_board(board, ROW, COL);//��ӡ����

					break;
				}
				if (ret == '#')
				{
					printf("����Ӯ!\n");
					display_board(board, ROW, COL);//��ӡ����

					break;
				}
				if (ret == 'Q')
				{
					printf("ƽ�֣�\n");
					display_board(board, ROW, COL);//��ӡ����

					break;
				}
			}


		}
	}
	else //qa==1
	{

		printf("��������\n");
		Sleep(2000);
		int b = rand()%6;
		while (1)
		{
			if (b == 0||b==2||b==3)
			{   
				system("cls");

				b = 10;//�����ٴ����м䷢������
				board[1][1] = '#';
				display_board(board, ROW, COL);
			}
			else
			{
				int i = computer_attack(board, ROW, COL);

				if (i == 0)//����������������,�Ϳ������������Ƿ�����
				{

					int z = computer_defend(board, ROW, COL);
					if (z == 0)//����������������
					{
						computer_move(board, ROW, COL);
						system("cls");

						display_board(board, ROW, COL);//�����������
						ret = is_win(board, ROW, COL);

						if (ret == '*')
						{
							system("cls");
							printf("���Ӯ��\n");
							display_board(board, ROW, COL);//��ӡ����

							break;
						}
						if (ret == '#')
						{
							system("cls");

							printf("����Ӯ!\n");
							display_board(board, ROW, COL);//��ӡ����

							break;
						}
						if (ret == 'Q')
						{
							system("cls");

							display_board(board, ROW, COL);//��ӡ����

							printf("ƽ�֣�\n");
							break;
						}
					}
					else
					{
						system("cls");

						display_board(board, ROW, COL);
						ret = is_win(board, ROW, COL);


						if (ret == '*')
						{
							system("cls");

							printf("���Ӯ��\n");
							display_board(board, ROW, COL);//��ӡ����

							break;
						}
						if (ret == '#')
						{
							system("cls");

							printf("����Ӯ!\n");
							display_board(board, ROW, COL);//��ӡ����

							break;
						}
						if (ret == 'Q')
						{
							system("cls");

							printf("ƽ�֣�\n");
							display_board(board, ROW, COL);//��ӡ����

							break;
						}
					}
				}
				else
				{
					system("cls");

					display_board(board, ROW, COL);//��ӡ����

					ret = is_win(board, ROW, COL);



					if (ret == '*')
					{
						system("cls");

						printf("���Ӯ��\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
					if (ret == '#')
					{
						system("cls");

						printf("����Ӯ!\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
					if (ret == 'Q')
					{
						system("cls");

						printf("ƽ�֣�\n");
						display_board(board, ROW, COL);//��ӡ����

						break;
					}
				}

			}

			player_move(board, ROW, COL);//�������
			system("cls");


			display_board(board, ROW, COL);//��ӡ����
			ret = is_win(board, ROW, COL);

			if (ret == '*')
			{
				printf("���Ӯ��\n");
				break;
			}
			if (ret == '#')
			{
				printf("����Ӯ!\n");
				break;
			}
			if (ret == 'Q')
			{
				printf("ƽ�֣�\n");
				break;
			}
		}



	}


}