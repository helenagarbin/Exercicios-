#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
5) Faça uma função que calcule a série de Fibonacci.
No programa principal leia um número N e imprima o valor da sequencia na posição N.
Serie de Fibonacci = 1, 1, 2, 3, 5, 8, 13, 21, 34...
*/
int sequenciafibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return sequenciafibonacci(n-1) + sequenciafibonacci(n-2);
    }

}
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int N, resultado;

    printf("Digite o numero (N) para mostrar a posição o valor na sequência de Fibonacci:\n");
    scanf("%d", &N);

    if(N<0)
    {
        printf("O número não deve ser negativo");
        return 1;
    }

    resultado = sequenciafibonacci(N);

    printf("O termo na posição %d da sequência de Fibonacci é: %d\n", N, resultado);


    return 0;
}
