#include <stdio.h>
#include <stdlib.h>

/*  */

main() {
	int n[8];
	
		printf("Digite seus Números:\n");
	
		for (n[7]=0; n[7]< 5; n[7]++)
		{
			scanf("%d", &n[n[7]]);
			
		}
		printf("Seu Numero: \n");
		for (n[7]=0; n[7]< 5; n[7]++)
		{
			printf("%d\n", n[n[7]]);
		}
		
		printf("Soma dos Seus Numeros %d\n", n[1]+n[2]+n[3]+n[4]+n[5]);
		
	return 0;
}
