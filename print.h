#pragma once
#include <stdio.h>
#include "graphics.h"
#define SIZE 8

int countWhite(char map[SIZE][SIZE]);
int countBlack(char map[SIZE][SIZE]);
void printResult(char map[SIZE][SIZE]);
void drowmap(char map[SIZE][SIZE]);
void drowMap_(char map[SIZE][SIZE]);