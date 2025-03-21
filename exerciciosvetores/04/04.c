#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Aluna: Helena Tubino Garbin

4) Leia um vetor de 20 posi��es e em seguida um valor X qualquer. Seu programa dever�
fazer uma busca do valor de X no vetor lido e informar a posi��o em que foi
encontrado ou se n�o foi encontrado.
*/

#define TAM 20
int main()
{
    setlocale(LC_ALL,"Portuguese");

    int x,i;
    int V[TAM];
    int posicao=-1; //posi��o anterior a 0

    printf("Informe 20 valores para o vetor V:\n");
    for(i=0; i<TAM; i++)
    {
        printf("Posi��o[%d]:", i);
        scanf("%d", &V[i]);
    }

    printf("V[i]:\n");

    for(i=0; i<TAM; i++)
    {
        printf("Posi��o [%d] = %d\n", i, V[i]);
    }

    printf("Digite o valor de x:\n");
    scanf("%d", &x);

    for(i=0; i<TAM; i++)
    {
        if(V[i] == x)
        {
            posicao = i;
            break;
        }
    }

    if(posicao == -1)
    {
        printf("O valor %d n�o foi encontrado dentro do vetor V\n");
    }
    else
    {
        printf("O valor %d foi encontrado na posi��o [%d]\n", x, posicao);
    }
    return 0;
}
