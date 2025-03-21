#include <stdio.h>
#include <stdlib.h>

#define LINHAS 4
#define COLUNAS 4

int main()
{
    int i, j;
    int M[LINHAS][COLUNAS];
    int matriz[i][j];


    printf("Preenchendo a matriz: %dx%d\n", LINHAS, COLUNAS);
    for (i = 0; i<=LINHAS; i++)
    {
        for (int j = 0; j <= COLUNAS; j++)
        {
            printf("Digite o valor para M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nImprimindo a Matriz %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i <= LINHAS; i++)
    {
        for (int j = 0; j <= COLUNAS; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*Imprima os elementos da diagonal principal em uma linha e depois os da diagonal secundária em outra linha;
Zere a segunda coluna da matriz e depois a imprima novamente;
Preencha um vetor com o produto dos elementos de cada coluna e imprima esse valor*/
