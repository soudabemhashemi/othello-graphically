#include "graphics.h"
#include<stdio.h>
#include "input.h"
#include "validation.h"
#include "setmap.h"
#include "print.h"
#include "checkgame.h"
#include <iostream>

#define SIZE 8





int main() {
	
	int pos[2];
	char map[SIZE][SIZE];
	initializeMap(map);
	drowMap_(map);
	char turn = 'b';
	bool endGame = false;

	while (!endGame) {
		int path[8] = { 0,0,0,0,0,0,0,0 };  //array of way that can move on
	    getInput(turn,pos,map);
		char elseTurn;
		if (turn == 'b') elseTurn = 'w';
		else elseTurn = 'b';
		findLegalPath(turn, elseTurn, pos, map, path);  /*if a way can move change its to 1*/
		if (isValidInput(path, pos, map)) {
			playOnMap(turn, elseTurn, pos, map, path);
			drowmap(map);
			if (turn == 'b') { turn = 'w'; elseTurn = 'b'; }
			else { turn = 'b'; elseTurn = 'w'; }
		}
		endGame = isEndOfGame(turn, elseTurn, map);
	}
	printResult(map);  //do end of game
	return 0;
}
