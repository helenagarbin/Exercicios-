#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;

    setlocale(LC_ALL,"Portuguese");

    printf("\nEscreva um n�mero inteiro:\n");
    scanf("d", &numero);

     if (numero % 2 == 0)
     {
         printf("O n�mero � par.\n", numero);
     }
     else
     {
         printf("O n�mero � impar.\n", numero);
     }


     if (numero>0)
     {
         printf("O n�mero � positivo");
     }
     else
     if (numero<0)
     {
         printf("O n�mero � negativo");
     }
     else (numero = 0)
     {
         printf("N�mero � nulo");
     }

   return 0;
}

