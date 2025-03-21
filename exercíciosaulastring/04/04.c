#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Nome: Helena Tubino Garbin*/

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char cargo[100];
    float salarioatual, salarionovo, diferenca;

    printf("Por favor, informe o seu cargo dentro da empresa:\n");
    scanf("%s", &cargo);

    printf("\nInforme seu salário atual:\n");
    scanf("%f", &salarioatual);

    if(strcmp(cargo, "Gerente")==0)
    {
        salarionovo=(salarioatual * 1.1);
    }
    else if(strcmp(cargo, "Engenheiro")==0)
    {
        salarionovo=(salarioatual * 1.2);
    }
    else if(strcmp(cargo, "Tecnico")==0)
    {
        salarionovo=(salarioatual * 1.3);
    }
    else
    {
        salarionovo=(salarioatual * 1.4);
    }

    diferenca = salarionovo - salarioatual;
    printf("\n");
    printf("O salário antigo era: R$ %.2f", salarioatual);
    printf("\n");
    printf("\nO novo salario é: R$ %.2f", salarionovo);
    printf("\n");
    printf("\nA diferença dos salários é: R$ %.2f", diferenca);
    printf("\n");

    system("pause");

    return 0;
}
