#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char letra;

    setlocale(LC_ALL, "Portuguese");

    printf("Escreva uma letra:\n");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'
        || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O'|| letra == 'U')
    {
        printf("� uma letra vogal\n");
    }
    else
    {
        printf("� uma consoante\n");
    }

    return 0;
}
