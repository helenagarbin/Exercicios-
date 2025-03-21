#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//definindo as constantes
#define LINHAS 5
#define COLUNAS 10

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int M[LINHAS][COLUNAS];
    int i, j;
    float media;
    float soma;

    printf("Digite os elementos da matriz %dx%d:\n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++)
    {
        for (j = 0; j < COLUNAS; j++)
        {
            	printf("Elemento [%d][%d]: ", i, j);
            	scanf("%d", &M[i][j]);
        }
    }

    printf("\nMaior elemento de cada linha:\n");
    for(i = 0; i < LINHAS; i++)
    {
        int max = M[i][j];
        for(j = 1; j < COLUNAS; j++)
        {
            if(M[i][j] > max)
            {
                max = M[i][j];
            }
        }
        printf("Linha %d: %d\n", i, max);
    }

    printf("\nMédia dos elementos de cada coluna:\n");
    for(j = 0; j < COLUNAS; j++)
    {
        int soma = 0;
        for(i = 0; i < LINHAS; i++)
        {
            soma += M[i][j];
        }
        media = soma / LINHAS;
        printf("Coluna %d: %.2f\n", j, media);
    }

    return 0;
}

