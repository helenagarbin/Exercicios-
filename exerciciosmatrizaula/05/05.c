#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
5) Crie um algoritmo que leia uma matriz 3x3 e crie uma segunda matriz que inverta as linhas e
colunas da primeira matriz.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int M[3][3];
    int MTransposta[3][3];
    int i, j;

    printf("Digite os valores da matriz M:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz M:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            MTransposta[j][i] = M[i][j];
        }
    }

    printf("Matriz MTransposta:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", MTransposta[i][j]);
        }

        printf("\n");
    }

    system("pause");
    return 0;
}
