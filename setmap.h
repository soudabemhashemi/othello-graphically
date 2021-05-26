#pragma once
#include <stdio.h>
#define SIZE 8
void playOnMap(char turn, char elseTurn, int pos[2],
	char map[SIZE][SIZE], int path[8]);
