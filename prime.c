#include <stdio.h>

int main(void) {

  int n, i, flag = 0;
  printf("Ingrese un número entero positivo: ");
  scanf("%d", &n);

  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 no es ni primo ni compuesto");
  } else {
    if (flag == 0)
      printf("%d es un número primo.", n);
    else
      printf("%d no es un número primo.", n);
  }

  return 0;
}
