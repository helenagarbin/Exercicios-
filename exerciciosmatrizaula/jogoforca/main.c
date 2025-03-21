#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

#define QUANT_CONCEITO 3
#define TAM_MAXPALAVRA 14
#define MAXERROS 6

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char conceitos[QUANT_CONCEITO][TAM_MAXPALAVRA] = {
        "organelas",
        "citoesqueleto",
        "ribossomo"
    };

    int escolha, tamanhopalavra, tentativasrestantes, acertos=0;
    char palavradescoberta[TAM_MAXPALAVRA];
    char tentativas[TAM_MAXPALAVRA];
    char letra;
    int i;
    int letra_encontrada = 0;

    srand(time(NULL));

    escolha = rand() % QUANT_CONCEITO;

    tamanhopalavra = strlen(conceitos[escolha]);

    char palavra[TAM_MAXPALAVRA];
    strcpy(palavra, conceitos[escolha]);


    for(i=0; i<tamanhopalavra; i++)
    {
        palavradescoberta[i] = '_';
    }

    palavradescoberta[tamanhopalavra] = '\0';

    printf("Bem-vindo ao Jogo da Forca sobre Biologia Celular e Tecidual!\n");


    while (tentativasrestantes>0 && acertos<tamanhopalavra)
    {
        printf("\nA palavra a ser descoberta é: %s", palavradescoberta);
        printf("\n");
        printf("Tentativas Restantes: %d\n", tentativasrestantes);

        printf("Digite uma letra:\n");
        scanf("%c", &letra);


        for(i=0; i<tamanhopalavra; i++)
        {
            if (palavra[i] == letra && palavradescoberta[i] == '_')
            {
                palavradescoberta[i] = letra;
                letra_encontrada = 1;
                acertos++;
            }
        }

        if (!letra_encontrada)
        {
            tentativasrestantes++;
        }
        printf("Letra não encontrada. Tentativas restantes:%d\n", tentativasrestantes);

    }


        switch (tentativasrestantes)
        {
            case 0:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |\n");
                printf("   |\n");
                printf("   |\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
            case 1:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |       O\n");
                printf("   |\n");
                printf("   |\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
            case 2:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |       O\n");
                printf("   |       |\n");
                printf("   |\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |       O\n");
                printf("   |      /|\n");
                printf("   |\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |       O\n");
                printf("   |      /|\\\n");
                printf("   |\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
            case 5:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |       O\n");
                printf("   |      /|\\\n");
                printf("   |      /\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
            case 6:
                printf("\n\n");
                printf("    _______\n");
                printf("   |       |\n");
                printf("   |       O\n");
                printf("   |      /|\\\n");
                printf("   |      / \\\n");
                printf("   |\n");
                printf("  _|_____\n\n");
                break;
        }

    if (tentativasrestantes == 6)
    {
        printf("\nNúmero de tentativas (6))esgotadas. A palavra era: %s\n", palavra);
    }
    else
    {
        printf("\nParabéns Jogador! Você descobriu qual era a palavra: %s\n", palavra);
    }

    return 0;
}
