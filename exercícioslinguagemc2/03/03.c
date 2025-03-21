#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float LDL;
    float CT;
    float HDL;
    float TG;

    printf("\nEscreva o Colesterol Total de uma pessoa:\n");
    scanf("%f", &CT);
    printf("\nEscreva O HDL (HDL-Colesterol) de uma pessoa:\n");
    scanf("%f", &HDL);
    printf("\nEscreva o TG (Triglicerídeos) de uma pessoa:\n");
    scanf("%f", &TG);


    LDL=CT-HDL-(TG/5);

    printf("\nO LDL de uma pessoa é: %.2f", LDL);

    return 0;
}
