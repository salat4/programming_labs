#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h> //€зык

int main()
{
	setlocale(LC_ALL, "Rus");

	int vow_count = 0, con_count = 0, letter_count = 0;
	char ch;
	char string[1000];
	int stringLength = 0;
	int M, N, K, i = 1;
	printf("¬ведiть початок");
	scanf("%d", &M);
	printf("¬ведiть кiлькiсть символiв дл€ видаленн€");
	scanf("%d", &N);
	K = M + N;
	FILE *file;
	FILE *out;
	file = fopen("input.txt", "r");
	out = fopen("output.txt", "wt");
	if (out == NULL) {
		perror("error file open");
		return 1;
	}
	while ((ch = fgetc(file)) != EOF) {
		if (i < M || i > K)
		fprintf(out, "%с", ch);
		i++;
	}
	fclose(file);
	fclose(out);


	return (0);
}
