#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dado 5 numeros quaisquer e mostre como resultado
A: a Soma dos numeros digitados
B: A media dos numeros digitados

OBS: Ultilizar no maximo 3 variaveis */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");

	int i;
	double n1,n2;
	for(i = 0; i<5; i++){
		
		printf("Digite um número ");
		scanf("%lf",&n1);
		
	n2 = n1 + n2;
	} 
	
	printf("Soma dos números é %.2lf\n", n2);
	printf("Média dos números é %.2lf\n", n2/5);

}
