#include <stdio.h>
#include <stdlib.h> //рандом
#include <locale.h> //язык
#define _USE_MATH_DEFINES //математика
#include <math.h>  


int main(){
  setlocale(LC_ALL, "Rus");
  srand(time(NULL));
  int a[50];
  int mem;
  for (int i = 0; i < 50; i++) {
    a[i] = rand() % 50;
    printf("%d  ", a[i]);
      if ((i+1)% 10 == 0) { printf("\n"); }
    }
  for (int i = 0; i < 50; i++) {
    for (int j = 0; j < 50; j++) {
      if (a[j] < a[j + 1]) {
        mem = a[j];
        a[j] = a[j + 1];     J
        a[j + 1] = mem;
      }
    }
  }
  printf("\n");

  for (int i = 0; i < 50; i++) {
    printf("%d  ", a[i]);
    if ((i + 1) % 10 == 0) { printf("\n"); }
  }
  system("pause");
  return (0);
}
