#include <stdio.h>
#include <string.h>

int main (void) {

    int i, opcao, n, codigo[200];
    char mensagem[200], chave[13] = "EARTE2020/1";

    do {
        printf("Digite o que deseja fazer: \n1. Codificar \n2. Decodificar \n3. Sair \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: //codificando a mensagem
                printf("Digite a mensagem a ser codificada: \n");
                scanf(" %s", mensagem);
                printf("\na mensagem e: %s\n", mensagem);

                n = strlen(mensagem);
                printf("\nO tamanho da sua mensagem e: %d\n", n);

                for (i=0; i<n; i++) {
                    codigo[i] = mensagem[i] ^ chave[i%11];
                }

                printf("\nSua mensagem codificada e: \n");
                for (i=0; i<n; i++) {
                    printf("%d ", codigo[i]);
                }

            break;
            case 2: //decodificando a mensagem

                printf("\nDigite o tamanho da mensagem: \n");
                scanf("%d", &n);

                printf("Digite a mensagem a ser decodificada: \n");
                for (i=0; i<n; i++) {
                    scanf("%d", &codigo[i]);
                }
                
                for (i=0; i<n; i++) {
                    mensagem[i] = codigo[i] ^ chave[i%11];
                }

                printf("Sua mensagem e: \n%s\n", mensagem);

            break;
            
        }

    } while (opcao != 3);

    return 0;
}