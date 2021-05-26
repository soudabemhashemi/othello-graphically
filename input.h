#pragma once
#include<stdio.h>
#include "graphics.h"
#include "print.h"
#define SIZE 8

void initializeMap(char map[SIZE][SIZE]);
void getInput(char turn, int pos[2], char map[SIZE][SIZE]);