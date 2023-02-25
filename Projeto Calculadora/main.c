#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Faça um Calculadora

int main()
{
setlocale(LC_ALL, "Portuguese");
//Variaveis
	int num1, num2, soma, subtracao, multi, div;
	
//Receber Variaveis
	printf("Calculadora 1.0\n");
	printf("Entre os 2 numeros a serem processados: ");
	scanf("%i%i", &num1, &num2);
	
//Calculos
	soma		= num1 + num2;
	subtracao	= num1 - num2;
	multi		= num1 * num2;
	div			= num1 / num2;
	
//Saida
	printf("A soma é: %i\n", soma );
	printf("A subtração é %i\n",subtracao);
	printf("O produto da multiplicação é: %i \n", multi);
	printf("A divisão é: %i \n", div);
	
	return 0;
}
