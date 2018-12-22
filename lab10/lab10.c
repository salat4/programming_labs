#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES 
#include <math.h> 
#include <time.h>
#include <locale.h>

int main()
{

	srand(time(NULL));


	int a[22];
	int i;
	int j;
	for ( i=0;i < 22; i++)
	{
		a[i] = -3 + rand() % 10;
	}

	for (i = 0; i < 22; i++) {
		printf("%d  ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 22; i++) {
		if (a[i] > 0) {
			for ( j = 0; j < 22; j++) {
				if (a[j] == -a[i]) {
					a[i] = -a[i];
                    a[j] = -a[j];
				}

			}
		}
		printf("%d  ", a[i]);

	}
	printf("\n");
	
	return (0);
}