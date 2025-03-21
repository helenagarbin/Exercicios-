#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
2) Crie um algoritmo que verifique se uma matriz é triangular superior.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int M[5][5];
    int n=5; //(tamanho matriz)
    int TriangularSuperior = 1;
    int i, j;


    printf("Digite os valores da matriz M:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Elemento[%d][%d]:", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for(i=1; i<n && TriangularSuperior; i++)
    {
        for(j=0;j<i; j++)
        {
            if(M[i][j] != 0)
            {
                TriangularSuperior = 0;
                break;
            }
        }

    }

    if (TriangularSuperior)
    {
        printf("A matriz é triangualar superior\n");
    }
    else
    {
        printf("A matriz não é triangular superior\n");
    }
    return 0;
}
