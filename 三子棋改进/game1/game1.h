#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<string.h>
#include<stdlib.h>

#define ROW 3
#define COL 3
void menu();//������Ϸ�˵�

void init_board(char arr[][COL], int row, int col);//���̳�ʼ��

void display_board(char arr[][COL], int row, int col);//��ӡ����

void game();

void player_move(char arr[][COL], int row, int col);//�������

void computer_move(char arr[][COL], int row, int col);//�����������

int is_full(char arr[][COL], int row, int col);//�����Ƿ����ˣ����������is_win����������

char is_win(char arr[][COL], int row, int col);//�Ƿ�Ӯ��  ���Ӯ ����*
                                                        //����Ӯ  ����#
                                                         //��������ƽ�� ����Q//�������� ����C

int computer_attack(char arr[ROW][COL], int row, int col);//���Խ���

int computer_defend(char arr[ROW][COL], int row, int col);//���Է���






