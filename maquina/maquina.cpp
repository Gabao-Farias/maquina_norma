#include <stdio.h>

int atribuiZero(int valorAleatorio)
{
test:
  if (valorAleatorio == 0)
    return valorAleatorio;

  valorAleatorio = valorAleatorio - 1;
  goto test;
}

int atribuiValor(int valorParaAtribuir)
{
  int aux = atribuiZero(1);

test:
  if (valorParaAtribuir == 0)
    return aux;

  valorParaAtribuir = valorParaAtribuir - 1;
  aux = aux + 1;

  goto test;
}

int somador(int a, int b)
{
  int aux = atribuiZero(1);

  if (a == 0)
    return atribuiValor(b);
  if (b == 0)
    return atribuiValor(a);

iteration:
  a = a - 1;
  b = b + 1;
  if (a == 0)
    return b;

  goto iteration;
}

int main(int argc, char *argv[])
{
  printf("A soma é %d!\n", somador(6, 8));

  // As funções abaixo estão pendentes de implementação
  // subtrator();
  // divisor();
  // multiplicador();

  return (0);
}
