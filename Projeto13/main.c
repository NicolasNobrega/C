#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "conio2.h"

/* faça um programa que rode uma quantidade aleatoria de vezes e ao final mostrar
A: a média dos números sorteados
B: e quais foram os números sorteados impressos na tela*/

int main(){
setlocale(LC_ALL, "Portuguese");

	int s,cont;
	int soma = 0;
	
	srand(time(NULL));
	
	s = rand()%91;

	printf(" %d foi o numero sorteado", s);
	for (cont = 0;cont < 5; cont ++){
		soma +=cont;
		printf(" %d ", cont);
	}
	
	printf(" a Media foi %d ", soma/s);
	
}
