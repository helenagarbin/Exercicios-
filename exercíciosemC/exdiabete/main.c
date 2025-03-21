#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int medicao;

    printf("Informe a medição de glicose do paciente:\n");
    scanf("%d", &medicao);

    if (medicao<=99)
    {
        printf("Paciente com Taxa Normal!");
    }
    else if (medicao>=100 && medicao<=125)
    {
        printf("Paciente Pré-Diabético!");
    }
    else if (medicao>=126 && medicao<=130)
    {
        printf("Paciente Diabético!");
    }

    return 0;
}
