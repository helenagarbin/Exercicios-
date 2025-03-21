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

    printf("Digite os c�digos e pre�os dos artigos:\n", ARTIGOS);
    for (i=0; i<ARTIGOS; i++)
    {
        printf("\nC�digo do artigo: ", i + 1);
        scanf("%d", &codigo[i]);
        printf("\nPre�o do artigo: ", i + 1);
        scanf("%f", &preco[i]);
        somaPrecos += preco[i];
    }

    mediaArtigos = somaPrecos / ARTIGOS;

    printf("\nA m�dia dos pre�os dos artigos �: %.2f\n", mediaArtigos);

    printf("\nC�digos dos artigos com pre�o superior � m�dia:\n");
    for (i=0; i<ARTIGOS; i++)
    {
        if (preco[i] > mediaArtigos)
        {
            printf("C�digo: %d\n", codigo[i]);
        }
    }

    return 0;
}
/*6) Uma empresa vende 30 artigos diferentes. Os artigos possuem
 pre�os variados, sendo cada um
identificado por um
c�digo �nico. Usando vetores para armazenar essas informa��es, escreva um programa que:
� Calcule e informe a m�dia dos pre�os de todos os artigos;
� Informe quais c�digos dos artigos com pre�o superior a m�dia.*/
