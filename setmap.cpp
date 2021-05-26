#include <stdio.h>
#include "setmap.h"
#include"movement.h"
#define SIZE 8
void playOnMap(char turn, char elseTurn, int pos[2],
	char map[SIZE][SIZE], int path[8]) {
	map[pos[0]][pos[1]] = turn;
	if (path[2] == 1) moveRight(turn, elseTurn, pos, map);
	if (path[3] == 1) moveLeft(turn, elseTurn, pos, map);
	if (path[0] == 1) moveDown(turn, elseTurn, pos, map);
	if (path[1] == 1) moveUp(turn, elseTurn, pos, map);
	if (path[4] == 1) moveUpRight(turn, elseTurn, pos, map);
	if (path[6] == 1) moveDownRight(turn, elseTurn, pos, map);
	if (path[7] == 1) moveUpLeft(turn, elseTurn, pos, map);
	if (path[5] == 1) moveDownLeft(turn, elseTurn, pos, map);
}
/*if a way can move on it move toward*/