#include"game1.h"

//游戏菜单
void menu()
{
	printf("*****************************\n");
	printf("***********三子棋游戏********\n");
	printf("************1.play***********\n");
	printf("************0.exit***********\n");
	printf("*****************************\n");

}
//棋盘初始化函数
void init_board(char arr[][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0 ;i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}

	}

}
//
//打印棋盘函数
void display_board(char arr[][COL], int row, int col)                           //最终棋盘:       |   |  
                                                                                //             ---|---|---
{                                                                               //                |   | 
	                                                                            //             ---|---|---
	printf(" 1 | 2 | 3 \n");	
	printf("---|---|---\n");
	int i = 0;                                          
	for (i = 0; i < row; i++)                            
	{
		
		int j = 0;
		for (j = 0; j < col; j++)//打印 %c | %c | %c   
			                            //把(   %c |  )看成一组
		{
			printf(" %c ", arr[i][j]);
			if (j == 2)
				printf("|%d", i+1);
			if (j < col - 1)//由于是不封闭棋盘，最后一列不打印
			{
				printf("|");
			}
		}
		printf("\n");
		if(i < row - 1)//打印---|---|---
		{
		for (j = 0; j < col; j++)
		{
			printf("---");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		}

	}
	printf("\n");

}

//游戏下棋
void player_move(char arr[][COL], int row, int col)//玩家下棋
{
	printf("玩家下棋-》：\n");
	printf("请输入要下棋的坐标,用空格隔开。\n");
	int x = 0;
	int y = 0;
	while (1)
	{	scanf("%d %d", &x, &y);
	   
	
		if (x >= 1 && x <= col && y >= 1 && y <= row)
		{
			if (arr[x - 1][y - 1] == ' ')  //为什么是x-1，y-1呢？
										   //因为人下棋的时候坐标是从1开始下的，而数组的下标是从0开始的
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("这里已经下过棋啦！请重新输入坐标\n");
			}
		}
		else
		{
			printf("你输入的坐标超出范围，请重新输入\n");


		}

	}
	
}
//电脑随机下棋
void computer_move(char arr[][COL], int row, int col)
{
	
	int x = 0;
	int y = 0;
	x = rand() % 3;   //由于棋盘的横坐标大小对于数组来说是0~2,所以设置随机数范围也是0~2
	y = rand() % 3;   //由于棋盘的横坐标大小对于数组来说是0~2,所以设置随机数范围也是0~2
	while (1)
	{
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}

	}
	
}

