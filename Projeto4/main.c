    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    int main(void)
    {
     setlocale(LC_ALL, "Portuguese");
	/*faça um programa que recebe como dado de entrada um numero inteiro qualquer e mostre como resultado: 
	A se o numero é positivo 
	B se o numero é negativo 
	C se o numero é nulo */
	
	//variaveis fodas
	
	int n;
	
	//receba
	
	printf("");
	scanf("%d",&n);
	
	//calculos
	
	if( n > 0){
		
		printf( "O %d é positivo\n",n);
		
	};
	if( 0 > n){
		
		printf( "o %d é negativo\n",n);
	};
	if( n==0){
		
		printf( "o %d é nulo\n",n);
		
	};
    system("pause");
      return 0;
     }
