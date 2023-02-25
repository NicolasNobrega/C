#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que receba como dados de entrada com numeros inteiros e mostre como resultado o dobro do numero digitado */

main(){ //comando que serve para iniciar o programa
	setlocale(LC_ALL, "Portuguese");
	int n1;
	int t;
		printf("digite um numero inteiro ");
	scanf("%d", &n1);
	
	//calculo
	
	t = n1 *2;
	
	//resultado
	printf("O dobro de %d é %d",n1,t);
	
}
