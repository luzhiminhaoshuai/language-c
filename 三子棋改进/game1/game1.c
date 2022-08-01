#include"game1.h"

//��Ϸ�˵�
void menu()
{
	printf("*****************************\n");
	printf("***********��������Ϸ********\n");
	printf("************1.play***********\n");
	printf("************0.exit***********\n");
	printf("*****************************\n");

}
//���̳�ʼ������
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
//��ӡ���̺���
void display_board(char arr[][COL], int row, int col)                           //��������:       |   |  
                                                                                //             ---|---|---
{                                                                               //                |   | 
	                                                                            //             ---|---|---
	printf(" 1 | 2 | 3 \n");	
	printf("---|---|---\n");
	int i = 0;                                          
	for (i = 0; i < row; i++)                            
	{
		
		int j = 0;
		for (j = 0; j < col; j++)//��ӡ %c | %c | %c   
			                            //��(   %c |  )����һ��
		{
			printf(" %c ", arr[i][j]);
			if (j == 2)
				printf("|%d", i+1);
			if (j < col - 1)//�����ǲ�������̣����һ�в���ӡ
			{
				printf("|");
			}
		}
		printf("\n");
		if(i < row - 1)//��ӡ---|---|---
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

//��Ϸ����
void player_move(char arr[][COL], int row, int col)//�������
{
	printf("�������-����\n");
	printf("������Ҫ���������,�ÿո������\n");
	int x = 0;
	int y = 0;
	while (1)
	{	scanf("%d %d", &x, &y);
	   
	
		if (x >= 1 && x <= col && y >= 1 && y <= row)
		{
			if (arr[x - 1][y - 1] == ' ')  //Ϊʲô��x-1��y-1�أ�
										   //��Ϊ�������ʱ�������Ǵ�1��ʼ�µģ���������±��Ǵ�0��ʼ��
			{
				arr[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����Ѿ��¹���������������������\n");
			}
		}
		else
		{
			printf("����������곬����Χ������������\n");


		}

	}
	
}
//�����������
void computer_move(char arr[][COL], int row, int col)
{
	
	int x = 0;
	int y = 0;
	x = rand() % 3;   //�������̵ĺ������С����������˵��0~2,���������������ΧҲ��0~2
	y = rand() % 3;   //�������̵ĺ������С����������˵��0~2,���������������ΧҲ��0~2
	while (1)
	{
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}

	}
	
}

int is_full(char arr[][COL], int row, int col)//�ж������Ƿ���������������1��δ��������0��
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
char is_win(char arr[][COL], int row, int col)//�Ƿ�Ӯ��  ���Ӯ ����*
                                                        //����Ӯ  ����#
                                                         //��������ƽ�� ����Q//�������� ����C
{
	//�ж�����
	int i = 0;
	for (i = 0; i < row; i++) 
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0]!= ' ')
			return arr[i][0];
	}
	//�ж�����
	for (i = 0; i < col; i++) 
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
			return arr[0][i];
	}
	//�жϽ�����
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



int computer_attack(char arr[][COL], int row, int col)//���Խ������壬���ȼ�Ҫ���ڷ��أ��ж��Ƿ������3���壬����������Ӯ
{

	//q=1��ʱ���ʾ�Ѿ�������
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
	//����������
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
	//б��
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
	//б��
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
	int computer_defend(char arr[][COL], int row, int col)//���Է���
	{
		int q = 0;
		//�����������ж�����Ƿ���ҪӮ��
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
		//�ߵ����ﻹ����
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
		//Ʋ
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
	
	