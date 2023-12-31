 #define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//地雷的总数
#define COUNT 10

#define ROW 9//扫雷的行数
#define COL 9//扫雷的列数

#define ROWS ROW+2//需要创建的二维数组的行数
#define COLS COL+2//需要创建的二维数组的列数

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col, int count);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
//————————————————
//版权声明：本文为CSDN博主「2021dragon」的原创文章，遵循CC 4.0 BY - SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https ://blog.csdn.net/chenlong_cxy/article/details/113125481
