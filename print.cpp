#include <stdio.h>
#include "print.h"
#define SIZE 8
int countWhite(char map[SIZE][SIZE]) {
	int i, j, count = 0;
	for (i = 0; i<SIZE; i++)
		for (j = 0; j<SIZE; j++) {
			if (map[i][j] == 'w') count++;
		}
	return count;
}

int countBlack(char map[SIZE][SIZE]) {
	int i, j, count = 0;
	for (i = 0; i<SIZE; i++)
		for (j = 0; j<SIZE; j++) {
			if (map[i][j] == 'b') count++;
		}
	return count;
}

void printResult(char map[SIZE][SIZE]) {
	int white = countWhite(map);
	int black = countBlack(map);
	if (white>black) outtextxy(0, 410, "The WHITE player has won!");
	else if (black>white) outtextxy(0,410,"The BLACK player has won!");
	else if (black == white) outtextxy(0, 410, "No one has won!");
	char counter[128];
	sprintf(counter, "Black: %d White: %d", black, white);
	outtextxy(0, 450, counter);
	delay(2500);
}

void drowmap(char map[SIZE][SIZE]) {
	initwindow(400, 500, "othello");
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(200, 200, 1);
	for (int i = 0; i < 8; i++) {
		line(0, 50 * i, 400, 50 * i);
		line(50 * i, 0, 50 * i, 400);
	}
	for (int i = 0; i<SIZE; i++)
		for (int j = 0; j < SIZE; j++) {
			if (map[i][j] == 'w') {
				circle(i * 50 + 25, j * 50 + 25, 22);
				setfillstyle(SOLID_FILL, WHITE);
				floodfill(i * 50 + 30, j * 50 + 30, WHITE);
			}
			if (map[i][j] == 'b') {
				circle(i * 50 + 25, j * 50 + 25, 22);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(i * 50 + 30, j * 50 + 30, WHITE);
			}
		}
	int white = countWhite(map);
	int black = countBlack(map);
	char counter[128];
	sprintf(counter, "Black: %d White: %d", black, white);
	outtextxy(0, 450,counter);
	delay(1500);

}

void drowMap_(char map[SIZE][SIZE]) {
	initwindow(400, 500, "othello");
	setfillstyle(SOLID_FILL, CYAN);
	floodfill(200, 200, 1);
	for (int i = 0; i < 8; i++) {
		line(0, 50 * i, 400, 50 * i);
		line(50 * i, 0, 50 * i, 400);
	}
	for (int i = 0; i<SIZE; i++)
		for (int j = 0; j < SIZE; j++) {
			if (map[i][j] == 'w') {
				circle(i * 50 + 25, j * 50 + 25, 22);
				setfillstyle(SOLID_FILL, WHITE);
				floodfill(i * 50 + 30, j * 50 + 30, WHITE);
			}
			if (map[i][j] == 'b') {
				circle(i * 50 + 25, j * 50 + 25, 22);
				setfillstyle(SOLID_FILL, BLACK);
				floodfill(i * 50 + 30, j * 50 + 30, WHITE);
			}
		}
}