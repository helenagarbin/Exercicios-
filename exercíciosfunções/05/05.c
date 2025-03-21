#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
5) Fa�a uma fun��o que calcule a s�rie de Fibonacci.
No programa principal leia um n�mero N e imprima o valor da sequencia na posi��o N.
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

    printf("Digite o numero (N) para mostrar a posi��o o valor na sequ�ncia de Fibonacci:\n");
    scanf("%d", &N);

    if(N<0)
    {
        printf("O n�mero n�o deve ser negativo");
        return 1;
    }

    resultado = sequenciafibonacci(N);

    printf("O termo na posi��o %d da sequ�ncia de Fibonacci �: %d\n", N, resultado);


    return 0;
}
