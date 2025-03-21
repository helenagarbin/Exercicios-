#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Aluna: Helena Tubino Garbin
8) Faça uma função que receba como parâmetro um caractere que represente uma operação (+, -, / ou *)
e um vetor de números. Aplique de forma crescente a operação aos valores do vetor e retorne o resultado.
*/

int aplicacao_operacao(char operacao, int vetor[], int tamanho)
{
    int i, retorna;

    retorna = vetor[0];

    if(tamanho <= 0)
    {
        printf("Vetor é vazio\n");
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
                    printf("Divisão por zero\n");
                    return 0;
                }
                break;
            default:
                printf("Operação não definida\n");
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

    printf("\nDigite a operação que deseja: +, -, * ou /\n");
    scanf(" %c", &operacao);

    printf("\nA operação deseja é: %c\n", operacao);

    printf("\nDigite o tamanho do vetor desejado:\n");
    scanf("%d", &tamanho);

    printf("\nO tamanho do vetor é: %d\n", tamanho);

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
        printf("Posição [%d] = %d\n", i, vetor[i]);
    }



    int retorna = aplicacao_operacao(operacao, vetor, tamanho);

    printf("\nretorna = %d\n", retorna);

    return 0;
}

