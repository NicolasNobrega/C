#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* faça um programa q receba como dados o valor de uma compra e a quantidade de parcelas e mostre
como saida o valor da conta com o desconto senguindo a tabela

A-> valor até 500 reais com 3x parcelas desconto de 5% 
B-> valor de acima de 500 com parcelas acima de 3x desconto de 10% */

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float v,d,p1;
		
	int p;
	
	printf("Digite o Valor: ");
	
	scanf("%f",&v);
	
	printf("Digite o Valor das Parcelas: ");
	
	scanf("%d",&p);
	
	p1= v*p;
	
	if(v <= 500 && p<=3)
	{
	
		d =p1-(p1*0.05);
		
		printf("O valor da Compra é %.2f com o desconto é %.2f", p1, d);

	}else if(v > 500 && p>3)
	{
		d =p1-(p1*0.10);
		
		printf("O valor da Compra é %.2f com o desconto é %.2f", p1, d);
	}
	return 0;
}
