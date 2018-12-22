#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES 
#include <math.h>  


int main()
{
	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	int a[20];
	for (int i = 0; i < 20; i++)
	{
		a[i] = -3 + rand() % 10;
	}

	for (int i = 0; i < 20; i++) {
		printf("%d  ", a[i]);
	}
	printf("\n");
	for (int i = 0; i < 20; i++) {
		if (a[i] > 0) {
			for (int j = 0; j < 20; j++) {
				if (a[j] == -a[i]) {
					a[i] = -a[i];
                                        a[j] = -a[j];
				}

			}
		}
		printf("%d  ", a[i]);

	}
	printf("\n");
	system("pause");
	return (0);
}