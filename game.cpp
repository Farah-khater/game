#include <iostream>
#include <conio.h>
using namespace std;


void FillMyMatrix(char x[][3000], int& firstcol, int& lastcol)
{
	for (int r = 0; r < 30; r++)
	{
		for (int c = firstcol; c < lastcol; c++)
		{
			x[r][c] = ' ';
		}

	}

	for (int c = firstcol; c < lastcol; c++)
	{
		x[0][c] = 220;
		x[27][c] = 220;
	}



	x[15][870] = 177;
	x[15][871] = 177;
	x[15][872] = 177;
	x[15][873] = 177;
	x[15][874] = 177;
	x[15][875] = 177;
	x[15][876] = 177;
	x[15][877] = 177;
}
void drawbatbullet(char x[][3000], int& stopl)
{
	if (stopl == 1)
	{
		x[9][310] = 233; x[11][310] = 233; x[13][310] = 233; x[15][310] = 233;
		x[17][310] = 233; x[19][310] = 233; x[21][310] = 233; x[23][310] = 233;
		x[25][310] = 233;

		x[10][313] = 233; x[12][313] = 233; x[14][313] = 233; x[16][313] = 233;
		x[18][313] = 233; x[20][313] = 233; x[22][313] = 233; x[24][313] = 233;

	}
}
void herodie(int& CH, int& RH, int& stopl, int& flagdie, int& win, char x[][3000])
{
	if (CH < 310 && CH + 14>313 && stopl == 1)
	{
		flagdie = 1;
	}
	if (CH >= 516 && CH <= 596 && RH > 15)
	{
		flagdie = 1;
	}

	if (CH < 361 && CH + 14>362 && stopl == 0 || CH < 391 && CH + 14>392 && stopl == 1)
	{
		flagdie = 1;
	}
	if (CH >= 879 && RH <= 15)
	{
		win = 1;
	}
}
void drawelevator(char x[][3000], int& celevator, int& relevator)
{
	x[relevator][celevator + 1] = 205;
	x[relevator][celevator + 1] = 205;
	x[relevator][celevator + 2] = 205;
	x[relevator][celevator + 3] = 205;
	x[relevator][celevator + 4] = 205;
	x[relevator][celevator + 5] = 205;
	x[relevator][celevator + 6] = 205;
	x[relevator][celevator + 7] = 205;
	x[relevator][celevator + 8] = 205;
	x[relevator][celevator + 9] = 205;
	x[relevator][celevator + 10] = 205;
	x[relevator][celevator + 11] = 205;
	x[relevator][celevator + 12] = 205;
	x[relevator][celevator + 13] = 205;
	x[relevator][celevator + 14] = 205;
	x[relevator][celevator + 15] = 205;
	x[relevator][celevator + 16] = 205;
	x[relevator][celevator + 17] = 205;
	x[relevator][celevator + 18] = 205;
	x[relevator][celevator + 19] = 205;


}

void CoutMyMatrixToScreen(char x[][3000], int& firstcol, int& lastcol)
{
	system("cls");
	for (int r = 0; r < 30; r++)
	{
		for (int c = firstcol; c < lastcol; c++)
		{
			cout << x[r][c];
		}
	}
}
void drawhero(int& RH, int& CH, int& flaghero2, char x[][3000])
{
	if (flaghero2 == 0)
	{

		x[RH][CH + 2] = '_';
		x[RH][CH + 3] = '_';
		x[RH][CH + 4] = '_';
		x[RH + 1][CH] = '/';
		x[RH + 1][CH + 2] = 'o';
		x[RH + 1][CH + 4] = 'x';
		x[RH + 1][CH + 6] = 92;
		x[RH + 2][CH + 0] = 92;
		x[RH + 2][CH + 1] = ' ';
		x[RH + 2][CH + 2] = '_';
		x[RH + 2][CH + 3] = '_';
		x[RH + 2][CH + 4] = '>';
		x[RH + 2][CH + 5] = '_';
		x[RH + 2][CH + 6] = '/';
		x[RH + 3][CH + 1] = '/';
		x[RH + 3][CH + 5] = 92;
		x[RH + 3][CH + 10] = '_';
		x[RH + 3][CH + 11] = '_';
		x[RH + 3][CH + 12] = '_';
		x[RH + 4][CH + 0] = '|';
		x[RH + 4][CH + 1] = 92;
		x[RH + 4][CH + 6] = '|';
		x[RH + 4][CH + 9] = '|';
		x[RH + 4][CH + 12] = '|';
		x[RH + 4][CH + 13] = '>';
		x[RH + 4][CH + 14] = '0';
		x[RH + 5][CH + 0] = '|';
		x[RH + 5][CH + 1] = ' ';
		x[RH + 5][CH + 2] = 92;
		x[RH + 5][CH + 3] = 'E';
		x[RH + 5][CH + 6] = '|';
		x[RH + 5][CH + 7] = '-';
		x[RH + 5][CH + 8] = '-';
		x[RH + 5][CH + 9] = '/';
		x[RH + 6][CH + 0] = '|';

		x[RH + 6][CH + 6] = '|';
		x[RH + 7][CH + 0] = '(';
		x[RH + 7][CH + 1] = 92;
		x[RH + 7][CH + 6] = '(';
		x[RH + 7][CH + 7] = 92;

	}

	if (flaghero2 == 1)
	{

		x[RH][CH + 11] = '_';
		x[RH][CH + 12] = '_';
		x[RH][CH + 13] = '_';
		x[RH + 1][CH + 9] = '/';
		x[RH + 1][CH + 11] = 'o';
		x[RH + 1][CH + 12] = ' ';
		x[RH + 1][CH + 13] = 'x';
		x[RH + 1][CH + 14] = ' ';
		x[RH + 1][CH + 15] = 92;
		x[RH + 2][CH + 9] = 92;
		x[RH + 2][CH + 10] = ' ';
		x[RH + 2][CH + 11] = '_';
		x[RH + 2][CH + 12] = '<';
		x[RH + 2][CH + 13] = '_';
		x[RH + 2][CH + 14] = '_';
		x[RH + 2][CH + 15] = '/';
		x[RH + 3][CH + 2] = '_';
		x[RH + 3][CH + 3] = '_';
		x[RH + 3][CH + 4] = '_';
		x[RH + 3][CH + 10] = '/';
		x[RH + 3][CH + 14] = 92;
		x[RH + 4][CH + 0] = '0';
		x[RH + 4][CH + 1] = '<';
		x[RH + 4][CH + 2] = '|';
		x[RH + 4][CH + 5] = '|';
		x[RH + 4][CH + 9] = '|';

		x[RH + 4][CH + 14] = '/';
		x[RH + 4][CH + 15] = '|';
		x[RH + 5][CH + 6] = 92;
		x[RH + 5][CH + 7] = '-';
		x[RH + 5][CH + 8] = '-';
		x[RH + 5][CH + 9] = '|';
		x[RH + 5][CH + 10] = ' ';
		x[RH + 5][CH + 11] = ' ';
		x[RH + 5][CH + 12] = 'E';
		x[RH + 5][CH + 13] = '/';
		x[RH + 5][CH + 14] = ' ';
		x[RH + 5][CH + 15] = '|';
		x[RH + 6][CH + 9] = '|';
		x[RH + 6][CH + 15] = '|';
		x[RH + 7][CH + 9] = '/';
		x[RH + 7][CH + 10] = ')';
		x[RH + 7][CH + 14] = '/';
		x[RH + 7][CH + 15] = ')';

	}
}

