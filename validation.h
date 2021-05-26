#pragma once
#include <stdio.h>
#include <stdbool.h>
#define SIZE 8

bool isValidInput(int path[8], int pos[2], char map[SIZE][SIZE]);
bool isValid(int path[8]);
bool hasChoise(char turn, char elseTurn, char map[SIZE][SIZE]);
void findLegalPath(char turn, char elseTurn, int pos[2],
	char map[SIZE][SIZE], int path[8]);
