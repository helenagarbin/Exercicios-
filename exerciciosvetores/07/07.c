#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 10

/*Aluna: Helena Tubino Garbin

7) Leia um vetor de 10 posições e verifique se existem valores iguais. Informe o número
de valores iguais que foram encontrados neste vetor!*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int V[TAM];
    int i, j, igual=0;

    printf("Digite 10 número para o vetor V:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posição [%d]:", i);
        scanf("%d", &V[i]);
    }

    for(i=0; i<9; i++)
    {
        for(j = i + 1; j<TAM; j++)
        {
            if (V[i] == V[j])
            {
                igual++;
                break;
            }
        }
    }

    printf("O número de valores encontrados iguais é: %d", igual);
    return 0;
}
