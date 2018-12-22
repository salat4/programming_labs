#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define R 8


unsigned char data[R][R], max = 0, nmax;


void showMass(unsigned char *point, unsigned char C) {
	for (unsigned char r = 0; r < C; r++) {
		for (unsigned char c = 0; c < C; c++) {
			if (point[r*C + c] < 10) printf(" ");
			printf(" %i ", *((point + r * C) + c));
		}
		printf("\n");
	}
}

int main(void) {

	printf("\nRandom 2d massive:\n");
	showMass(&data[0][0], R);

	for (unsigned char i = 0; i < R; i++) {
		if (max <= data[i][i]) {
			max = data[i][i];
			nmax = i;
		}
	}

	

	printf("\n2d massive after cut:\n");
	
	for (int i = 0; i < nmax; i++)
	{
		for (int j = 0; j < R; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
	for (int i = nmax + 1; i < R; i++)
	{
		for (int j = 0; j < R; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}
