#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 20

/* Aluna: Helena Tubino Garbin

6) Crie dois vetores de 20 posições e leia seus valores, crie um terceiro vetor contendo,
nas posições pares os valores do primeiro e nas posições impares os valores do
segundo.
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int A[TAM];
    int B[TAM];
    int C[TAM];
    int i;

    printf("Escreva 20 valores para o vetor A:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d]:", i);
        scanf("%d", &A[i]);
    }

    printf("Vetor A[i]:\n");

    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d] = %d\n", i, A[i]);
    }
    printf("\n\n");

    printf("Escreva 20 valores para o vetor B:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d]:", i);
        scanf("%d", &B[i]);
    }

    printf("Vetor B[i]:\n");

    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d] = %d\n", i, B[i]);
    }
    printf("\n\n");

    for (i=0; i<TAM; i++)
    {
        if(i%2 == 0)
        {
            C[i]=A[i/2];
        }
        else
        {
            C[i]=B[i/2];
        }
    }

    printf("Vetor C[i]:\n");
    for(i=0; i<TAM; i++)
    {
        printf("posição [%d] = %d\n", i, C[i]);
    }

    return 0;
}
