#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include "func.h"

/*  faça um progama que receba 2 notas de cada aluno e mostre como resultado
A- A lista de alunos aprovados
B- a maior media
C- a media da turma
*/

main() {
	int c;
	double nota[3], m[5];

	
	for (c =1; c<3 ; c++){
		borda();
		gotoxy(32,12);
		printf("Digite a nota do %dª aluno: ");
		scanf("%lf", &nota[c]);
		system("cls");
	}
	getch();
}
