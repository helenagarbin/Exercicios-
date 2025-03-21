#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin

1) Crie um vetor W de 12 posições de valores inteiros, preencha as posições do vetor com
valor zero. Crie dois vetores X e Y de 12 posições, e preencha cada posição com um
valor aleatório e inteiro. Some os respectivos valores das posições de X e Y e insira
esse valor na respectiva posição do vetor W. Ao final seu programa deverá escrever os
valores de X e Y e a soma dos valores em W, informando a posição em que o valor
somado se encontra em W.
*/

#define TAM 12

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int W[TAM]={0}; //inicializando com as posições do vetor com valor zero;
    int X[TAM];
    int Y[TAM];
    int i;

    printf("Digite 12 número para o primeiro vetor:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d]:", i);
        scanf("%d", &X[i]);
    }


    printf("Digite 12 número para o segundo vetor:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d]:", i);
        scanf("%d", &Y[i]);
    }

    printf("\nX[i]=\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d] = %d\n", i, X[i]);
    }

    printf("\nY[i]=\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d] = %d\n", i, Y[i]);
    }

    for (i=0; i<TAM; i++)
    {
        W[i]=X[i]+Y[i];
    }

    printf("\nW(X+Y)=\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d] = %d\n", i, W[i]);
    }

    return 0;
}
