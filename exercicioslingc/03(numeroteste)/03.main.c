#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numero;

    setlocale(LC_ALL,"Portuguese");

    printf("\nEscreva um número inteiro:\n");
    scanf("d", &numero);

     if (numero % 2 == 0)
     {
         printf("O número é par.\n", numero);
     }
     else
     {
         printf("O número é impar.\n", numero);
     }


     if (numero>0)
     {
         printf("O número é positivo");
     }
     else
     if (numero<0)
     {
         printf("O número é negativo");
     }
     else (numero = 0)
     {
         printf("Número é nulo");
     }

   return 0;
}

