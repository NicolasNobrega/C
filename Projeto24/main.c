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
        printf("1- Inserir Número na Lista\n");
        printf("2- Listar os Números\n");
        printf("3- Ver a Média dos Números\n");
        printf("4- Maior Número\n");
        printf("0- Sair\n");

        printf("Digite o Número correspondente: ");
        scanf("%d", &option);

        manageOptions(option, list);
    }

    printf("Saindo...\n");

    return 0;
}
