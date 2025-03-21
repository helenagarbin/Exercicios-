#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Nome: Helena Tubino Garbin*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char palavra1[30], palavra2[30], teste[30];
    int tam, comp;

    printf("\nInforme a primeira string:\n");
    gets(palavra1);

    printf("A palavra digitada é:%s\n", palavra1);

    printf("\nInforme uma segunda string:\n");
    gets(palavra2);

    printf("A palavra digitada é: %s\n", palavra2);

    printf("\n\n");
    strcpy(teste," aula teste");
    printf("A palavra copiada é: %s\n", teste);
    printf("\n\n");

    printf("\n\n");
    strcat(teste," 1 ");
    printf("A palavra concatenada é: %s\n", teste);
    printf("\n\n");

    printf("\n\n");
    tam=strlen(palavra1);
    printf ("\nO tamanho da primeira string é: %d", tam);
    printf("\n\n");

    printf("\n\n");
    comp=strcmp (palavra1, palavra2);
    if (comp==0)
    {
        printf ("\nSao iguais:%d", comp);
    }
    else
    {
        printf ("\nSao diferentes:%d", comp);
    }
    printf("\n\n");


    printf ("\nMaiusculo: %s", strupr(palavra1));
    printf ("\nMinusculo: %s\n", strlwr(palavra1));
    system("pause");

    return 0;
}
