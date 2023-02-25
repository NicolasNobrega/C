#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

	/*Faça um programa que receba como dados de entrada um numero inteiro qualquer e mostre como resultado
	se o numero digitado está no intervalo de 0 e 100*/

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int n;
	printf("Digite um número ");
	scanf("%d", &n);
	
	if ((n >=0) ||(n <= 100))
	{
		
		printf("seu numero está em 0 e 100\n");
		
	}else
	{
		
		printf("Não");
	}

	return 0;
}
