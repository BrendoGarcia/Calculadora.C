// preciso de ajuda para corrigir essa dupla apareção da linha 12 quando printa
// na pagina//
#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, soma, subtracao, multi, div, i;
  char operador, cont;
  i = 0;

  for (i = 0; i < 10; i++) { // loop iniciando duas vezes//
    printf("1=soma, 2=Multiplicação, 3=divição:?"); 
    scanf("%c", &operador);

    if (operador == '1') {

      printf("Soma Simples:");
      scanf("%i %i", &num1, &num2);
      printf("Resultado:"
             "%d",
             (num1 + num2));
      printf("\n");
    }
    if (operador == '2') {
      printf("Multiplicação Simples:");
      scanf("%i %i", &num1, &num2);
      printf("Resultado:"
             "%d",
             (num1 * num2));
      printf("\n");
    }
    if (operador == '3') {
      printf("divição simples:");
      scanf("%i %i", &num1, &num2);
      printf("Resultado:"
             "%d"
             " ",
             (num1 / num2));
      printf("\n");
    }
  }
  return 0;
}
