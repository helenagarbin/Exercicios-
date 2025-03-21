#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ARTIGOS 30

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int codigo[ARTIGOS];
    float preco[ARTIGOS];
    float somaPrecos = 0;
    float mediaArtigos;
    int i;

    printf("Digite os códigos e preços dos artigos:\n", ARTIGOS);
    for (i=0; i<ARTIGOS; i++)
    {
        printf("\nCódigo do artigo: ", i + 1);
        scanf("%d", &codigo[i]);
        printf("\nPreço do artigo: ", i + 1);
        scanf("%f", &preco[i]);
        somaPrecos += preco[i];
    }

    mediaArtigos = somaPrecos / ARTIGOS;

    printf("\nA média dos preços dos artigos é: %.2f\n", mediaArtigos);

    printf("\nCódigos dos artigos com preço superior à média:\n");
    for (i=0; i<ARTIGOS; i++)
    {
        if (preco[i] > mediaArtigos)
        {
            printf("Código: %d\n", codigo[i]);
        }
    }

    return 0;
}
/*6) Uma empresa vende 30 artigos diferentes. Os artigos possuem
 preços variados, sendo cada um
identificado por um
código único. Usando vetores para armazenar essas informações, escreva um programa que:
• Calcule e informe a média dos preços de todos os artigos;
• Informe quais códigos dos artigos com preço superior a média.*/
