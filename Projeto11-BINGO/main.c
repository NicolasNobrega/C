#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que imprima na tela em ordem aleat�ria 6 n�meros entre 0 e 91*/

int main() {
	int cont;
	for (cont = 0; cont<6; cont++){
		int c;
		srand((unsigned)time(NULL));
		c = rand()% 91;
		printf("%d\n",c);
		sleep(1);
	}
	getch();
	return 0;
}
