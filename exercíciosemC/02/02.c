#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vet[10]; //vetor com 10 posições
    int i, maiorelem, posicao;

    printf("\nDigite os 10 elementos positivos para o vetor:\n");

    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Valor do elemento: ", i + 1);
            scanf("%d", &vet[i]);
        } while (vet[i] <= 0); //enquanto for positivo
    }

    maiorelem = vet[0];
    posicao = 0;

    for (i = 1; i < 10; i++)
    {
        if (vet[i] > maiorelem)
        {
            maiorelem = vet[i];
            posicao = i;
        }
    }

    printf("O maior elemento do vetor é %d e está na posição %d.\n", maiorelem, posicao + 1);

    return 0;
}
/*2)Ler um vetor “vet” de 10 posições (aceitar somente números positivos ).
Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor. */
