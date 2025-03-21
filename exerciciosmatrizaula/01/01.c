#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
1) Crie um algoritmo que calcule a soma dos valores da diagonal principal de uma matriz 5x5, e
imprima estes valores.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int M[5][5] = {
        {1,2,5,1,4},
        {3,2,4,2,3},
        {4,1,2,3,7},
        {5,5,2,4,9},
        {1,2,4,5,1}
        };
    int i, j;
    int somadiagonal=0;


    for(i=0; i<5; i++)
    {

        for(j=0; i<i; j++)
        {
            printf("    ");
        }

        printf("%d -->linha[%d],coluna[%d]\n", M[i][i], i, i);
        somadiagonal+=M[i][i];
    }

    printf("\n\nDiagonal Principal:\n");
    for (i=0; i<5; i++)
    {
        printf("%d\n", M[i][i]);
    }

    printf("\nSoma da diagona principal é igual a: %d\n", somadiagonal);

    return 0;
}
