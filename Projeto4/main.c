    #include <stdio.h>
    #include <stdlib.h>
    #include <locale.h>
    int main(void)
    {
     setlocale(LC_ALL, "Portuguese");
	/*fa�a um programa que recebe como dado de entrada um numero inteiro qualquer e mostre como resultado: 
	A se o numero � positivo 
	B se o numero � negativo 
	C se o numero � nulo */
	
	//variaveis fodas
	
	int n;
	
	//receba
	
	printf("");
	scanf("%d",&n);
	
	//calculos
	
	if( n > 0){
		
		printf( "O %d � positivo\n",n);
		
	};
	if( 0 > n){
		
		printf( "o %d � negativo\n",n);
	};
	if( n==0){
		
		printf( "o %d � nulo\n",n);
		
	};
    system("pause");
      return 0;
     }
