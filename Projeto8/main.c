	#include <stdio.h>
    #include <stdlib.h>
	#include <locale.h> 

/* fa�a um programa que receba como entrada duas notas de um aluno e mostre como resultado a m�dia obtida
e o estado de aprova��o conforme a seguinte tabela
A->Media maior que 6 ap
b->Media menor que 6 e maior q 4
c->menor q 4 reprovado */
	
    int main(void)
    {
     setlocale(LC_ALL, "Portuguese");
      float nota1, nota2, media;
      
      //entrada das variaveis
      printf("Digite a primeira nota do aluno: ");
      scanf("%f",&nota1);
      
      printf("Digite a segunda nota do aluno: ");
      scanf("%f",&nota2); 
      
      //calculo foda kk
      media = (nota1 + nota2) / 2;
      
      //sistema s� vai aceitar numeros de 0 a 10 pq sim
      if (nota1,nota2 >= 11){
       	printf ("A gente num aceita esse valor bob�o! s� n�meros de 0 a 10. ");
	   }else{
        printf("Media do aluno = %.1f\n",media);
      
        if (media >=6){
        printf("O aluno foi aprovado! ");
          }
        if (media >=4 && media<6){
        	printf ("O aluno esta de recupera��o! ");
		}
		if (media <4 ){
            printf("O aluno foi reprovado! ");
         }
		}
		
      return 0;
      
     }
