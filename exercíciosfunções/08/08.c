#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
8) Fa�a uma fun��o que receba como par�metro um caractere que represente uma opera��o (+, -, / ou *)
e um vetor de n�meros. Aplique de forma crescente a opera��o aos valores do vetor e retorne o resultado.
*/

int aplicacao_operacao(char operacao, int vetor[], int tamanho)
{
    int i, retorna;

    retorna = vetor[0];

    if(tamanho <= 0)
    {
        printf("Vetor � vazio\n");
        return 0;
    }

    for(i = 1; i < tamanho; i++)
    {
        switch(operacao)
        {
            case '+':
                retorna += vetor[i];
                break;
            case '-':
                retorna -= vetor[i];
                break;
            case '*':
                retorna *= vetor[i];
                break;
            case '/':
                if(vetor[i] != 0)
                {
                    retorna /= vetor[i];
                }
                else
                {
                    printf("Divis�o por zero\n");
                    return 0;
                }
                break;
            default:
                printf("Opera��o n�o definida\n");
                return 0;
        }
    }

    return retorna;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char operacao;
    int tamanho;
    int i;

    printf("\nDigite a opera��o que deseja: +, -, * ou /\n");
    scanf(" %c", &operacao);

    printf("\nA opera��o deseja �: %c\n", operacao);

    printf("\nDigite o tamanho do vetor desejado:\n");
    scanf("%d", &tamanho);

    printf("\nO tamanho do vetor �: %d\n", tamanho);

    int vetor[tamanho];

    printf("\n");

    printf("Digite os %d valores do vetor:\n", tamanho);
    for(i = 0; i < tamanho; i++)
    {
        printf("valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");
    printf("vetor [i]:\n");
    for(i=0; i<tamanho; i++)
    {
        printf("Posi��o [%d] = %d\n", i, vetor[i]);
    }



    int retorna = aplicacao_operacao(operacao, vetor, tamanho);

    printf("\nretorna = %d\n", retorna);

    return 0;
}

