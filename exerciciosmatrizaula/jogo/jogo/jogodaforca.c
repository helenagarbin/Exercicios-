#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

/*
Alunas: Helena Tubino Garbin e Luciana Marques Pereira das Neves
Disciplina: Algoritmos e Programação(Turma B)
*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char conceitos[4][14] = {
        "organelas",
        "citoesqueleto",
        "mitocondria",
        "ribossomo"
    };

    srand(time(NULL));

    int escolha = rand() % 4;
    int tamanhopalavra = strlen(conceitos[escolha]);
    char palavra[14];
    strcpy(palavra, conceitos[escolha]);

    char palavradescoberta[14];

    for (int i = 0; i < tamanhopalavra; i++)
    {
        palavradescoberta[i] = '_';
    }
    palavradescoberta[tamanhopalavra] = '\0';

    printf("Bem-vindo ao Jogo da Forca Sobre Biologia Celular e Tecidual!\n");

    int erros = 0;
    int acertos = 0;
    char letra;

    while(erros<6 && acertos<tamanhopalavra)
    {
        printf("\nA palavra a ser descoberta é: %s\n", palavradescoberta);
        printf("\n");
        printf("Digite uma letra:\n");
        scanf(" %c", &letra); // Adicionei um espaço antes de %c para consumir qualquer caractere em branco anterior

        int letra_encontrada = 0;

        for (int i = 0; i < tamanhopalavra; i++)
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
            erros++;
            printf("Letra não encontrada. Tentativas restantes: %d\n", 6-erros);

            printf("  _______       \n");
            printf(" |/      |      \n");
            printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
            printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
            printf(" |       %c     \n", (erros>=2?'|':' '));
            printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
            printf(" |              \n");
            printf("_|___           \n");
            printf("\n\n");
        }

        if (acertos == tamanhopalavra)
        {
            printf("\n Parabéns jogador! Você descobriu a palavra: %s\n", palavra);
        }
    }

    if (erros == 6)
    {
        printf("\n Número de tentativas esgotadas! A palavra era: %s\n", palavra);
    }

    return 0;
}
