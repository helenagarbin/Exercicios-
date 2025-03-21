#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
2) Faça um programa que leia um número N (inteiro) e
calcule e imprima o fatorial de N. Para isso desenvolva u
ma função para calcular o fatorial de um número.
*/

int calculofatorial(int numero)
{
    int fatorial=1;
    int i;

    for(i=1; i<=numero; i++)
    {
      fatorial=fatorial*i;
    }

    return fatorial;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int N;
    int resultado;

    printf("Digite um número inteiro para calcular seu fatorial:\n");
    scanf("%d", &N);

    resultado = calculofatorial(N);


    printf("O fatorial de %d é: %d\n", N, resultado);

    return 0;
}
