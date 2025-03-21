#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO 20
/*
Aluna: Helena Tubino Garbin
6) Fazer um programa que leia 20 números reais e os armazene em um vetor.
Após isso, chame um procedimento que imprima a quantidade de números que são maiores que a média desses 20 números.

*/

float mediaVetor(float vetor[], int tamanho)
{
    int i;
    float soma = 0.0;

    for(i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }

    return soma / tamanho;
}

void maiorqueMedia(float vetor[], int tamanho)
{
    float media = mediaVetor(vetor, tamanho);
    int cont = 0;
    int i;

    for(i = 0; i < tamanho; i++)
    {
        if(vetor[i] > media)
        {
            cont++;
        }
    }

    printf("A quantidade de números maiores que a média é: %d\n", cont);
}

int main()
{
    float numeros[20];
    int i;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite os 20 números reais:\n");
    for(i = 0; i < 20; i++)
    {
        scanf("%f", &numeros[i]);
    }

    maiorqueMedia(numeros, 20);

    return 0;
}
