#include <stdio.h>
#include <stdlib.h>

/* fa�a um programa que receba como dados de entrada o c�digo 1 para votar em PHP, 2 para Java e 3 para C.
Levando em considera��o q v�rios usuarioas v�o votar mostre como resultado:

A- Quantos votos tiveram Cada L�nguagem
B- quem ganhou a enquete
C- quantas pessoas votaram no total
*/

main() {
	int v = 1;
	int p,j,c;
	
	while (v !=0){
		printf("Digite seu voto \n");
		printf ("1 � Para Votar em PHP\n");
     	printf ("2 � Para Votar em Java\n");
     	printf ("3 � Para Votar em C\n");
		printf ("0 � Sair do Programa\n\n");
     	printf ("Sua op��o: ");
     	scanf  ("%d", &v);
     	
     	switch (v)
		{
        	case 1:
    	 		printf ("Voc� escolheu PHP\n");
    	 		p++;
  			break;

       		case 2:
    	 		printf ("Voc� escolheu JAVA\n");
   			break;
   				j++;
   		 	case 3:
    	 		printf ("Voc� escolheu C\n");
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
