#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int PAM;
    int PAD;
    int PAS;

    printf("Escreva a PA (press�o arterial) diast�lica de uma pessoa:\n");
    scanf("%d", &PAD);
    printf("\nEscreva a PA (press�o arterial) sist�lica de uma pessoa:\n");
    scanf("%d", &PAS);

    PAM = ((2*PAD)+PAS)/3;

    printf("\nA Press�o Arterial M�dia (PAM) de uma pessoa �: %.2d\n", PAM);

    return 0;
}
