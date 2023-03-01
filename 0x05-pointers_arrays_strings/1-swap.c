#include "main.h"
#include <stdio.h>
void swap (int *a, int *b);
int main() {
  int a = 98;
  int b = 42;
  printf("m is %d, n is %d\n", m, n);
  swap(&m, &n);
  printf("m is %d, n is %d\n", m, n);
  return 0;}
void swap (int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;}
}
