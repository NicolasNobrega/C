#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "func.h"

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int option = 5;
    int size = 10;
    int i;

    float list[size];

    for (i = 0; i < size; i++)
    {
        list[i] = -1;
    }

    while (option != 0)
    {
        printf("1- Inserir N�mero na Lista\n");
        printf("2- Listar os N�meros\n");
        printf("3- Ver a M�dia dos N�meros\n");
        printf("4- Maior N�mero\n");
        printf("0- Sair\n");

        printf("Digite o N�mero correspondente: ");
        scanf("%d", &option);

        manageOptions(option, list);
    }

    printf("Saindo...\n");

    return 0;
}
