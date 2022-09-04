#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define ROW 9
#define COL 9//雷盘大小
#define ROWS ROW+2
#define COLS COL+2
#define MINENUMS 10//布置雷数
void game();

void init_board(char board[][COLS], int rows, int cols, char set);

void display_board(char board[][COLS], int row, int col);

void set_mine(char board[][COLS], int row, int col);

void find_mine(char mine[][COLS], char show[][COLS], int row, int col);