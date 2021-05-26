#include <stdio.h>
#include"validation.h"
#define SIZE 8
bool isValidInput(int path[8], int pos[2], char map[SIZE][SIZE]) {
	int i;
	if (map[pos[0]][pos[1]] != '.') {      //if its full
		printf("Your input isnt valid.Try again!\n");
		return false;
	}
	for (i = 0; i<8; i++)
		if (path[i] == 1) return true;
	printf("Your input isnt valid.Try again!\n");
	return false;
}

bool isValid(int path[8]) {   //if taht choise dosent change anything
	int i;
	for (i = 0; i<8; i++)
		if (path[i] == 1) return true;
	return false;
}

bool hasChoise(char turn, char elseTurn, char map[SIZE][SIZE]) {
	int i, j;
	for (i = 0; i<SIZE; i++)
		for (j = 0; j<SIZE; j++) {
			if (map[i][j] == '.') {
				int path[8] = { 0,0,0,0,0,0,0,0 };
				int pos[2] = { i,j };
				findLegalPath(turn, elseTurn, pos, map, path);
				if (isValid(path))  return true;
			}
		}
	return false;
}

void findLegalPath(char turn, char elseTurn, int pos[2],
	char map[SIZE][SIZE], int path[8]) {
	int i, j;
	if (map[pos[0] + 1][pos[1]] == elseTurn) {
		for (i = pos[0] + 2; i<SIZE; i++) {
			if (map[i][pos[1]] == turn) path[0] = 1;
			else if (map[i][pos[1]] == '.') break;
		}
	}
	if (map[pos[0] - 1][pos[1]] == elseTurn) {
		for (i = pos[0] - 2; i>-1; i--) {
			if (map[i][pos[1]] == turn) path[1] = 1;
			else if (map[i][pos[1]] == '.') break;
		}
	}
	if (map[pos[0]][pos[1] + 1] == elseTurn) {
		for (i = pos[1] + 2; i < SIZE; i++) {
			if (map[pos[0]][i] == turn)
				 path[2] = 1;
			else if (map[pos[0]][i] == '.') 
				 break;
		}
	}
	if (map[pos[0]][pos[1] - 1] == elseTurn) {
		for (i = pos[1] - 2; i>-1; i--) {
			if (map[pos[0]][i] == turn) path[3] = 1;
			else if (map[pos[0]][i] == '.') break;
		}
	}
	if (map[pos[0] - 1][pos[1] + 1] == elseTurn) {
		j = pos[1] + 2;
		for (i = pos[0] - 2; i>-1; i--) {
			if (j >= SIZE)break;
			else if (map[i][j] == turn) path[4] = 1;
			else if (map[i][j] == '.') break;
			j++;
		}
	}
	if (map[pos[0] + 1][pos[1] - 1] == elseTurn) {
		j = pos[1] - 2;
		for (i = pos[0] + 2; i<SIZE; i++) {
			if (j <= 0)break;
			else if (map[i][j] == turn) path[5] = 1;
			else if (map[i][j] == '.') break;
			j--;
		}
	}
	if (map[pos[0] + 1][pos[1] + 1] == elseTurn) {
		i = pos[0] + 2;
		for (j = pos[1] + 2; j<SIZE; j++) {
			if (i >= SIZE)break;
			else if (map[i][j] == turn) path[6] = 1;
			else if (map[i][j] == '.') break;
			i++;
		}
	}
	if (map[pos[0] - 1][pos[1] - 1] == elseTurn) {
		i = pos[0] - 2;
		for (j = pos[1] - 2; j>-1; j--) {
			if (i <= 0)break;
			else if (map[i][j] == turn) path[7] = 1;
			else if (map[i][j] == '.') break;
			i--;
		}
	}
}

