#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que receba como dado 5 numeros quaisquer e mostre como resultado
A: a Soma dos numeros digitados
B: A media dos numeros digitados

OBS: Ultilizar no maximo 3 variaveis */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	int i;
	double n1,n2;
	for(i = 0; i<5; i++){
		
		printf("Digite um n�mero ");
		scanf("%lf",&n1);
		
	n2 = n1 + n2;
	} 
	
	printf("Soma dos n�meros � %.2lf\n", n2);
	printf("M�dia dos n�meros � %.2lf\n", n2/5);

}
