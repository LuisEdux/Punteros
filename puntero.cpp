#include <stdio.h>

int main() {
  int num1 = 10, num2 = 20;
  int *ptr1 = &num1, *ptr2 = &num2;
  int suma = *ptr1 + *ptr2;

  printf("Suma de %d y %d es igual a: %d\n", num1, num2, suma);

  return 0;
}

