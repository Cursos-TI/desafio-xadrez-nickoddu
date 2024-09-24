#include <stdio.h>

int main()
{

    int i;

    printf("\nMovimentação do Bispo:\n");
    i = 1;
    while (i <= 5)
    {
        printf("Diagonal Superior Direita\n");
        i++;
    }

    printf("\nMovimentação da Torre:\n");
    i = 1;
    do
    {
        printf("Direita.\n");
        i++;
    } while (i <= 5);

    printf("\nMovimentação da Rainha:\n");
    for (i = 0; i < 8; i++)
    {
        printf("Esquerda.\n");
    }

    printf("\nMovimentação do Cavalo:\n\n");
    for (i = 0; i < 2; i++)
    {
        printf("Baixo.\n");

        int j = 0;
        while (j < 1)
        {
            j++;
        }
    }
    printf("Esquerda.\n");

    return 0;
}