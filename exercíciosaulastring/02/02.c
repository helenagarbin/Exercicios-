#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Nome: Helena Tubino Garbin*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char string1[100], string2[100];

    printf("\nDigite o primeiro string:\n");
    scanf("%s", string1);

    printf("\nA primeira string �:%s\n", string1);

    printf("\nDigite o segundo string:\n");
    scanf("%s", string2);

    printf("\nA segunda string �:%s\n", string2);

     if (strlen(string1) > 1 && strlen(string2) > 1)
     {
        printf("\n\nA Segunda letra da primeira string �: %c\n", string1[1]);
        printf("\n\nA Segunda letra da segunda string �: %c\n", string2[1]);
     }
     else
     {
        printf("N�o tem segunda letra, seja na primeira string, na segunda, ou em embas.\n");
     }


    return 0;
}
