#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
4) Faça uma função que verifique se um numero é primo.
A função deve retornar um valor lógico (0 – falso e 1 – verdadeiro).
No programa principal leia indeterminados números inteiros positivos (até que o usuário digite -1)
e escreva se cada um dos números é primo ou não.
*/
int verifique_numprimo (int num)
{
    int i;

    if(num <=1)
    {
        return 0;
    }

    for(i=2; i*i <= num; i++)
    {
        if(num%i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
   setlocale(LC_ALL,"Portuguese");

   int numero;

   do
   {
       printf("\nDigite um número inteiro positivo (ou, caso queira encerrar o programa, digite -1):\n");
       scanf("%d", &numero);

       if(numero == -1)
       {
           break;
       }

       if(verifique_numprimo(numero))
       {
           printf("\nO número %d é primo\n", numero);
       }
       else
       {
           printf("\nO número %d não é primo\n", numero);
       }
   }
   while (numero != -1);

   return 0;
}
