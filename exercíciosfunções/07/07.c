#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
7) Faça um procedimento que imprima os valores de um vetor.
No programa principal leia um valor N e logo em seguida preencha um vetor com N números inteiros positivos lidos do usuário.
Ao fim imprima os valores do vetor.
*/

void imprimirVetor(int vetor[], int tamanho)
{
    int i;

    printf("Vetor:\n");
    for(i=0; i<tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int N;
    int i;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &N);

    if(N <= 0)
    {
        printf("Informe um valor inteiro positivo\n");
        return 1;
    }

    int vetor[N];

    printf("Digite %d números inteiros positivos para o vetor:\n", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &vetor[i]);
    }

    imprimirVetor(vetor, N);

    return 0;
}
