#pragma once
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE 10//80   80ŷʵ
#define SIZEX ROW*COL-MINE
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void Initboard(char board[ROWS][COLS], int row, int col, char set);
void Printboard(char board[ROWS][COLS], int rpws, int cols);
void setmine(char mine[ROWS][COLS], int row, int col);
void showmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int Get_mine_count(char mine[ROWS][COLS], int x, int y);
void Spread(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y);