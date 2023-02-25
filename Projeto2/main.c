#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dados de entrada dois numeros quais quer e mostre como resultado:
A- soma dos numeros digitados
B- a media dos numeros digitados */

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	printf("Digite um número ");
	scanf("%f",&n1);
	printf("Digite um segundo número ");
	scanf("%f",&n2);
	system("download.png");
	//resultado
	
	printf("A soma dos Números digitados é %.2f\n", n1 + n2);
	printf("A media dos Números digitados é %.2f\n", (n1 + n2) /2);
	return 0;
}
