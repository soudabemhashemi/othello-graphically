#pragma once
#include<stdio.h>
#define SIZE 8
void moveDown(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveUp(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveRight(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveLeft(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveUpRight(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveDownLeft(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveDownRight(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
void moveUpLeft(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]);
