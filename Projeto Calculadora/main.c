#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Fa�a um Calculadora

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
	printf("A soma �: %i\n", soma );
	printf("A subtra��o � %i\n",subtracao);
	printf("O produto da multiplica��o �: %i \n", multi);
	printf("A divis�o �: %i \n", div);
	
	return 0;
}
