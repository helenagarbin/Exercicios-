#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float insulinajejum;
    float glicosejejum;
    float IR;

    printf("\nInforme a insulina jejum de uma pessoa:\n");
    scanf("%f", &insulinajejum);
    printf("\nInforme a glicose jejum de uma pessoa:\n");
    scanf("%f", &glicosejejum);

    IR=(insulinajejum*glicosejejum)/22.5;

    printf("\nO �ndice HOMA-IR de uma pessoa diab�tica �: %.1f\n", IR);


    return 0;
}
