#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
3) Fa�a um programa em C que leia um n�mero N (inteiro) e
calcule e imprima a quantidade de d�gitos que o n�mero N possui.
Para isso desenvolva uma fun��o para calcular a quantidade de d�gitos de um n�mero.
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

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &N);

    contardigitos = quant_digitos(N);

    printf("O n�mero digitado � %d e possui %d d�gitos\n", N, contardigitos);

    return 0;
}
