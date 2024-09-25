#include <stdio.h>

void moverBispo(int i, int casas)
{
    if (i == casas)
    {
        return;
    }
    for (int j = 0; j < 1; j++)
    {
        printf("Diagonal Superior Direita.\n");
    }
    moverBispo(i + 1, casas);
}

void moverTorre(int i, int casas)
{
    if (i == casas)
    {
        return;
    }
    printf("Direita.\n");
    moverTorre(i + 1, casas);
}

void moverRainha(int i, int casas)
{
    if (i == casas)
    {
        return;
    }
    printf("Esquerda.\n");
    moverRainha(i + 1, casas);
}

int main()
{

    int i;

    printf("\nMovimentação do Bispo:\n");
    moverBispo(0, 5);

    printf("\nMovimentação da Torre:\n");
    moverTorre(0, 5);

    printf("\nMovimentação Rainha:\n");
    moverRainha(0, 5);

    printf("\nMovimentação do Cavalo:\n\n");
    for (i = 0; i < 2; i++)
    {
        printf("Cima.\n");

        if (i == 1)
        {
            continue;
        }
        int j = 0;
        while (j < 1)
        {
            j++;
        if (j >= 2)
        {
            break;
        }
        
        }
    }
    printf("Direita.\n");

    return 0;
}
