#include <stdio.h>

int somador(int a, int b)
{
  int aux = 0;

  if (a == 0)
    aux = b;
  if (b == 0)
    aux = a;

  while (aux == 0)
  {
    a = a - 1;
    b = b + 1;
    if (a == 0)
      return b;
  }
  return (aux);
}

int main(int argc, char *argv[])
{
  printf("A soma é %d!\n", somador(5, 8));

  // As funções abaixo estão pendentes de implementação
  // subtrator();
  // divisor();
  // multiplicador();

  return (0);
}
