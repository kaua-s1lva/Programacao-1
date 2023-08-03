#include <stdio.h>
#include <stdlib.h>

void sacar(float *saldo, float saque){
  if (*saldo >= saque) {
    *saldo -= saque;
    printf("\nSaque realizado com sucesso! \nSeu saldo e: %.2f\n", *saldo);
  } else {
    printf("\nSaldo insuficiente!\n");
  }
}

int main(){
  float saldo, saque = 1.0;
  printf("Digite o saldo inicial (numero real): ");
  scanf("%f", &saldo);

  while(saque > 0.0){
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);
    sacar(&saldo, saque);
  }

  return 0;
}