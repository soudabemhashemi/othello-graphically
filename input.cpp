#include<stdio.h>
#include"input.h"
#define SIZE 8
void initializeMap(char map[SIZE][SIZE]) {
	int i, j;
	 for(i=0;i<SIZE;i++)
	   for(j=0;j<SIZE;j++){
	      if((i==3&&j==3) || (i==4&&j==4)) map[i][j]='w';
	      else if((i==3&&j==4) || (i==4&&j==3)) map[i][j]='b';
	      else   map[i][j]='.';
	   }
}

void getInput(char turn, int pos[2], char map[SIZE][SIZE]) {
	int a = 10; int b = 10; int c = 40; int d = 40;
	rectangle(10, 10, 40, 40);
	setfillstyle(SOLID_FILL, BLUE);
	floodfill(15, 15, WHITE);

	while (1) {
		if (turn == 'b')outtextxy(0, 400, "BLACk players turn");
		if (turn == 'w')outtextxy(0, 400, "WHITE players turn");
		char choise = (char)getchar();
		setcolor(LIGHTCYAN);
		rectangle(a, b, c, d);
		setfillstyle(SOLID_FILL, getcolor());
		floodfill(a + 5, b + 5, getcolor());
		if (choise == 's') {
			if (b + 50 < 400 && d + 50 < 400 && b + 50 > 0 && d + 50 > 0) {
				b += 50;
				d += 50;
			}
		}
		else if (choise == 'd') {
			if (a + 50 < 400 && c + 50 < 400 && a + 50 > 0 && c + 50 > 0) {
				a += 50;
				c += 50;
			}
		}
		else if (choise == 'a') {
			if (a - 50 < 400 && c - 50 < 400 && a - 50 > 0 && c - 50 > 0) {
				a -= 50;
				c -= 50;
			}
		}
		else if (choise == 'w') {
			if (b - 50 < 400 && d - 50 < 400 && b - 50 > 0 && d - 50 > 0) {
				b -= 50;
				d -= 50;
			}
		}
		else if (choise == ' ') {
			pos[0] = a / 50;
			pos[1] = b / 50;
			return;
		}
		drowMap_(map);
		setcolor(WHITE);
		rectangle(a, b, c, d);
		setfillstyle(SOLID_FILL, BLUE);
		floodfill(a + 5, b + 5, WHITE);
	}
}