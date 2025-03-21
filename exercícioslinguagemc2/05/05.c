#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int PAM;
    int PAD;
    int PAS;

    printf("Escreva a PA (pressão arterial) diastólica de uma pessoa:\n");
    scanf("%d", &PAD);
    printf("\nEscreva a PA (pressão arterial) sistólica de uma pessoa:\n");
    scanf("%d", &PAS);

    PAM = ((2*PAD)+PAS)/3;

    printf("\nA Pressão Arterial Média (PAM) de uma pessoa é: %.2d\n", PAM);

    return 0;
}
