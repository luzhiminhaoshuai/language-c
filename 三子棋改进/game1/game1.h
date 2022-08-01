#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

#define ROW 3
#define COL 3
void menu();//声明游戏菜单

void init_board(char arr[][COL], int row, int col);//棋盘初始化

void display_board(char arr[][COL], int row, int col);//打印棋盘

void game();

void player_move(char arr[][COL], int row, int col);//玩家下棋

void computer_move(char arr[][COL], int row, int col);//电脑随机下棋

int is_full(char arr[][COL], int row, int col);//棋盘是否满了，后面包含进is_win函数里面了

char is_win(char arr[][COL], int row, int col);//是否赢棋  玩家赢 返回*
                                                        //电脑赢  返回#
                                                         //棋盘下满平局 返回Q//继续下棋 返回C

int computer_attack(char arr[ROW][COL], int row, int col);//电脑进攻

int computer_defend(char arr[ROW][COL], int row, int col);//电脑防守






