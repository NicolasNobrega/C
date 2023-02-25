#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* faça um programa que receba 5 vendas se valor maior que 200 calcule o desconto como 10% e mostre como resultado
A= o total de venda sem desconto
B= o total de desconto
OBS: 5 variaveis */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float v,d,n3,n4;
	int i;
	
	for(i= 0; i<5; i++){
		printf("Digite o Valor das vendas ");
		scanf("%f", &v);
		
		if ( v >=200){
			d = v * 0.10;
			n3 = d + n3;
		}
		n4 = v + n4;
	}
	printf("O Desconto Total é de: %.2f\n",n3);
	printf("O Total de Vendas é: %.2f\n",n4);
	
	
	
	return 0;
}
