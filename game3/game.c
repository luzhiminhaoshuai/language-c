
#include"game.h"

void game()
{
	//�����������飬mine����������������׵���Ϣ��show������������Ų��׵���Ϣ
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


void init_board(char board[][COLS],int rows,int cols,char set)//��ʼ������,set����Ҫ��ʼ����ʲô�ַ�
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

//��ӡ����,��������9x9������
//�����̿���һ����ά�����ӡ��Ϊ�˷�ֹ����Խ�磬����������к��зֱ�Ҫ����Ҫ���̵��к��ж�2
void display_board(char board[][COLS], int row, int col)
{    
	printf("---------ɨ����Ϸ-------------\n");
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
		int y = rand() % col + 1;//����1~9�����������
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

//��ȡ������Χ������Ŀ(�˸�����)
int get_minecount(char mine[][COLS], int x, int y)
{
	int n = mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';//��ȥ�˸��ַ�������Ϊ�˸��ַ���ӣ�Ҫת�������ֵõ���
	    return n;
}
 void ergodic(char mine[][COLS],char show[][COLS],int x,int y,int *w)//�����򿪲����׵�����
{
	int mine_num = get_minecount(mine, x, y);
	if (mine_num == 0)
	{   
		show[x][y] = ' ';//������������Χ��û���׵Ļ�����ʾΪ�ո�
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

void find_mine(char mine[][COLS],char show[][COLS],int row,int col)//Ѱ����
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* w = &win;
	while (win < (row * col - MINENUMS))//�ж��Ƿ��Ѿ��Ų����,win�൱��һ��������
	{
		printf("��������Ҫ���׵�����: ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("�㱻ը���ˣ�\n");
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
				printf("�����Ѿ����Ų������\n");
			}
		}
		else
		{
			printf("�������������\n");
		}
	}
	if (win == row * col - MINENUMS)
	{
		printf("��ϲ�㣬���׳ɹ�!\n\n\n\n");
		display_board(show, ROW, COL);
	}
}





