#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
3) Faça um programa em C que leia um número N (inteiro) e
calcule e imprima a quantidade de dígitos que o número N possui.
Para isso desenvolva uma função para calcular a quantidade de dígitos de um número.
*/

int quant_digitos(int num)
{
    int cont = 0;

    if(num == 0)
    {
        return 1;
    }

    while (num!=0)
    {
        num = num/10;
        cont++;
    }

    return cont;
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int N, contardigitos;

    printf("Digite um número inteiro:\n");
    scanf("%d", &N);

    contardigitos = quant_digitos(N);

    printf("O número digitado é %d e possui %d dígitos\n", N, contardigitos);

    return 0;
}
