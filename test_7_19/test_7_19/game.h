 #define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//���׵�����
#define COUNT 10

#define ROW 9//ɨ�׵�����
#define COL 9//ɨ�׵�����

#define ROWS ROW+2//��Ҫ�����Ķ�ά���������
#define COLS COL+2//��Ҫ�����Ķ�ά���������

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//������
void SetMine(char mine[ROWS][COLS], int row, int col, int count);
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//��������������������������������
//��Ȩ����������ΪCSDN������2021dragon����ԭ�����£���ѭCC 4.0 BY - SA��ȨЭ�飬ת���븽��ԭ�ĳ������Ӽ���������
//ԭ�����ӣ�https ://blog.csdn.net/chenlong_cxy/article/details/113125481
