#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Nome: Helena Tubino Garbin*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    char armazena[100];
    int count = 0, i;

    printf("Digite uma string:\n");
    scanf("%99[^\n]", armazena); //scanf aprimorado

    for (i=0; armazena[i] != '\0'; i++)
    {
        if(armazena[i] == 'a')
        {
            armazena[i] = 'b';
            count++;
        }
    }

    printf("Número de caracteres que foram modificados: %d\n", count);
    printf("String modificada: %s\n", armazena);
    return 0;
}
