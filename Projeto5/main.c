#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* //faça um programa que receba um dados de entrada duas notas de um aluno e mostre como resultado :
A: se o aluno está aprovado ou reprovado */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	//variaveis mortais
	 float nota1, nota2, media;
      
      //entrada das variaveis
      printf("Digite a primeira nota do aluno: ");
      scanf("%f",&nota1);
      
      printf("Digite a segunda nota do aluno: ");
      scanf("%f",&nota2);
      
      //calculos e resultado
      media = (nota1 + nota2) / 2;
      
      //sistema só vai aceitar numeros de 0 a 10 pq sim
      if (nota1,nota2 >= 11){
      	
       	printf ("A gente num aceita esse valor bobão! só números de 0 a 10. ");
       	
	   }else{
	   	
        printf("Media do aluno = %.1f\n",media);
      
        if (media >=6){
        	
        printf("O aluno foi aprovado! ");
        
        }else{
        	
        	printf("O Aluno foi reprovado! D:");
        	
		}
		};
	return 0;
}