int is_full(char arr[][COL], int row, int col)//判断棋盘是否下满，下满返回1，未下满返回0；
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
				return 0;

		}

	}return 1;
}
char is_win(char arr[][COL], int row, int col)//是否赢棋  玩家赢 返回*
                                                        //电脑赢  返回#
                                                         //棋盘下满平局 返回Q//继续下棋 返回C
{
	//判断三行
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0]!= ' ')
			return arr[i][0];
	}
	//判断三列
	for (i = 0; i < col; i++) 
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
			return arr[0][i];
	}
	//判断交叉线
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]&&arr[0][0] != ' ')
		return arr[0][0];
	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] &&arr[0][2]!= ' ')
		return arr[0][2];
	if (is_full(arr, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}



int computer_attack(char arr[][COL], int row, int col)//电脑进攻下棋，优先级要高于防守，判断是否快满足3个棋，如果满足电脑赢
{

	//q=1的时候表示已经走棋了
	int q = 0;
	for (int i = 0; i <= 2; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][0] == '#' && arr[i][2] == ' ')
		{
			arr[i][2] = '#';
			q = 1;
			return q;
		}
		if (arr[i][0] == arr[i][2] && arr[i][0] == '#' && arr[i][1] == ' ')
		{
			arr[i][1] = '#';
			q = 1;
			return q;
		}
		if (arr[i][0] == arr[i][2] && arr[i][0] == '#' && arr[i][1] == ' ')
		{
			arr[i][0] = '#';
			q = 1;
			return q;
		}
	}
	//接下来走列
	for (int i = 1; i <= 2; i++)
	{
		if (arr[0][i] == arr[1][i] && arr[0][i] == '#' && arr[2][i] == ' ')
		{
			arr[2][i] = '#';
			q = 1;
			return q;
		}
		if (arr[0][i] == arr[2][i] && arr[0][i] == '#' && arr[1][i] == ' ')
		{
			arr[1][i] = '#';
			q = 1;
			return q;
		}
		if (arr[2][i] == arr[1][i] && arr[1][i] == '#' && arr[0][i] == ' ')
		{
			arr[0][i] = '#';
			q = 1;
			return q;
		}
	}
	//斜线
	if (arr[0][0] == arr[1][1] && arr[0][0] == '#' && arr[2][2] == ' ')
	{
		arr[2][2] = '#';
		q = 1;
		return q;
	}
	if (arr[0][0] == arr[2][2] && arr[0][0] == '#' && arr[1][1] == ' ')
	{
		arr[1][1] = '#';
		q = 1;
		return q;
	}
	if (arr[1][1] == arr[2][2] && arr[1][1] == '#' && arr[0][0] == ' ')
	{
		arr[0][0] = '#';
		return q;
	}
	//斜线
	if (arr[0][2] == arr[1][1] && arr[0][2] == '#' && arr[2][0] == ' ')
	{
		arr[2][0] = '#';
		q = 1;
		return q;
	}
	if (arr[0][2] == arr[2][0] && arr[2][0] == '#' && arr[1][1] == ' ')
	{
		arr[1][1] = '#';
		q = 1;
		return q;
	}
	if (arr[1][1] == arr[2][0] && arr[2][0] == '#' && arr[0][2] == ' ')
	{
		arr[0][2] = '#';
		q = 1;
		return q;
	}
	return q;
}
	int computer_defend(char arr[][COL], int row, int col)//电脑防守
	{
		int q = 0;
		//这里我们先判断玩家是否是要赢了
		for (int i = 0; i <= 2; i++)
		{
			if (arr[i][0] == arr[i][1] && arr[i][0] == '*' && arr[i][2] == ' ')
			{
				arr[i][2] = '#';
				q = 1;
				return q;
			}
			if (arr[i][0] == arr[i][2] && arr[i][2] == '*' && arr[i][1] == ' ')
			{
				arr[i][1] = '#';
				q = 1;
				return q;
			}
			if (arr[i][1] == arr[i][2] && arr[i][1] == '*' && arr[i][0] == ' ')
			{
				arr[i][0] = '#';
				q = 1;
				return q;
			}
		}
		for (int i = 0; i <= 2; i++)
		{
			if (arr[0][i] == arr[1][i] && arr[1][i] == '*' && arr[2][i] == ' ')
			{
				arr[2][i] = '#';
				q = 1;
				return q;
			}
			if (arr[0][i] == arr[2][i] && arr[2][i] == '*' && arr[1][i] == ' ')
			{
				arr[1][i] = '#';
				q = 1;
				return q;
			}
			if (arr[2][i] == arr[1][i] && arr[1][i] == '*' && arr[0][i] == ' ')
			{
				arr[0][i] = '#';
				q = 1;
				return q;
			}
		}
		//走到这里还差捺
		if (arr[0][0] == arr[1][1] && arr[1][1] == '*' && arr[2][2] == ' ')
		{
			arr[2][2] = '#';
			q = 1;
			return q;
		}
		if (arr[0][0] == arr[2][2] && arr[0][0] == '*' && arr[1][1] == ' ')
		{
			arr[1][1] = '#';
			q = 1;
			return q;
		}
		if (arr[1][1] == arr[2][2] && arr[1][1] == '*' && arr[0][0] == ' ')
		{
			arr[0][0] = '#';
			q = 1;
			return q;
		}
		//撇
		if (arr[0][2] == arr[1][1] && arr[1][1] == '*' && arr[2][0] == ' ')
		{
			arr[2][0] = '#';
			q = 1;
			return q;
		}
		if (arr[0][2] == arr[2][0] && arr[0][2] == '*' && arr[1][1] == ' ')
		{
			arr[1][1] = '#';
			q = 1;
			return q;
		}
		if (arr[1][1] == arr[2][0] && arr[1][1] == '*' && arr[0][2] == ' ')
		{
			arr[0][2] = '#';
			q = 1;
			return q;
		}
	


		return q;
	}
	
	