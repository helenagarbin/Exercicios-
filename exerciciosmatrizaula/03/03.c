#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
3) Crie um algoritmo que verifique se uma matriz é triangular inferior
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int M[5][5];
    int i, j, n=5;
    int TriangularInferior = 1;

    printf("Digite os valores da matriz M[5][5]:\n");
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    for (i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(M[i][j] != 0)
            {
                TriangularInferior = 0;
                break;
            }
        }
        if (TriangularInferior == 0)
        {
            break;
        }
    }

    if(TriangularInferior)
    {
        printf("A matriz M é triangular inferior\n");
    }
    else
    {
        printf("A matriz M não é triangula inferior\n");
    }


    return 0;
}
