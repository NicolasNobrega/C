#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dado de entrada uma idade de uma pessoa e mostre como resultado a idade desta pessoa daqui a trinta anos*/

main(void) {
	setlocale(LC_ALL, "Portuguese");
	char n[20];
	float i1,i2;
	printf("Digite seu Nome ");
	scanf("%s", &n);
	printf("Digite sua idade ");
	scanf("%f", &i1);
	
	//resultado
	
	i2= i1 + 30;
	
	printf("A idade de %s daqui a trinta anos será %.0f",n,i2);
	return 1;
}
