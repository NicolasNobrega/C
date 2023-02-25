#include <stdio.h>
#include <stdlib.h>

/* faça um programa que receba como dados de entrada o código 1 para votar em PHP, 2 para Java e 3 para C.
Levando em consideração q vários usuarioas vão votar mostre como resultado:

A- Quantos votos tiveram Cada Línguagem
B- quem ganhou a enquete
C- quantas pessoas votaram no total
*/

main() {
	int v = 1;
	int p,j,c;
	
	while (v !=0){
		printf("Digite seu voto \n");
		printf ("1 – Para Votar em PHP\n");
     	printf ("2 – Para Votar em Java\n");
     	printf ("3 – Para Votar em C\n");
		printf ("0 – Sair do Programa\n\n");
     	printf ("Sua opção: ");
     	scanf  ("%d", &v);
     	
     	switch (v)
		{
        	case 1:
    	 		printf ("Você escolheu PHP\n");
    	 		p++;
  			break;

       		case 2:
    	 		printf ("Você escolheu JAVA\n");
   			break;
   				j++;
   		 	case 3:
    	 		printf ("Você escolheu C\n");
    	 		c++;
  			break;
  			
  			case 0:
  				printf ("Saindo...\n");
  				sleep(1);
  				v = 0;
  		}
	}
	printf ("Resultados foram ");
	printf ("PHP %d",p);
	printf ("Java %d",j);
	printf ("C %d",c);
}