void drawbullet(char x[][3000], int& cbullet, int& rbullet, int& flagshoot)
{
	if (flagshoot == 1)
	{
		x[rbullet][cbullet] = '0';

	}

}



void shootbullet(char x[][3000], int& cbullet, int& rbullet, int& flagshoot, int& RH, int& CH, int& ce1, int& flagenemy1)
{
	if (flagshoot == 1)
	{
		cbullet += 2;
		if (cbullet >= ce1 && rbullet >= 7)
		{
			flagenemy1 = 0;

		}
		if (cbullet >= 3000)
		{
			flagshoot = 0;
			rbullet = RH + 6;
			cbullet = CH + 16;
		}
	}
}

void bulletMulti(int RH, int CH, int bulletct, int bullets[][2], char x[][3000], int& flagboss)
{
	int r; int ct = 0;
	for (r = bulletct; r < 80; r++)
	{
		bullets[r][0] = RH + 4;
		bullets[r][1] = CH + 14;
	}
	for (r = 0; r < bulletct; r++)
	{
		bullets[r][1]++;
		x[bullets[r][0]][bullets[r][1]] = '*';

		if (x[bullets[r][0]][bullets[r][1] + 1] != ' ')
		{
			bullets[r][0] = 0;
			bullets[r][1] = 0;
		}
		if (x[bullets[r][0]][bullets[r][1] + 1] != ' ')
		{
			ct++;
		}
		if (ct == 10)
		{
			flagboss = 0;
		}
	}


}


void movehero(int& RH, int& CH, char& move, int& flaghero2, int& flaggrav, char x[][3000], int& firstcol, int& lastcol, int& flagshoot, int& rbullet, int& cbullet, int& jumpherolader, int& go, int& bulletct)
{
	if (x[RH + 8][CH] != ' ') {
		if (move == 'k' && x[RH - 2][CH] == ' ')
		{
			flaggrav = 2;
		}
	}

	if (x[RH + 8][CH] != ' ') {
		if (move == 'j' && x[RH - 2][CH] == ' ')
		{
			flaggrav = 3;
		}
	}
	if (x[RH + 8][CH] != ' ') {
		if (move == 'h' && x[RH - 2][CH] == ' ')
		{
			flaggrav = 4;
		}
	}
	if (move == 'a' && CH > 1)
	{
		CH -= 5;
		firstcol -= 5;
		lastcol -= 5;
		flaghero2 = 1;

	}
	else if (move == 'd')
	{
		CH += 5;
		firstcol += 5;
		lastcol += 5;
		flaghero2 = 0;

	}
	if (move == 'f')
	{
		flagshoot = 1;
		cbullet = CH + 14;
		rbullet = RH + 2;
	}
	if (move == 'w' && jumpherolader == 1)
	{
		go = 1;
	}
	else {
		go = 0;
	}
	if (move == 'e')
	{
		bulletct++;
	}
}

void going(char x[][3000], int& clader, int& CH, int& jumpherolader, int& RH, int& go)
{
	if (go == 1)
	{
		RH -= 5;
		go = 0;
	}
}

void gravityjump(int& RH, int& CH, int flaghero2, char x[][3000], int& flagGrav)
{
	if (flagGrav == 1) {
		if (x[RH + 8][CH] == ' ') {
			drawhero(RH, CH, flaghero2, x);
			RH++;
		}

	}
}

void jump(int& RH, int& CH, int& flaggrav, char x[][3000], int ctjump, int flaghero2)
{
	if (flaggrav == 2) {
		if (x[RH - 3][CH] != ' ') {
			flaggrav = 1;

		}
		drawhero(RH, CH, flaghero2, x);
		RH--;
		CH++;

	}
	if (flaggrav == 3) {
		if (x[RH - 3][CH] != ' ') {
			flaggrav = 1;

		}
		drawhero(RH, CH, flaghero2, x);
		RH--;

		if (ctjump == 5) {
			flaggrav = 1;

		}
	}
	if (flaghero2 == 1)
	{
		if (flaggrav == 4) {
			if (x[RH - 3][CH] != ' ') {
				flaggrav = 1;
				ctjump = 0;
			}
			drawhero(RH, CH, flaghero2, x);
			RH--;
			CH--;

		}

	}

}

void drawfloat(int& rowfloat, int& colfloat, int& rowfloat2, int& colfloat2, char x[][3000])
{
	for (int i = 0; i < 70; i++)
	{
		x[rowfloat][colfloat + i] = 220;
	}

	for (int j = 0; j < 30; j++)
	{
		x[rowfloat2][colfloat2 + j] = 220;
	}
	for (int j = 30; j < 40; j++)
	{
		x[rowfloat2][colfloat2 + j] = ' ';
	}
	for (int j = 40; j < 80; j++)
	{
		x[rowfloat2][colfloat2 + j] = 220;
	}
}
void drawbomb(int& rbomb, int& cbomb, char x[][3000])
{
	for (int i = 0;i < 80;i++)
	{
		x[rbomb][cbomb + i] = 153;


	}



}

