#include<stdio.h>
#include"movement.h"
#define SIZE 8
void moveDown(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i;
	for (i = pos[0] + 1; i<SIZE; i++) {
		if (map[i][pos[1]] == elseTurn) map[i][pos[1]] = turn;
		else break;
	}
}
void moveUp(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i;
	for (i = pos[0] - 1; i>-1; i--) {
		if (map[i][pos[1]] == elseTurn) map[i][pos[1]] = turn;
		else break;
	}
}
void moveRight(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i;
	for (i = pos[1] + 1; i<SIZE; i++) {
		if (map[pos[0]][i] == elseTurn) map[pos[0]][i] = turn;
		else break;
	}
}
void moveLeft(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i;
	for (i = pos[1] - 1; i>-1; i--) {
		if (map[pos[0]][i] == elseTurn) map[pos[0]][i] = turn;
		else break;
	}
}
void moveUpRight(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i, j;
	j = pos[1] + 1;
	for (i = pos[0] - 1; i>-1; i--) {
		if (j >= SIZE)break;
		else if (map[i][j] == elseTurn) map[i][j] = turn;
		else break;
		j++;
	}
}
void moveDownLeft(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i, j;
	j = pos[1] - 1;
	for (i = pos[0] + 1; i<SIZE; i++) {
		if (j<0)break;
		else if (map[i][j] == elseTurn) map[i][j] = turn;
		else break;
		j--;
	}
}
void moveDownRight(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i, j;
	i = pos[0] + 1;
	for (j = pos[1] + 1; j<SIZE; j++) {
		if (i >= SIZE)break;
		else if (map[i][j] == elseTurn) map[i][j] = turn;
		else break;
		i++;
	}
}
void moveUpLeft(char turn, char elseTurn, int pos[2], char map[SIZE][SIZE]) {
	int i, j;
	i = pos[0] - 1;
	for (j = pos[1] - 1; j>-1; j--) {
		if (i<0)break;
		else if (map[i][j] == elseTurn) map[i][j] = turn;
		else break;
		i--;
	}
}
