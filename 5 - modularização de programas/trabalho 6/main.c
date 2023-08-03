#include <stdio.h>
#include <stdlib.h>
//Tipo tPessoa definido como uma estrutura
typedef struct _pessoa{
    char nome[30];
    int idade;
    char sexo;
    float altura;
    float peso;
    float imc;
} tPessoa;

void lePaciente(tPessoa *registro){
    //Ler e armazenar todos os dados de um paciente
    printf("\nDigite o nome: ");
    scanf(" %[^\n]s", registro->nome);
    printf("Digite a idade: ");
    scanf("%d", &(registro->idade));
    printf("Digite o sexo (M / F): ");
    scanf(" %c", &(registro->sexo));
    printf("Digite a altura: ");
    scanf("%f", &(registro->altura));
    printf("Digite a peso: ");
    scanf("%f", &(registro->peso));
    registro->imc = 0;
    printf("\n");
    fflush(stdin);	
}

void imprimePaciente(tPessoa registro){
    //Imprimir todos os dados de um paciente
    printf("+--------------------------------------+-------+\n");
    printf("| Nome: %30s |  IMC  |\n", registro.nome);
    printf("| Idade: %3d            Sexo: %c        |       |\n", registro.idade, registro.sexo);
    printf("| Altura: %4.2f          Peso: %5.1f    |  %4.1f |\n", registro.altura, registro.peso, registro.imc);
    printf("+--------------------------------------+-------+\n");
}

float calculaIMC(tPessoa registro){
    //Calcular e retornar o IMC de um paciente
    registro.imc = registro.peso / (registro.altura * registro.altura);
    return registro.imc;
}

int main(void) {
    //Parte principal do programa
    int i, n;
    tPessoa *pessoa;

    printf("Digite o numero de pacientes: ");
    scanf("%d", &n);

    pessoa = (tPessoa*) malloc (n * sizeof(tPessoa));

    for (i=0; i<n; i++) {
        lePaciente(&pessoa[i]);
        pessoa[i].imc = calculaIMC(pessoa[i]);
    }

    for (i=0; i<n; i++) {
        imprimePaciente(pessoa[i]);
    }

    return 0;
}