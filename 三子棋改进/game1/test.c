#include"game1.h"
//三字棋



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
			printf("退出游戏！\n");
			break;
		case 1:
			printf("游戏开始！\n");
			game();
			
			break;
		default:
			printf("输入有误，请重新输入！\n");
			break;


		}
	} while (input);
	

	return 0;
}

void game()
{
	char board[ROW][COL];//需要一个3*3的棋盘来储存
	init_board(board, ROW, COL);//初始化棋盘
	display_board(board, ROW, COL);//打印棋盘

	char ret;
	int qa = rand()%2;//随机数选择先手 0玩家先手  1电脑先手
	if (qa == 0)
	{
		printf("玩家先手！\n");

		while (1)
		{
			player_move(board, ROW, COL);//玩家下棋
			system("cls");

			display_board(board, ROW, COL);//打印棋盘
			ret = is_win(board, ROW, COL);

			if (ret == '*')
			{    
				system("cls");

				printf("玩家赢！\n");
				display_board(board, ROW, COL);//打印棋盘

				break;
			}
			if (ret == '#')
			{
				system("cls");

				printf("电脑赢!\n");
				display_board(board, ROW, COL);//打印棋盘

				break;
			}
			if (ret == 'Q')
			{
				system("cls");

				printf("平局！\n");
				display_board(board, ROW, COL);//打印棋盘

				break;
			}

			//电脑进攻
			int i = computer_attack(board, ROW, COL);
			if (i == 0)//如果不满足进攻条件,就看看防守条件是否满足
			{

				int z = computer_defend(board, ROW, COL);
				if (z == 0)//如果不满足防守条件
				{
					computer_move(board, ROW, COL);
					system("cls");
					display_board(board, ROW, COL);//电脑随机下棋
					ret = is_win(board, ROW, COL);



					if (ret == '*')
					{
						printf("玩家赢！\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
					if (ret == '#')
					{
						printf("电脑赢!\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
					if (ret == 'Q')
					{
						printf("平局！\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}

				}
				else//如果满足防守条件
				{   
					system("cls");

					display_board(board, ROW, COL);
					ret = is_win(board, ROW, COL);

					if (ret == '*')
					{
						printf("玩家赢！\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
					if (ret == '#')
					{
						printf("电脑赢!\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
					if (ret == 'Q')
					{
						printf("平局！\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
				}
			}
			else//如果满足进攻条件
			{
				system("cls");

				display_board(board, ROW, COL);//打印棋盘
				ret = is_win(board, ROW, COL);


				if (ret == '*')
				{
					printf("玩家赢！\n");
					display_board(board, ROW, COL);//打印棋盘

					break;
				}
				if (ret == '#')
				{
					printf("电脑赢!\n");
					display_board(board, ROW, COL);//打印棋盘

					break;
				}
				if (ret == 'Q')
				{
					printf("平局！\n");
					display_board(board, ROW, COL);//打印棋盘

					break;
				}
			}


		}
	}
	else //qa==1
	{

		printf("电脑先手\n");
		Sleep(2000);
		int b = rand()%6;
		while (1)
		{
			if (b == 0||b==2||b==3)
			{   
				system("cls");

				b = 10;//放置再次下中间发生错误
				board[1][1] = '#';
				display_board(board, ROW, COL);
			}
			else
			{
				int i = computer_attack(board, ROW, COL);

				if (i == 0)//如果不满足进攻条件,就看看防守条件是否满足
				{

					int z = computer_defend(board, ROW, COL);
					if (z == 0)//如果不满足防守条件
					{
						computer_move(board, ROW, COL);
						system("cls");

						display_board(board, ROW, COL);//电脑随机下棋
						ret = is_win(board, ROW, COL);

						if (ret == '*')
						{
							system("cls");
							printf("玩家赢！\n");
							display_board(board, ROW, COL);//打印棋盘

							break;
						}
						if (ret == '#')
						{
							system("cls");

							printf("电脑赢!\n");
							display_board(board, ROW, COL);//打印棋盘

							break;
						}
						if (ret == 'Q')
						{
							system("cls");

							display_board(board, ROW, COL);//打印棋盘

							printf("平局！\n");
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

							printf("玩家赢！\n");
							display_board(board, ROW, COL);//打印棋盘

							break;
						}
						if (ret == '#')
						{
							system("cls");

							printf("电脑赢!\n");
							display_board(board, ROW, COL);//打印棋盘

							break;
						}
						if (ret == 'Q')
						{
							system("cls");

							printf("平局！\n");
							display_board(board, ROW, COL);//打印棋盘

							break;
						}
					}
				}
				else
				{
					system("cls");

					display_board(board, ROW, COL);//打印棋盘

					ret = is_win(board, ROW, COL);



					if (ret == '*')
					{
						system("cls");

						printf("玩家赢！\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
					if (ret == '#')
					{
						system("cls");

						printf("电脑赢!\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
					if (ret == 'Q')
					{
						system("cls");

						printf("平局！\n");
						display_board(board, ROW, COL);//打印棋盘

						break;
					}
				}

			}

			player_move(board, ROW, COL);//玩家下棋
			system("cls");


			display_board(board, ROW, COL);//打印棋盘
			ret = is_win(board, ROW, COL);

			if (ret == '*')
			{
				printf("玩家赢！\n");
				break;
			}
			if (ret == '#')
			{
				printf("电脑赢!\n");
				break;
			}
			if (ret == 'Q')
			{
				printf("平局！\n");
				break;
			}
		}



	}


}