void drawenemy1(int& re1, int& ce1, char x[][3000], int& flagenemy1)
{
	if (flagenemy1 == 1)
	{

		x[re1][ce1 + 6] = '_';
		x[re1][ce1 + 7] = '_';
		x[re1][ce1 + 8] = '_';
		x[re1][ce1 + 9] = '_';
		x[re1][ce1 + 10] = ' ';
		x[re1][ce1 + 11] = '(';
		x[re1][ce1 + 12] = '(';
		x[re1][ce1 + 13] = '(';
		x[re1][ce1 + 14] = '(';
		x[re1][ce1 + 15] = '(';
		x[re1 + 1][ce1 + 5] = '/';
		x[re1 + 1][ce1 + 10] = 92;
		x[re1 + 1][ce1 + 11] = 92;
		x[re1 + 1][ce1 + 12] = '0';
		x[re1 + 1][ce1 + 14] = '0';
		x[re1 + 1][ce1 + 15] = ' ';
		x[re1 + 1][ce1 + 16] = '|';
		x[re1 + 2][ce1 + 4] = '/';
		x[re1 + 2][ce1 + 5] = '_';
		x[re1 + 2][ce1 + 6] = '.';
		x[re1 + 2][ce1 + 7] = '-';
		x[re1 + 2][ce1 + 8] = '-';
		x[re1 + 2][ce1 + 9] = '-';
		x[re1 + 2][ce1 + 10] = '-';
		x[re1 + 2][ce1 + 11] = 92;
		x[re1 + 2][ce1 + 12] = 92;
		x[re1 + 2][ce1 + 13] = '^';
		x[re1 + 2][ce1 + 14] = '_';
		x[re1 + 2][ce1 + 15] = ',';
		x[re1 + 2][ce1 + 16] = '-';
		x[re1 + 2][ce1 + 17] = '-';
		x[re1 + 2][ce1 + 18] = '-';
		x[re1 + 3][ce1] = '<';
		x[re1 + 3][ce1 + 1] = '-';
		x[re1 + 3][ce1 + 2] = '-';
		x[re1 + 3][ce1 + 3] = '(';
		x[re1 + 3][ce1 + 4] = 92;
		x[re1 + 3][ce1 + 5] = '_';
		x[re1 + 3][ce1 + 6] = '|';
		x[re1 + 3][ce1 + 7] = '_';
		x[re1 + 3][ce1 + 8] = '_';
		x[re1 + 3][ce1 + 11] = '_';
		x[re1 + 3][ce1 + 12] = '<';
		x[re1 + 3][ce1 + 13] = '_';
		x[re1 + 3][ce1 + 14] = '_';
		x[re1 + 3][ce1 + 15] = '|';
		x[re1 + 3][ce1 + 16] = '_';
		x[re1 + 3][ce1 + 17] = '_';
		x[re1 + 3][ce1 + 18] = '/';
		x[re1 + 4][ce1 + 4] = 92;
		x[re1 + 4][ce1 + 11] = '/';
		x[re1 + 4][ce1 + 12] = '|';
		x[re1 + 4][ce1 + 15] = '`';
		x[re1 + 4][ce1 + 16] = '/';
		x[re1 + 4][ce1 + 17] = '`';
		x[re1 + 5][ce1 + 5] = '`';
		x[re1 + 5][ce1 + 6] = '`';
		x[re1 + 5][ce1 + 7] = '`';
		x[re1 + 5][ce1 + 8] = '`';
		x[re1 + 5][ce1 + 9] = '`';
		x[re1 + 5][ce1 + 10] = '`';
		x[re1 + 5][ce1 + 11] = ' ';
		x[re1 + 5][ce1 + 12] = '|';
		x[re1 + 5][ce1 + 13] = '_';
		x[re1 + 5][ce1 + 14] = '_';
		x[re1 + 5][ce1 + 15] = 'I';
		x[re1 + 5][ce1 + 16] = '|';
		x[re1 + 6][ce1 + 11] = '_';
		x[re1 + 6][ce1 + 12] = '|';
		x[re1 + 6][ce1 + 13] = '|';
		x[re1 + 6][ce1 + 14] = ' ';
		x[re1 + 6][ce1 + 15] = '_';
		x[re1 + 6][ce1 + 16] = '|';
		x[re1 + 7][ce1 + 10] = '/';
		x[re1 + 7][ce1 + 11] = '_';
		x[re1 + 7][ce1 + 12] = '_';
		x[re1 + 7][ce1 + 13] = '/';
		x[re1 + 7][ce1 + 14] = '_';
		x[re1 + 7][ce1 + 15] = '_';
		x[re1 + 7][ce1 + 16] = '|';

	}
}

void drawenemy2(int re2, int ce2, char x[][3000])
{
	x[re2][ce2 + 2] = '/';
	x[re2][ce2 + 3] = 92;
	x[re2][ce2 + 21] = '/';
	x[re2][ce2 + 22] = 92;
	x[re2 + 1][ce2 + 1] = '/';
	x[re2 + 1][ce2 + 3] = 92;
	x[re2 + 1][ce2 + 5] = '.';
	x[re2 + 1][ce2 + 6] = '_';
	x[re2 + 1][ce2 + 9] = '(';
	x[re2 + 1][ce2 + 10] = 92;
	x[re2 + 1][ce2 + 11] = '_';
	x[re2 + 1][ce2 + 12] = '/';
	x[re2 + 1][ce2 + 13] = ')';
	x[re2 + 1][ce2 + 17] = '_';
	x[re2 + 1][ce2 + 18] = '.';
	x[re2 + 1][ce2 + 20] = '/';
	x[re2 + 1][ce2 + 22] = 92;
	x[re2 + 2][ce2 + 1] = '|';
	x[re2 + 2][ce2 + 2] = '.';
	x[re2 + 2][ce2 + 5] = '.';
	x[re2 + 2][ce2 + 7] = '-';
	x[re2 + 2][ce2 + 8] = '-';
	x[re2 + 2][ce2 + 9] = '(';
	x[re2 + 2][ce2 + 10] = '0';
	x[re2 + 2][ce2 + 11] = '^';
	x[re2 + 2][ce2 + 12] = '0';
	x[re2 + 2][ce2 + 13] = ')';
	x[re2 + 2][ce2 + 14] = '-';
	x[re2 + 2][ce2 + 15] = '-';
	x[re2 + 2][ce2 + 17] = '.';
	x[re2 + 2][ce2 + 20] = '.';
	x[re2 + 2][ce2 + 21] = '|';
	x[re2 + 2][ce2 + 22] = ' ';
	x[re2 + 3][ce2 + 2] = 92;
	x[re2 + 3][ce2 + 3] = ',';
	x[re2 + 3][ce2 + 4] = '/';
	x[re2 + 3][ce2 + 7] = ';';
	x[re2 + 3][ce2 + 8] = '=';
	x[re2 + 3][ce2 + 9] = '/';
	x[re2 + 3][ce2 + 11] = '"';
	x[re2 + 3][ce2 + 13] = 92;
	x[re2 + 3][ce2 + 14] = '=';
	x[re2 + 3][ce2 + 15] = ';';
	x[re2 + 3][ce2 + 18] = 92;
	x[re2 + 3][ce2 + 19] = ',';
	x[re2 + 3][ce2 + 20] = '/';
	x[re2 + 4][ce2 + 9] = 92;
	x[re2 + 4][ce2 + 10] = '/';
	x[re2 + 4][ce2 + 12] = '|';
	x[re2 + 4][ce2 + 13] = '/';
	x[re2 + 5][ce2 + 9] = 92;
	x[re2 + 5][ce2 + 10] = '(';
	x[re2 + 5][ce2 + 11] = '|';
	x[re2 + 5][ce2 + 12] = ')';
	x[re2 + 5][ce2 + 13] = '/';
	x[re2 + 6][ce2 + 9] = '"';
	x[re2 + 6][ce2 + 13] = '"';
}

