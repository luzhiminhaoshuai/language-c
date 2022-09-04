
#include"game.h"

void game()
{
	//设置两个数组，mine数组用来存放设置雷的信息，show数组用来存放排查雷的信息
	char mine[ROWS][COLS] = {0};
	char show[ROWS][COLS] = {0};
	init_board(show,ROWS,COLS,'*');
	init_board(mine, ROWS, COLS, '0');
	//display_board(mine, ROW, COL);
	display_board(show, ROW, COL);
	set_mine(mine,ROW,COL);
	//display_board(mine, ROW, COL);
	find_mine(mine,show,ROW,COL);
}


void init_board(char board[][COLS],int rows,int cols,char set)//初始化雷盘,set是需要初始化成什么字符
{   
	int i = 0;
	int j = 0;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印雷盘,制作的是9x9的雷盘
//把雷盘看成一个二维数组打印，为了防止数组越界，我们数组的行和列分别要比想要棋盘的行和列多2
void display_board(char board[][COLS], int row, int col)
{    
	printf("---------扫雷游戏-------------\n");
	printf("   ");
	for (int n = 1; n <= col; n++)
	{
		printf("%d ",n);
	}
	printf("\n");
	printf("------------------------------\n");

	for (int i = 1; i <= row; i++)
	{   
		printf("%d |",i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("|");
		printf("\n");
	}
	printf("-----------------------------\n");
	
}
void set_mine(char board[][COLS], int row, int col)
{
	
	int count = MINENUMS;
 	while (count)
	{   
		int x = rand() % row + 1;
		int y = rand() % col + 1;//设置1~9随机数布置雷
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//获取坐标周围的雷数目(八个格子)
int get_minecount(char mine[][COLS], int x, int y)
{
	int n = mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';//减去八个字符零是因为八个字符相加，要转换成数字得到和
	    return n;
}
 void ergodic(char mine[][COLS],char show[][COLS],int x,int y,int *w)//遍历打开不是雷的区域
{
	int mine_num = get_minecount(mine, x, y);
	if (mine_num == 0)
	{   
		show[x][y] = ' ';//如果这个坐标周围都没有雷的话，显示为空格
		(*w)++;
		system("cls");
		display_board(show, ROW, COL);
		/*display_board(mine, ROW, COL);*/

		if ((x - 1 >= 1 && x - 1 <= ROW) && (y - 1 >= 1 && y - 1 <= COL) && show[x - 1][y - 1] == '*')
		{
			ergodic(mine,show,x-1,y-1,w);
		}
		if ((x - 1 >= 1 && x - 1 <= ROW) && (y >= 1 && y <= COL) && show[x - 1][y] == '*')
		{
			ergodic(mine, show, x - 1, y,w );
		}
		if ((x - 1 >= 1 && x - 1 <= ROW) && (y +1>= 1 && y+1 <= COL) && show[x - 1][y+1] == '*')
		{
			ergodic(mine, show, x - 1, y+1,w);
		}
		if((x>=1&&x<=ROW)&&(y - 1 >= 1 && y - 1 <= COL) && show[x ][y - 1] == '*')
		{
			ergodic(mine, show, x , y - 1,w);
		}
		if ((x >= 1 && x <= ROW) && (y + 1 >= 1 && y + 1 <= COL) && show[x][y + 1] == '*')
		{
			ergodic(mine, show, x, y + 1,w);
		}
		if ((x + 1 >= 1 && x + 1 <= ROW) && (y - 1 >= 1 && y - 1 <= COL) && show[x + 1][y - 1] == '*')
		{
			ergodic(mine, show, x + 1, y - 1,w);
		}
		if ((x + 1 >= 1 && x + 1 <= ROW) && (y >= 1 && y <= COL) && show[x + 1][y] == '*')
		{
			ergodic(mine, show, x + 1, y,w);
		}
		if ((x + 1 >= 1 && x + 1 <= ROW) && (y + 1 >= 1 && y + 1 <= COL) && show[x + 1][y + 1] == '*')
		{
			ergodic(mine, show, x + 1, y + 1,w);
		}
	}
	else
	{
		show[x][y] = mine_num + '0';
	///*	display_board(mine, ROW, COL);*/

		(*w)++;
	}

}

void find_mine(char mine[][COLS],char show[][COLS],int row,int col)//寻找雷
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* w = &win;
	while (win < (row * col - MINENUMS))//判断是否已经排查完毕,win相当于一个计数器
	{
		printf("请输入需要排雷的坐标: ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("你被炸死了！\n");
					display_board(show,row,col);
					break;
				}
				else
				{
				/*	int count = get_minecount(mine,x,y);
					show[x][y] = count + '0';*/

					ergodic(mine,show,x,y,w);
					system("cls");
					display_board(show, ROW, COL);
					/*display_board(mine, ROW, COL);*/
					/*win++;*/
					
				}
			}
			else
			{
				printf("坐标已经被排查过啦！\n");
			}
		}
		else
		{
			printf("输入的坐标有误！\n");
		}
	}
	if (win == row * col - MINENUMS)
	{
		printf("恭喜你，排雷成功!\n\n\n\n");
		display_board(show, ROW, COL);
	}
}





