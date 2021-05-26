#include <stdio.h>
#include "checkgame.h"
#include "validation.h"
#define SIZE 8
bool isEndOfGame(char turn, char elseTurn, char map[SIZE][SIZE]) {
	int i, j;
	for (i = 0; i<SIZE; i++)   //if all choises are full
		for (j = 0; j<SIZE; j++) {
			if (map[i][j] == '.') return false;
		}

	return true;
}

