#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
4) Fa�a uma fun��o que verifique se um numero � primo.
A fun��o deve retornar um valor l�gico (0 � falso e 1 � verdadeiro).
No programa principal leia indeterminados n�meros inteiros positivos (at� que o usu�rio digite -1)
e escreva se cada um dos n�meros � primo ou n�o.
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
       printf("\nDigite um n�mero inteiro positivo (ou, caso queira encerrar o programa, digite -1):\n");
       scanf("%d", &numero);

       if(numero == -1)
       {
           break;
       }

       if(verifique_numprimo(numero))
       {
           printf("\nO n�mero %d � primo\n", numero);
       }
       else
       {
           printf("\nO n�mero %d n�o � primo\n", numero);
       }
   }
   while (numero != -1);

   return 0;
}
