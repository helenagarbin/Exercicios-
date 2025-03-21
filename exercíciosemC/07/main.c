#include <stdio.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 10

int main()
{
    int i,j, maior, soma;
    int M[LINHAS][COLUNAS], matriz[i][j];
    printf("Insira os valores da matriz:%dx%d\n", LINHAS, COLUNAS);
    for(i=0; i<LINHAS; i++)
    {
        for(j=0; j<COLUNAS; j++)
        {
            printf("Digite o valor para M[%d][%d]:\n", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMaior elemento de cada linha:\n");
    for(i=0; i<LINHAS; i++)
    {
        maior=matriz[1][0];
        for(j=1; j<COLUNAS; j++)
        {
            if (matriz[i][j]>maior)
            {
                maior = matriz[i][j];
            }
        }

        printf("Linha %d: %d\n", i, maior);
    }

    printf("\nMédia dos elementos de cada coluna:\n");
    for(j=0; j<COLUNAS; j++)
    {
        soma=0;
        for(i=0; i<LINHAS; i++)
        {
            soma+=matriz[i][j];
        }

        printf("Coluna %d: %.2f\n", j, soma/LINHAS);
    }

    return 0;
}

/*7) Dada uma matriz de inteiros M (5,10), escreva um programa que realize a sequência de operações:
Preencha a matriz por leitura;
Procure e imprima o maior elemento de cada linha da matriz;
Calcule e imprima a média dos elementos de cada coluna.*/