void moveenem2(int& re2, int& ce2, int& pause, char x[][3000])
{

	if (pause == 1)
	{
		re2++;
		if (re2 == 4)
		{
			pause = 2;
		}
	}
	if (pause == 2)
	{
		re2--;
		if (re2 == 2)
		{
			pause = 1;
		}
	}
}
void moveenem1(int& re1, int& ce1, int& pause, char x[][3000])
{

	if (pause == 1)
	{
		ce1--;
		if (ce1 == 140)
		{
			pause = 2;
		}
	}
	if (pause == 2)
	{

		ce1++;
		if (ce1 == 144)
		{
			pause = 1;
		}
	}
}
void drawlader(char x[][3000], int& rlader, int& clader)
{
	for (int i = 0;i < 13;i++)
	{
		x[rlader - i][clader] = 186;
	}
	x[rlader - 3][clader + 1] = 205;x[rlader - 3][clader + 2] = 205;x[rlader - 3][clader + 3] = 205;
	x[rlader - 3][clader + 4] = 205;x[rlader - 3][clader + 5] = 205;x[rlader - 3][clader + 6] = 205;x[rlader - 3][clader + 7] = 205;
	x[rlader - 3][clader + 8] = 205;x[rlader - 3][clader + 9] = 205;x[rlader - 3][clader + 10] = 205;
	x[rlader - 3][clader + 11] = 205;x[rlader - 3][clader + 12] = 205;x[rlader - 3][clader + 13] = 205;x[rlader - 3][clader + 14] = 205;
	x[rlader - 7][clader + 1] = 205;x[rlader - 7][clader + 2] = 205;x[rlader - 7][clader + 3] = 205;
	x[rlader - 7][clader + 4] = 205;x[rlader - 7][clader + 5] = 205;x[rlader - 7][clader + 6] = 205;x[rlader - 7][clader + 7] = 205;
	x[rlader - 7][clader + 8] = 205;x[rlader - 7][clader + 9] = 205;x[rlader - 7][clader + 10] = 205;
	x[rlader - 7][clader + 11] = 205;x[rlader - 7][clader + 12] = 205;x[rlader - 7][clader + 13] = 205;x[rlader - 7][clader + 1] = 205;
	x[rlader - 11][clader + 1] = 205;x[rlader - 11][clader + 2] = 205;x[rlader - 11][clader + 3] = 205;
	x[rlader - 11][clader + 4] = 205;x[rlader - 11][clader + 5] = 205;x[rlader - 11][clader + 6] = 205;x[rlader - 11][clader + 7] = 205;
	x[rlader - 11][clader + 8] = 205;x[rlader - 11][clader + 9] = 205;x[rlader - 11][clader + 10] = 205;
	x[rlader - 11][clader + 11] = 205;x[rlader - 11][clader + 12] = 205;x[rlader - 11][clader + 13] = 205;x[rlader - 11][clader + 14] = 205;

	for (int j = 0;j < 13;j++)
	{
		x[rlader - j][clader + 15] = 186;

	}
}

void moveheroonlader(char x[][3000], int& clader, int& CH, int& jumpherolader)
{
	if (CH > clader && CH + 14 < clader + 20)
	{
		jumpherolader = 1;
	}
	else {
		jumpherolader = 0;
	}
}

