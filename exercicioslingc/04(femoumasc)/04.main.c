#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    char sexo;

    setlocale(LC_ALL, "Portuguese");

    printf("\nEscreva o sexo do paciente (M para Masculino e F para Feminino):\n");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        printf("O paciente � do sexo Masculino");
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        printf("O paciente � do sexo Feminino");
    }

    return 0;
}
