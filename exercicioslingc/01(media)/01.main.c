#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota1, nota2, nota3, media;

    setlocale(LC_ALL, "Portuguese");

    printf("Escreva a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Escreva a segunda nota:\n");
    scanf("%f", &nota2);
    printf("Escreva a terceira nota:\n");
    scanf("%f", &nota3);

    printf("A primeira nota �: %.1f.\n", nota1);
    printf("A segunda nota �: %.1f.\n", nota2);
    printf("A terceira nota �: %.1f.\n", nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("A media do aluno �:%.1f\n", media);

    return 0;
}