void drawstep(int& rstep1, int& cstep1, int& rstep2, int& cstep2, char x[][3000])
{
	x[rstep1][cstep1] = 220;
	x[rstep1 + 1][cstep1] = 220;
	x[rstep1 + 2][cstep1] = 220;
	x[rstep1 + 2][cstep1 - 1] = 220;
	x[rstep1 + 2][cstep1 - 2] = 220;
	x[rstep1 + 2][cstep1 - 3] = 220;
	x[rstep1 + 2][cstep1 - 4] = 220;
	x[rstep1 + 2][cstep1 - 5] = 220;
	x[rstep1 + 2][cstep1 - 6] = 220;
	x[rstep1 + 2][cstep1 - 7] = 220;
	x[rstep1 + 2][cstep1 - 8] = 220;
	x[rstep1 + 2][cstep1 - 9] = 220;
	x[rstep1 + 2][cstep1 - 10] = 220;
	x[rstep1 + 2][cstep1 - 11] = 220;
	x[rstep1 + 2][cstep1 - 12] = 220;
	x[rstep1 + 2][cstep1 - 13] = 220;
	x[rstep1 + 2][cstep1 - 14] = 220;
	x[rstep1 + 2][cstep1 - 15] = 220;
	x[rstep1 + 2][cstep1 - 16] = 220;
	x[rstep1 + 3][cstep1 - 16] = 220;
	x[rstep1 + 4][cstep1 - 16] = 220;
	x[rstep1 + 5][cstep1 - 16] = 220;
	x[rstep1 + 5][cstep1 - 17] = 220;
	x[rstep1 + 5][cstep1 - 18] = 220;
	x[rstep1 + 5][cstep1 - 19] = 220;
	x[rstep1 + 5][cstep1 - 20] = 220;
	x[rstep1 + 5][cstep1 - 21] = 220;
	x[rstep1 + 5][cstep1 - 22] = 220;
	x[rstep1 + 5][cstep1 - 23] = 220;
	x[rstep1 + 5][cstep1 - 24] = 220;
	x[rstep1 + 5][cstep1 - 25] = 220;
	x[rstep1 + 5][cstep1 - 23] = 220;
	x[rstep1 + 5][cstep1 - 24] = 220;
	x[rstep1 + 5][cstep1 - 25] = 220;
	x[rstep1 + 5][cstep1 - 26] = 220;
	x[rstep1 + 5][cstep1 - 27] = 220;
	x[rstep1 + 5][cstep1 - 28] = 220;
	x[rstep1 + 5][cstep1 - 29] = 220;
	x[rstep1 + 5][cstep1 - 30] = 220;
	x[rstep1 + 6][cstep1 - 30] = 220;
	x[rstep1 + 7][cstep1 - 30] = 220;
	x[rstep1 + 8][cstep1 - 30] = 220;
	x[rstep1 + 8][cstep1 - 31] = 220;
	x[rstep1 + 8][cstep1 - 32] = 220;
	x[rstep1 + 8][cstep1 - 33] = 220;
	x[rstep1 + 8][cstep1 - 34] = 220;
	x[rstep1 + 8][cstep1 - 35] = 220;
	x[rstep1 + 8][cstep1 - 36] = 220;
	x[rstep1 + 8][cstep1 - 37] = 220;
	x[rstep1 + 8][cstep1 - 38] = 220;
	x[rstep1 + 8][cstep1 - 39] = 220;
	x[rstep1 + 8][cstep1 - 40] = 220;
	x[rstep1 + 8][cstep1 - 41] = 220;
	x[rstep1 + 8][cstep1 - 42] = 220;
	x[rstep1 + 8][cstep1 - 43] = 220;
	x[rstep1 + 8][cstep1 - 44] = 220;
	x[rstep1 + 8][cstep1 - 45] = 220;
	x[rstep1 + 8][cstep1 - 46] = 220;
	x[rstep1 + 8][cstep1 - 47] = 220;
	x[rstep1 + 8][cstep1 - 48] = 220;
	x[rstep1 + 9][cstep1 - 48] = 220;
	x[rstep1 + 10][cstep1 - 48] = 220;
}

