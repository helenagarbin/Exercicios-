#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio;
    float area;

    printf("Escreva um raio de um círculo:\n");
    scanf("%f", &raio);

    area=3.1415*(raio*raio);

    printf("A área de um círculo é: %.2f\n", area);

    return 0;
}
