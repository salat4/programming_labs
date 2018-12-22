#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#define R 8


unsigned char data[R][R], swap, r, c,index = R;



int main(void) 
{ 
	srand(time(NULL));

	printf("\nRandom 2d massive:\n");

	for ( r = 0; r < R; r++) 
	{
		for ( c = 0; c < R; c++)
		{
			data[r][c] = rand() % 100;
			printf(" %3d ", data[r][c]);
		}
		printf("\n");
	}

	for ( r = 0; r < R ; r++) 
	{
		for ( c = 0; c < r; c++) 
		{
			swap = data[r][c];
			data[r][c] = data[c][r];
			data[c][r] = swap;
		}
		printf("\n");
	}
	printf("\n2d massive after swap:\n");

	for ( r = 0; r < R; r++) 
	{
		for ( c = 0; c < R; c++) 
		{
			printf(" %3d ", data[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}
