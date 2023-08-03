#include <stdio.h>
#include <stdlib.h>

#define N 5

void crescDesc(int a, int b){
  if (a < b) {
    printf("O valor %d esta em ordem crescente com o valor %d\n", a, b);
  } else {
    printf("O valor %d esta em ordem decrescente com o valor %d\n", a, b);
  }
}

int main(){
  int i, vet[N];

  printf("Digite %d numeros inteiros\n", N);

  for(i = 0; i < N; i++) 
    scanf("%d", &vet[i]);

  for(i = 0; i < N-1; i++)
    crescDesc(vet[i], vet[i+1]);

  return 0;
}