#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int medicao;

    printf("Informe a medi��o de glicose do paciente:\n");
    scanf("%d", &medicao);

    if (medicao<=99)
    {
        printf("Paciente com Taxa Normal!");
    }
    else if (medicao>=100 && medicao<=125)
    {
        printf("Paciente Pr�-Diab�tico!");
    }
    else if (medicao>=126 && medicao<=130)
    {
        printf("Paciente Diab�tico!");
    }

    return 0;
}
