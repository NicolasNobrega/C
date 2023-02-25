#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"portuguese");
//variaveis
	float t,r1,r2;
	char n;
	
	
//Entrada
	printf("Digite o tipo de temperatura de entrada: \n C para Celsios;\n K para Kelvin;\n F para Fahrenheit;\n");
	
	printf("Digite: ");
	scanf("%c", &n);

	switch (n){
		case 'c':
			printf("Você escolheu Celsios\n");
			printf("Coloque a temperatura ");
			scanf("%f", &t);
			r1 = (t*1.8)+32;
			r2 = t + 273;
			printf("Em Fahrenheit é: %.2f °F\n",r1);
			printf("Em Kelvin é: %.2f °K\n",r2);
			break;

			case 'k':
			printf("Você escolheu Kelvin\n");
			printf("Coloque a temperatura ");
			scanf("%f", &t);
			r1 = ((t-273)*1.8)+32;
			r2 = t - 273;
			printf("Em Fahrenheit é: %.2f °F\n",r1);
			printf("Em Celsios é: %.2f °C\n",r2);
			break;

			case 'f':
			printf("Você escolheu Fahrenheit \n");
			printf("Coloque a temperatura ");
			scanf("%f", &t);
			r1 = (t-32)/1.8;
			r2 = (((t-32)*5)/9)+273,15;
			printf("Em Celsios é: %.2f °C\n",r1);
			printf("Em Kelvin é: %.2f °k\n",r2);
			break;
	}
	//printf("Digitou %c ", n);
	return 0;
}
