#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
4) Crie um algoritmo que leia duas matrizes 2x5 e crie uma terceira matriz também 2x5 com o
valor da soma dos elementos de mesmo índice.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int M1[2][5];
    int M2[2][5];
    int Soma[2][5];
    int i, j;

    printf("Digite os valores para a matriz M1:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M1[i][j]);
        }
    }

    printf("Digite os valores para a matriz M2:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M2[i][j]);
        }
    }

    for(i=0; i<2; i++)
    {
        for(j=0; j<5; j++)
        {
            Soma[i][j] = M1[i][j] + M2[i][j];
        }
    }

    printf("\n A matriz das somas da matriz M1 e M2 é:\n");

    for(i=0; i<2; i++)
    {
        printf("\n");
        for(j=0; j<5; j++)
        {
            printf("%d ", Soma[i][j]);
        }
    }

    return 0;
}
