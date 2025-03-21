#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 10

int main()
{
    float a[TAMANHO], b[TAMANHO], temporario;
    int i;

    printf("Digite os elementos do vetor A:%d\n", TAMANHO);
    for (i=0; i<TAMANHO; i++)
    {
        printf(" = ", i+1);
        scanf("%f", &a[i]);
    }

    printf("\nDigite os elementos do vetor B:%d\n", TAMANHO);
    for (i=0; i <TAMANHO; i++)
    {
        printf(" = ", i+1);
        scanf("%f", &b[i]);
    }

    for (i=0; i<TAMANHO; i++)
    {
        temporario = a[i];
        a[i] = b[i];
        b[i] = temporario;
    }

    printf("\n novos valores do Vetor A:\n");
    for (i=0; i<TAMANHO; i++)
    {
        printf("%.1f ", a[i]);
    }

    printf("\n novos valores do Vetor B:\n");
    for (i=0; i<TAMANHO; i++)
    {
        printf("%.1f ", b[i]);
    }

    return 0;
}