void drawboss(int& rboss, int& cboss, char x[][3000], int& flagboss)
{

	if (flagboss == 1)
	{
		x[rboss][cboss + 1] = '<';
		x[rboss][cboss + 2] = '>';
		x[rboss][cboss + 3] = '=';
		x[rboss][cboss + 4] = '=';
		x[rboss][cboss + 5] = '=';
		x[rboss][cboss + 6] = '=';
		x[rboss][cboss + 7] = '=';
		x[rboss][cboss + 8] = '=';
		x[rboss][cboss + 9] = '=';
		x[rboss][cboss + 10] = '(';
		x[rboss][cboss + 11] = ')';
		x[rboss + 1][cboss] = '(';
		x[rboss + 1][cboss + 1] = '/';
		x[rboss + 1][cboss + 2] = 92;
		x[rboss + 1][cboss + 3] = '_';
		x[rboss + 1][cboss + 4] = '_';
		x[rboss + 1][cboss + 5] = '_';
		x[rboss + 1][cboss + 6] = '_';
		x[rboss + 1][cboss + 7] = ' ';
		x[rboss + 1][cboss + 8] = ' ';
		x[rboss + 1][cboss + 9] = '/';
		x[rboss + 1][cboss + 10] = ' ';
		x[rboss + 1][cboss + 11] = '|';
		x[rboss + 1][cboss + 12] = 92;
		x[rboss + 1][cboss + 13] = 92;
		x[rboss + 1][cboss + 24] = '(';
		x[rboss + 1][cboss + 25] = ')';
		x[rboss + 1][cboss + 26] = '=';
		x[rboss + 1][cboss + 27] = '=';
		x[rboss + 1][cboss + 28] = '=';
		x[rboss + 1][cboss + 29] = '=';
		x[rboss + 1][cboss + 30] = '=';
		x[rboss + 1][cboss + 31] = '=';
		x[rboss + 1][cboss + 32] = '=';
		x[rboss + 1][cboss + 33] = '=';
		x[rboss + 1][cboss + 34] = '=';
		x[rboss + 1][cboss + 35] = '=';
		x[rboss + 1][cboss + 36] = '<';
		x[rboss + 1][cboss + 37] = '>';
		x[rboss + 1][cboss + 38] = '_';
		x[rboss + 2][cboss + 7] = 92;
		x[rboss + 2][cboss + 8] = '_';
		x[rboss + 2][cboss + 9] = '/';
		x[rboss + 2][cboss + 10] = ' ';
		x[rboss + 2][cboss + 11] = '|';
		x[rboss + 2][cboss + 12] = ' ';
		x[rboss + 2][cboss + 13] = 92;
		x[rboss + 2][cboss + 14] = 92;
		x[rboss + 2][cboss + 23] = '/';
		x[rboss + 2][cboss + 24] = '/';
		x[rboss + 2][cboss + 25] = '|';
		x[rboss + 2][cboss + 26] = 92;
		x[rboss + 2][cboss + 30] = '_';
		x[rboss + 2][cboss + 31] = '_';
		x[rboss + 2][cboss + 32] = '_';
		x[rboss + 2][cboss + 33] = '_';
		x[rboss + 2][cboss + 34] = '_';
		x[rboss + 2][cboss + 35] = ' ';
		x[rboss + 2][cboss + 36] = '/';
		x[rboss + 2][cboss + 37] = ' ';
		x[rboss + 2][cboss + 38] = 92;
		x[rboss + 2][cboss + 39] = ')';
		x[rboss + 3][cboss + 9] = 92;
		x[rboss + 3][cboss + 10] = '|';
		x[rboss + 3][cboss + 11] = ' ';
		x[rboss + 3][cboss + 12] = ' ';
		x[rboss + 3][cboss + 13] = 92;
		x[rboss + 3][cboss + 14] = 92;
		x[rboss + 3][cboss + 21] = '/';
		x[rboss + 3][cboss + 22] = '/';
		x[rboss + 3][cboss + 23] = ' ';
		x[rboss + 3][cboss + 24] = '|';
		x[rboss + 3][cboss + 25] = ' ';
		x[rboss + 3][cboss + 26] = 92;
		x[rboss + 3][cboss + 27] = '/';
		x[rboss + 4][cboss + 11] = 92;
		x[rboss + 4][cboss + 12] = '|';
		x[rboss + 4][cboss + 13] = 92;
		x[rboss + 4][cboss + 14] = '/';
		x[rboss + 4][cboss + 15] = '|';
		x[rboss + 4][cboss + 16] = 92;
		x[rboss + 4][cboss + 17] = '_';
		x[rboss + 4][cboss + 21] = '/';
		x[rboss + 4][cboss + 22] = '/';
		x[rboss + 4][cboss + 23] = ' ';
		x[rboss + 4][cboss + 24] = ' ';
		x[rboss + 4][cboss + 25] = '/';
		x[rboss + 4][cboss + 26] = 92;
		x[rboss + 4][cboss + 27] = '/';
		x[rboss + 5][cboss + 12] = '(';
		x[rboss + 5][cboss + 13] = '0';
		x[rboss + 5][cboss + 14] = '0';
		x[rboss + 5][cboss + 15] = ')';
		x[rboss + 5][cboss + 16] = 92;
		x[rboss + 5][cboss + 17] = ' ';
		x[rboss + 5][cboss + 18] = 92;
		x[rboss + 5][cboss + 19] = '_';
		x[rboss + 5][cboss + 20] = '/';
		x[rboss + 5][cboss + 21] = '/';
		x[rboss + 5][cboss + 22] = ' ';
		x[rboss + 5][cboss + 23] = ' ';
		x[rboss + 5][cboss + 24] = '/';
		x[rboss + 6][cboss + 11] = '/';
		x[rboss + 6][cboss + 12] = '/';
		x[rboss + 6][cboss + 13] = '/';
		x[rboss + 6][cboss + 14] = 92;
		x[rboss + 6][cboss + 15] = 92;
		x[rboss + 6][cboss + 16] = '/';
		x[rboss + 6][cboss + 17] = ' ';
		x[rboss + 6][cboss + 18] = '/';
		x[rboss + 6][cboss + 19] = ' ';
		x[rboss + 6][cboss + 20] = ' ';
		x[rboss + 6][cboss + 21] = '|';
		x[rboss + 7][cboss + 0] = '_';
		x[rboss + 7][cboss + 1] = '_';
		x[rboss + 7][cboss + 2] = '_';
		x[rboss + 7][cboss + 3] = '_';
		x[rboss + 7][cboss + 4] = '_';
		x[rboss + 7][cboss + 5] = '_';
		x[rboss + 7][cboss + 6] = '_';
		x[rboss + 7][cboss + 7] = '_';
		x[rboss + 7][cboss + 8] = '_';
		x[rboss + 7][cboss + 9] = '_';
		x[rboss + 7][cboss + 10] = '@';
		x[rboss + 7][cboss + 11] = '@';
		x[rboss + 7][cboss + 12] = '/';
		x[rboss + 7][cboss + 13] = ' ';
		x[rboss + 7][cboss + 14] = ' ';
		x[rboss + 7][cboss + 15] = '|';
		x[rboss + 7][cboss + 16] = '=';
		x[rboss + 7][cboss + 17] = 92;
		x[rboss + 7][cboss + 18] = ' ';
		x[rboss + 7][cboss + 19] = ' ';
		x[rboss + 7][cboss + 20] = 92;
		x[rboss + 7][cboss + 21] = ' ';
		x[rboss + 7][cboss + 22] = ' ';
		x[rboss + 7][cboss + 23] = '|';
		x[rboss + 8][cboss + 1] = '3';
		x[rboss + 8][cboss + 2] = ' ';
		x[rboss + 8][cboss + 3] = '3';
		x[rboss + 8][cboss + 4] = ' ';
		x[rboss + 8][cboss + 5] = '3';
		x[rboss + 8][cboss + 7] = '3';
		x[rboss + 8][cboss + 9] = '3';
		x[rboss + 8][cboss + 10] = '/';
		x[rboss + 8][cboss + 16] = 92;
		x[rboss + 8][cboss + 17] = '=';
		x[rboss + 8][cboss + 18] = 92;
		x[rboss + 8][cboss + 19] = ' ';
		x[rboss + 8][cboss + 20] = 92;
		x[rboss + 8][cboss + 22] = '|';
		x[rboss + 9][cboss + 3] = '3';
		x[rboss + 9][cboss + 5] = '3';
		x[rboss + 9][cboss + 7] = '3';
		x[rboss + 9][cboss + 9] = '/';
		x[rboss + 9][cboss + 18] = 92;
		x[rboss + 9][cboss + 19] = '=';
		x[rboss + 9][cboss + 20] = '=';
		x[rboss + 9][cboss + 21] = 92;
		x[rboss + 9][cboss + 22] = ' ';
		x[rboss + 9][cboss + 23] = 92;
		x[rboss + 9][cboss + 24] = '|';
		x[rboss + 9][cboss + 25] = 92;
		x[rboss + 9][cboss + 26] = '_';
		x[rboss + 10][cboss + 5] = '3';
		x[rboss + 10][cboss + 6] = ' ';
		x[rboss + 10][cboss + 7] = '3';
		x[rboss + 10][cboss + 8] = '/';
		x[rboss + 10][cboss + 13] = '_';
		x[rboss + 10][cboss + 14] = '_';
		x[rboss + 10][cboss + 15] = '_';
		x[rboss + 10][cboss + 16] = '(';
		x[rboss + 10][cboss + 17] = 92;
		x[rboss + 10][cboss + 18] = '=';
		x[rboss + 10][cboss + 19] = '=';
		x[rboss + 10][cboss + 20] = '=';
		x[rboss + 10][cboss + 21] = 92;
		x[rboss + 10][cboss + 22] = '(';
		x[rboss + 10][cboss + 23] = ' ';
		x[rboss + 10][cboss + 24] = ' ';
		x[rboss + 10][cboss + 25] = ')';
		x[rboss + 10][cboss + 26] = 92;
		x[rboss + 11][cboss + 6] = '3';
		x[rboss + 11][cboss + 7] = '/';
		x[rboss + 11][cboss + 13] = '(';
		x[rboss + 11][cboss + 14] = '(';
		x[rboss + 11][cboss + 15] = '(';
		x[rboss + 11][cboss + 16] = '~';
		x[rboss + 11][cboss + 17] = ')';
		x[rboss + 11][cboss + 18] = ' ';
		x[rboss + 11][cboss + 19] = '_';
		x[rboss + 11][cboss + 20] = '_';
		x[rboss + 11][cboss + 21] = '(';
		x[rboss + 11][cboss + 22] = '/';
		x[rboss + 11][cboss + 26] = '|';
		x[rboss + 12][cboss + 19] = '(';
		x[rboss + 12][cboss + 20] = '(';
		x[rboss + 12][cboss + 21] = '(';
		x[rboss + 12][cboss + 22] = '~';
		x[rboss + 12][cboss + 23] = ')';
		x[rboss + 12][cboss + 24] = ' ';
		x[rboss + 12][cboss + 25] = 92;
		x[rboss + 12][cboss + 28] = '/';
		x[rboss + 13][cboss + 20] = '_';
		x[rboss + 13][cboss + 21] = '_';
		x[rboss + 13][cboss + 22] = '_';
		x[rboss + 13][cboss + 23] = '_';
		x[rboss + 13][cboss + 24] = '_';
		x[rboss + 13][cboss + 25] = 92;
		x[rboss + 13][cboss + 26] = ' ';
		x[rboss + 13][cboss + 27] = 92;
		x[rboss + 14][cboss + 20] = '-';
		x[rboss + 14][cboss + 21] = '-';
		x[rboss + 14][cboss + 22] = '-';
		x[rboss + 14][cboss + 23] = '-';
		x[rboss + 14][cboss + 24] = '-';
		x[rboss + 14][cboss + 25] = '-';
		x[rboss + 14][cboss + 26] = '-';
	}

}

