//#include"game.h"
////��ʼ������
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < cols; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
////��ӡ����
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("--------------ɨ����Ϸ----------------\n");
//	for (i = 0; i <= row; i++)
//		printf("%d ", i);
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("--------------ɨ����Ϸ----------------\n");
//}
////������
//void SetMine(char mine[ROWS][COLS], int row, int col, int count)
//{
//	while (count)
//	{
//		int x = rand() % ROW + 1;
//		int y = rand() % COL + 1;
//		if (mine[x][y] == '0')
//		{
//			mine[x][y] = '1';
//			count--;
//		}
//	}
//}
////�����������Χ8��������ڵ�������
//int GetMineCount(char mine[ROWS][COLS], int x, int y)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		int j = 0;
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			sum += mine[i][j];
//		}
//	}
//	return sum - 9 * '0';
//}
////�ж���Χ�׵�����Ϊ0��������Χ�׵Ĵ��������ʵ��ɨ���е�չ��һƬ����
//void JudgeAround(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = x - 1; i <= x + 1; i++)
//	{
//		for (j = y - 1; j <= y + 1; j++)
//		{
//			if (show[i][j] != ' ' && i != 0 && i != ROWS - 1 && j != 0 && j != COLS - 1)
//			{
//				int count = GetMineCount(mine, i, j);
//				show[i][j] = count + '0';
//				if (show[i][j] == '0')
//				{
//					show[i][j] = ' ';
//					JudgeAround(mine, show, i, j);
//				}
//			}
//		}
//	}
//}
////����ʣ��δ֪�������������������׵�����ʱ��ʾɨ�׳ɹ�
//int Remain(char show[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <= col; j++)
//		{
//			if (show[i][j] == '*')
//				count++;
//		}
//	}
//	return count;
//}
////�Ų���
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int ret = 0;
//	while (ret != COUNT)
//	{
//		printf("������Ҫ�Ų������:>");
//		int x = 0;
//		int y = 0;
//		scanf("%d%d", &x, &y);
//		//�ж���������Ϸ���
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			//�жϸ����괦�ǲ�����
//			if (mine[x][y] == '1')
//			{
//				printf("���ź����㱻ը���ˣ�\n");
//				DisplayBoard(mine, ROW, COL);
//				break;
//			}
//			else
//			{
//				//�����ף�ͳ�Ƹ�������Χ�׵ĸ���
//				int count = GetMineCount(mine, x, y);
//				show[x][y] = count + '0';//��ŵ��������ַ�
//				if (show[x][y] == '0')//�����������Χ�׵�����Ϊ0
//				{
//					show[x][y] = ' ';
//					JudgeAround(mine, show, x, y);
//				}
//				system("cls");
//				DisplayBoard(show, ROW, COL);
//			}
//		}
//		else
//		{
//			printf("����Ƿ������������룡\n");
//		}
//		ret = Remain(show, ROW, COL);
//	}
//	if (ret == COUNT)
//	{
//		printf("��ϲ�㣬���׳ɹ���\n");
//		DisplayBoard(mine, ROW, COL);
//	}
//}
////��������������������������������
////��Ȩ����������ΪCSDN������2021dragon����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
////ԭ�����ӣ�https ://blog.csdn.net/chenlong_cxy/article/details/113125481