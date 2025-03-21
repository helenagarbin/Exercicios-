#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
1) Faça um procedimento (função com retorno vazio) que recebe a um número inteiro imprima se ele é par ou ímpar.
No programa principal leia indeterminados números positivos (até que seja informado um número negativo)
 e informe para cada um desse número se ele é par ou ímpar.
*/

void numero_negoupar(int numero)
{
    if(numero%2 == 0)
    {
        printf("%d é um número par\n", numero);
    }
    else
    {
        printf("%d é um número ímpar\n", numero);
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int num;

    while (1)
    {
        printf("Informe um número positivo (ou, caso queira encerra o programa, um negativo):\n");
        scanf("%d", &num);

        if(num<0)
        {
            printf("Programa encerrado\n");
            break;
        }

        numero_negoupar(num);
    }


    return 0;
}
