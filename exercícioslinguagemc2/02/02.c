#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    float raio;
    float area;

    printf("Escreva um raio de um c�rculo:\n");
    scanf("%f", &raio);

    area=3.1415*(raio*raio);

    printf("A �rea de um c�rculo �: %.2f\n", area);

    return 0;
}
