#include <stdio.h>


void lerNumeros(int *a, int *b){

  printf("Informe o numero A:  \n");
  scanf("%i", &*a);
  printf("Informe o numero B:  \n");
  scanf("%i", &*b);

  
}

int somarNumeros(int a,int b){
  return a + b;
}

void imprimirResultado(int somar){
  printf("O resultado da soma é: %d", somar);
}

int main(void) {

  int a, b;
  int somar;

  lerNumeros(&a, &b);
  somar = somarNumeros(a,b);
  imprimirResultado(somar);
 
 return 0;
}