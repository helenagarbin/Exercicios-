#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vet[10]; //vetor com 10 posi��es
    int i, maior;

    printf("\nDigite os 10 elementos inteiros para o vetor:\n");

    for(i=0; i<10; i++)
    {
        do
        {
            printf("Valor do elemento: ", i + 1);
            scanf("%d", &vet[i]);
        } while (vet[i] <= 0);
    }

    maior = vet[0];

    for (i = 1; i < 10; i++)
    {
        if (vet[i] > maior)
        {
            maior = vet[i];
        }
    }

    printf("O maior elemento do vetor �: %d\n", maior);

    return 0;
}
/*2)Ler um vetor �vet� de 10 posi��es (aceitar somente n�meros positivos ).
Escrever a seguir o valor do maior elemento de Q e a respectiva posi��o que ele ocupa no vetor. */
