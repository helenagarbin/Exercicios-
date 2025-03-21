#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
2) Fa�a um programa que leia um n�mero N (inteiro) e
calcule e imprima o fatorial de N. Para isso desenvolva u
ma fun��o para calcular o fatorial de um n�mero.
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

    printf("Digite um n�mero inteiro para calcular seu fatorial:\n");
    scanf("%d", &N);

    resultado = calculofatorial(N);


    printf("O fatorial de %d �: %d\n", N, resultado);

    return 0;
}
