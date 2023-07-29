#include <stdio.h>

int main(void)
{

    int i, id = 0, k = 0;
    char letra = 'A', abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
                                 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    do
    {
        printf("Digite uma letra minuscula: ");
        scanf("%s", &letra);

        for (i = 0; i < 26; i++)
        {
            if (letra == abc[i])
            {
                id = 1;
                k = i;
                break;
            }
        }

    } while (id != 1);

    for (i = 0; i <= k; i++)
    {
        printf(" %c", abc[i]);
    }

    return 0;
}