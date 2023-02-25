#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba como dados de entrada vários numeros inteiros :
A-soma dos numeros digitados
B-quantos numeros foram digitados
*/

main() 
{
	int cont = 1;
	int n, 
		n1= 0,
		n2= 0;
	
	while (cont != 0 )
	{
		printf("Digite um Valor: ");
		scanf("%d",&n);
		printf("digite 0 para sair ");
		scanf("%d",&cont);
		n2 = n2 + n;
		n1 = n1 + 1;
	}
		printf("Soma dos numeros digitados: %d \n", n2);
		printf("Foram digitados %d", n1);
	
}
