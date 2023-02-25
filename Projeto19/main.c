#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* faça um programa que receba como dados o valor de 5 conpras onde compras maiores que 500 dar o desconto de 5% e ao final:
A- a lista com as vendas e o seu desconto caso tenha tido
B- a terceira venda
C- o total de desconto obtido em todas as vendas */

main() {
	setlocale(LC_ALL, "Portuguese");
	
	int c;
	double v[6],d,dt;
	
	
	for(c = 1; c<6; c++){
		printf("Digite o valor da %dª venda: ",c);
		scanf("%lf", &v[c]);
		
		if ( v[c]>=500){
				printf("DESCONTO APLICADO!\n");
				
				d = v[c] * 0.05;
				dt = dt + d;
				v[c] = v[c] - d;
				
		}
	}
	
	for(c = 1; c<6; c++){
		printf("Valor da %dª venda foi : %.2lf\n", c , v[c]);

	}
	printf("\nValor da 3ª venda foi : %.2lf\n\n", v[3]);
	printf("Total descontado: %.2lf", dt);
	return 0;
}
