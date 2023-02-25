#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* faça um programa em que serão sorteados 5 numeros entre 0 e 80 e mostre como resultado uma lista com os numeros digitados */

int main() {
	setlocale(LC_ALL, "Portuguese");
	int c;
	int r[6];
	
    printf("Gerando 5 numeros ");
	for (c = 1; c<6; c++){
		srand((unsigned)time(NULL));
		r[c]= rand()% 81;
		sleep(1);
		printf(".");
	}
	for (c=1; c<6; c++){
		printf("\n %d é o numero %d ",r[c],c);
	}
	getch();
	return 0;
}
