#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que receba como dados de entrada dois numeros quais quer e mostre como resultado:
A- soma dos numeros digitados
B- a media dos numeros digitados */

main() {
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2;
	printf("Digite um n�mero ");
	scanf("%f",&n1);
	printf("Digite um segundo n�mero ");
	scanf("%f",&n2);
	system("download.png");
	//resultado
	
	printf("A soma dos N�meros digitados � %.2f\n", n1 + n2);
	printf("A media dos N�meros digitados � %.2f\n", (n1 + n2) /2);
	return 0;
}
