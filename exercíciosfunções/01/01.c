#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
1) Fa�a um procedimento (fun��o com retorno vazio) que recebe a um n�mero inteiro imprima se ele � par ou �mpar.
No programa principal leia indeterminados n�meros positivos (at� que seja informado um n�mero negativo)
 e informe para cada um desse n�mero se ele � par ou �mpar.
*/

void numero_negoupar(int numero)
{
    if(numero%2 == 0)
    {
        printf("%d � um n�mero par\n", numero);
    }
    else
    {
        printf("%d � um n�mero �mpar\n", numero);
    }
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int num;

    while (1)
    {
        printf("Informe um n�mero positivo (ou, caso queira encerra o programa, um negativo):\n");
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
