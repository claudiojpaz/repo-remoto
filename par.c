#include <stdio.h>

int main (void)
{
  int n;

  printf("Ingrese un Número: ");
  scanf("%d", &n);

  if (n % 2 == 0)
    printf("par\n");

  return 0;
}
