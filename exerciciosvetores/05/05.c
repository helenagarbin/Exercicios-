#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Aluna: Helena Tubino Garbin

5) Leia um vetor de 40 posi��es.
Contar e escrever quantos valores pares ele possui */

#define TAM 40
int main()
{
    setlocale(LC_ALL,"Portuguese");
    int V[TAM];
    int i, pares;

    printf("Digite os 40 n�meros:\n"); //lendo as 40 posi��es
    for(i=0; i<TAM; i++)
    {
        printf("Posi��o [%d]:", i);
        scanf("%d", &V[i]);
    }

    for(i=0; i<TAM; i++)
    {
        if (V[i] % 2 == 0) //n�mero par
        {
            pares++;
        }
    }

    printf("o vetor V possui %d valores pares\n", pares);

    return 0;
}