void moveboss(int& rboss, int& cboss, int& stop, char x[][3000])
{
	if (stop == 1)
	{

		rboss--;
		if (rboss == 2)
		{
			stop = 2;
		}
	}
	if (stop == 2)
	{

		cboss++;
		if (cboss == 754)
		{
			stop = 3;
		}
	}
	if (stop == 3)
	{

		rboss++;
		if (rboss == 11)
		{
			stop = 4;
		}
	}
	if (stop == 4)
	{

		cboss--;
		if (cboss == 750)
		{
			stop = 1;
		}
	}
}
void stoplazer(int& stopr, int& stopc, int& stopl, char x[][3000])
{
	x[stopr][stopc] = '0';

	if (stopl == 0)
	{
		stopc++;
		if (stopc == 2050)
		{
			stopl = 1;
		}
	}

	if (stopl == 1)
	{
		stopc--;
		if (stopc == 2000)
		{
			stopl = 0;
		}
	}


}
void drawlazer(char x[][3000], int& stopl)
{
	x[2][359] = 177;x[2][360] = 177;x[2][361] = 177;x[2][362] = 177;x[2][363] = 177;x[2][364] = 177;
	x[2][389] = 177;x[2][390] = 177;x[2][391] = 177;x[2][392] = 177;x[2][393] = 177;x[2][394] = 177;

	if (stopl == 0)
	{
		x[2][361] = 177; x[3][361] = 177; x[4][361] = 177; x[5][361] = 177;
		x[4][361] = 177; x[5][361] = 177; x[6][361] = 177; x[7][361] = 177; x[8][361] = 177;
		x[9][361] = 177; x[10][361] = 177; x[11][361] = 177; x[12][361] = 177;
		x[13][361] = 177; x[14][361] = 177; x[15][361] = 177; x[16][361] = 177;
		x[17][361] = 177; x[18][361] = 177; x[19][361] = 177; x[20][361] = 177;
		x[21][361] = 177; x[22][361] = 177; x[23][361] = 177; x[24][361] = 177;x[25][361] = 177;
		x[2][362] = 177; x[3][362] = 177; x[4][362] = 177; x[5][362] = 177;
		x[4][362] = 177; x[5][362] = 177; x[6][362] = 177; x[7][362] = 177; x[8][362] = 177;
		x[9][362] = 177; x[10][362] = 177; x[11][362] = 177; x[12][362] = 177;
		x[13][362] = 177; x[14][362] = 177; x[15][362] = 177; x[16][362] = 177; x[17][362] = 177;
		x[18][362] = 177; x[19][362] = 177; x[20][362] = 177; x[21][362] = 177; x[22][362] = 177;
		x[23][362] = 177; x[24][362] = 177; x[25][362] = 177;


	}


	if (stopl == 1)
	{

		x[2][391] = 177; x[3][391] = 177; x[4][391] = 177; x[5][391] = 177;
		x[4][391] = 177; x[5][391] = 177; x[6][391] = 177; x[7][391] = 177; x[8][391] = 177;
		x[9][391] = 177; x[10][391] = 177; x[11][391] = 177; x[12][391] = 177;
		x[13][391] = 177; x[14][391] = 177; x[15][391] = 177; x[16][391] = 177;
		x[17][391] = 177; x[18][391] = 177; x[19][391] = 177; x[20][391] = 177;
		x[21][391] = 177; x[22][391] = 177; x[23][391] = 177; x[24][391] = 177;x[25][391] = 177;
		x[2][392] = 177; x[3][392] = 177; x[4][392] = 177; x[5][392] = 177;
		x[4][392] = 177; x[5][392] = 177; x[6][392] = 177; x[7][392] = 177; x[8][392] = 177;
		x[9][392] = 177; x[10][392] = 177; x[11][392] = 177; x[12][392] = 177;
		x[13][392] = 177; x[14][392] = 177; x[15][392] = 177; x[16][392] = 177; x[17][392] = 177;
		x[18][392] = 177; x[19][392] = 177; x[20][392] = 177; x[21][392] = 177; x[22][392] = 177;
		x[23][392] = 177; x[24][392] = 177; x[25][391] = 177;
	}


}

