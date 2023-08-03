#include <stdio.h>
#include <stdlib.h>

void imprimeMaior(int a, int b){
  if (a > b) {
    printf("\nO maior valor: %d\n", a);
  } else {
    printf("\nO maior valor: %d\n", b);
  }
}

int main(){
  int x, y;

  printf("Digite um numero inteiro: ");
  scanf("%d", &x);

  printf("Digite outro numero inteiro: ");
  scanf("%d", &y);

  imprimeMaior(x, y);

  return 0;
}