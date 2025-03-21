#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int v[20]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200};

    int menor = v[0];
    int maior = v[0];
    int i;

    for(i = 1; i < 20; i++)
    {
        if(v[i] < menor)
        {
            menor = v[i];
        }

        if(v[i] > maior)
        {
            maior = v[i];
        }
    }

    printf("O maior valor do vetor com 20 elementos é: %d\n", maior);
    printf("O menor valor do vetor com 20 elementos é: %d\n", menor);
}
/*1)Um programa que encontre o menor e o maior elemento de um vetor com 20 elementos inicializados.*/
