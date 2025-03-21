#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    int num[5];

    printf("Digite cinco números inteiros:\n");
    for(i=0; i<5; i++)
    {
        printf("=", i+1);
        scanf("%d", &num[i]);
    }

    printf("\nA sua ordem inversa:\n");
    for(i=4; i>=0; i--)
    {
        printf("%d\n", num[i]);
    }
    return 0;
}

/*3) Um programa para solicitar 5 números inteiros, via teclado,
e exibi-los na ordem inversa àquela em que foram fornecidos;*/