void moveelevator(char x[][3000], int& celevator, int& relevator, int& stops, int& flagelevator, int& RH, int& CH)
{


	if (flagelevator == 1)
	{
		if (stops == 1)
		{
			RH--;
			relevator--;
			if (relevator == 15)
			{
				RH = 7;
				stops = 2;
			}
		}

	}


}
void drawpower(int& rpower, int& cpowr, char x[][3000])
{



	x[rpower + 1][cpowr + 3] = 92;

	x[rpower + 1][cpowr + 5] = ' ';
	x[rpower + 1][cpowr + 6] = ':';

	x[rpower + 1][cpowr + 9] = '/';

	x[rpower + 2][cpowr + 0] = '`';
	x[rpower + 2][cpowr + 1] = '.';

	x[rpower + 2][cpowr + 3] = '_';
	x[rpower + 2][cpowr + 4] = '_';
	x[rpower + 2][cpowr + 5] = '/';
	x[rpower + 2][cpowr + 6] = ' ';
	x[rpower + 2][cpowr + 7] = 92;
	x[rpower + 2][cpowr + 8] = '_';
	x[rpower + 2][cpowr + 9] = '_';
	x[rpower + 2][cpowr + 10] = ' ';
	x[rpower + 2][cpowr + 11] = '.';

	x[rpower + 3][cpowr + 0] = '_';
	x[rpower + 3][cpowr + 1] = ' ';
	x[rpower + 3][cpowr + 2] = '_';
	x[rpower + 3][cpowr + 3] = 92;
	x[rpower + 3][cpowr + 4] = ' ';

	x[rpower + 3][cpowr + 9] = '/';
	x[rpower + 3][cpowr + 10] = '_';
	x[rpower + 3][cpowr + 11] = ' ';
	x[rpower + 3][cpowr + 12] = '_';

	x[rpower + 4][cpowr + 3] = '/';
	x[rpower + 4][cpowr + 4] = '_';

	x[rpower + 4][cpowr + 8] = '_';
	x[rpower + 4][cpowr + 9] = 92;
	x[rpower + 4][cpowr + 10] = ' ';
	x[rpower + 4][cpowr + 11] = ' ';
	x[rpower + 4][cpowr + 12] = ' ';
	x[rpower + 5][cpowr + 0] = ' ';
	x[rpower + 5][cpowr + 1] = '.';
	x[rpower + 5][cpowr + 5] = 92;

	x[rpower + 5][cpowr + 7] = '/';
	x[rpower + 5][cpowr + 8] = ' ';
	x[rpower + 5][cpowr + 9] = ' ';
	x[rpower + 5][cpowr + 10] = '`';
	x[rpower + 5][cpowr + 11] = '.';
	x[rpower + 6][cpowr + 3] = '/';
	x[rpower + 6][cpowr + 6] = ':';
	x[rpower + 6][cpowr + 9] = 92;

}


void moveheroonelevator(int& celevator, int& relevator, int& RH, int& CH, int& checklcol, int& checkdrow, int& flagelevator)
{
	checklcol = CH;


	if (checklcol >= celevator)
	{
		flagelevator = 1;
	}
	else
	{
		flagelevator = 0;
	}
}

int main()
{
	char x[30][3000];
	int re2 = 2;
	int ce2 = 300;
	int RH = 14;
	int CH = 5;
	int re1 = 7;
	int ce1 = 146;
	char move;
	int flaghero2 = 0;
	int flaggrav = 1;
	int ctjump = 0;
	int firstcol = 0;
	int lastcol = 140;
	int rowfloat = 15;
	int colfloat = 100;
	int cbullet = CH + 14;
	int rbullet = RH + 1;
	int flagenemy1 = 1;
	int celevator = 850;
	int flagelevator = 0;
	int checkdrow = RH + 12;
	int flagshoot = 0;
	int relevator = 26;
	int flagboss = 1;
	int rstep1 = 16;
	int cstep1 = 100;
	int rstep2;
	int cstep2;
	int stop = 1;
	int stops = 1;
	int rfire = 5;
	int cfire = 745;
	int flagfire = 1;
	int flagdie = 0;
	int rlader = 25;
	int clader = 500;
	int go = 0;
	int jumpherolader = 0;
	int flagpoint = 380;
	int pause = 1;
	int rowfloat2 = 19;
	int colfloat2 = 516;
	int checklcol = CH;
	int rbomb = 26;
	int cbomb = 516;
	int bullets[100][2];
	int firect = 0;
	int stopl = 0;
	int bulletct = 0;
	int cboss = 750;
	int rboss = 11;
	int rpower = 8;
	int cpowr = 879;
	int stopr = 3;int stopc = 2000;
	int win = 0;
	for (;;)
	{
		for (; !_kbhit();)
		{
			FillMyMatrix(x, firstcol, lastcol);
			drawhero(RH, CH, flaghero2, x);
			drawenemy1(re1, ce1, x, flagenemy1);
			drawenemy2(re2, ce2, x);
			drawfloat(rowfloat, colfloat, rowfloat2, colfloat2, x);
			drawlader(x, rlader, clader);
			drawbatbullet(x, stopl);
			drawbomb(rbomb, cbomb, x);
			drawstep(rstep1, cstep1, rstep2, cstep2, x);
			drawelevator(x, celevator, relevator);
			moveenem1(re1, ce1, pause, x);
			moveboss(rboss, cboss, stop, x);
			drawboss(rboss, cboss, x, flagboss);
			moveelevator(x, celevator, relevator, stops, flagelevator, RH, CH);
			moveheroonelevator(celevator, relevator, RH, CH, checklcol, checkdrow, flagelevator);
			drawbullet(x, cbullet, rbullet, flagshoot);
			shootbullet(x, cbullet, rbullet, flagshoot, RH, CH, ce1, flagenemy1);
			bulletMulti(RH, CH, bulletct, bullets, x, flagboss); drawpower(rpower, cpowr, x);
			going(x, clader, CH, jumpherolader, RH, go);
			moveheroonlader(x, clader, CH, jumpherolader);
			moveenem2(re2, ce2, pause, x);
			stoplazer(stopr, stopc, stopl, x);drawlazer(x, stopl);
			gravityjump(RH, CH, flaghero2, x, flaggrav);
			jump(RH, CH, flaggrav, x, ctjump, flaghero2);
			CoutMyMatrixToScreen(x, firstcol, lastcol);
			herodie(CH, RH, stopl, flagdie, win, x);

			if (flagdie == 1)
			{
				break;
			}
			if (win == 1)
			{
				break;
			}
		}
		char move = _getch();
		movehero(RH, CH, move, flaghero2, flaggrav, x, firstcol, lastcol, flagshoot, rbullet, cbullet, jumpherolader, go, bulletct);
		if (flagdie == 1)
		{
			flaghero2 == 2;
			cout << "you lose! :(" << endl;
			break;
		}
		if (win == 1)
		{
			flaghero2 == 0;
			cout << "congratulation!!!!" << endl;
			break;
		}
	}
}