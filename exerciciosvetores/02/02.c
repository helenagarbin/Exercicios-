#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin

2) Declare um vetor de 07 posições e o preencha com os 07 primeiros números impares e
imprima os valores do vetor da seguinte maneira:
Posição 1 do vetor =1
Posição 2 do vetor =3....
Posição 7 do vetor =13
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int V[7];
    int i;

    printf("Digite 7 valores para o vetor V:\n");
    for(i=0; i<7; i++)
    {
        printf("Posição[%d]:", i);
        scanf("%d", &V[i]);
    }

    printf("V[i]:\n");
    for (i=0; i<7; i++)
    {
        printf("Posição %d do vetor = %d\n", i, V[i]);
    }

    return 0;
}
