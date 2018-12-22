#include <stdio.h>
#include <locale.h> 
#define _USE_MATH_DEFINES 
#include <math.h> 

void make_matrix(int a[5][6]) {

	srand(time(NULL));
	for (int i = 0; i < 5; i++) 
		for (int j = 0; j < 6; j++)
			a[i][j] = rand() % 100;
}

void print_matrix(int a[4][6]) {

	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++)
			printf("%d\t", a[i][j]);
			printf("\n");
	}
	printf("\n");
}

void solve(int a[5][6]) {

	srand(time(NULL));
	int min = 600, mini = 0, maxi = 0, maxi = 0, temp;
	for (int i = 0; i < 5; i++) {
		temp = 0;
		for (int j = 0; j < 5; j++)
		temp = a[i][j];
		if (temp > a[i][j+1]){

		}
	}
	printf("- %d - %d\n\n", mini + 1, min);
}
