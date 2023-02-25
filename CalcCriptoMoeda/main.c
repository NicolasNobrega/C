#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int     continua = 's';
int main(int argc, char *argv[]) 
{
	while (continua == 's'){
	
	setlocale(LC_ALL, "Portuguese");
	//Variaveis
	
	float	VDraco = 0.0,
		QDraco = 0.0,
		DGanho = 0.0,
		RGanho = 0.0,
		Dolar  = 5;
	
	printf ("Calculo de Ganho no Mir4 \n\n");
	
	//Receber Variaveis
	printf("Coloque o Valor do Draco em dolar: ");
	scanf("%f", &VDraco);
	printf("Coloque a Quantidade de Draco : ");
	scanf("%f", &QDraco);
	
	//Calculos
	DGanho = VDraco * QDraco;
	RGanho = DGanho * Dolar;
	
	//saida
	printf ("Valor a Ganhar em Dolar é : %.3f \n\n", DGanho);
	printf ("Valor a Ganhar em Real é : %.3f \n\n", RGanho);
	printf ("Lembrando que o valor do Dolar é : %.3f \n\n", Dolar);
	
	printf("Tecle 's' se deseja continuar\n");
    continua = getch();
	}
	return 0;
}
