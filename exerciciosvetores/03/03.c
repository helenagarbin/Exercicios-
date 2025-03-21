#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aluna: Helena Tubino Garbin

3) Leia um vetor de 16 posi��es, preencha com valores aleat�rios e troque os 8 primeiros
valores pelos 8 �ltimos. Imprima o vetor original e depois o vetor obtido com a troca
realizada.
*/

#define TAM 16
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int V[TAM];
    int i;
    int temporario;


    printf("Digite 16 valores para o vetor V:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posi��o[%d]:", i);
        scanf("%d", &V[i]);
    }

    printf("Vetor Original:\n");

    for(i=0; i<TAM; i++)
    {
        printf("Posi��o [%d] = %d\n", i, V[i]);
    }

    printf("\n\n");

    for(i=0; i<8; i++)
    {
        temporario = V[i];
        V[i] = V[i+8];
        V[i+8] = temporario;
    }

    printf("\nVetor ap�s a troca:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posi��o [%d] = %d\n", i, V[i]);
    }

    return 0;
}
