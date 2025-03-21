#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float peso;
    float altura;
    float IMC;

    printf("\nEscreva a altura de uma pessoa:\n");
    scanf("%f", &altura);
    printf("\nEscreva o peso (em kg) de uma pessoa:\n");
    scanf("%f", &peso);

    IMC = peso / (altura*altura);

    printf("\nO IMC é: %.2f\n", IMC);

    return 0;
}

