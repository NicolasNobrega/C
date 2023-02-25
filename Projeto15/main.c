#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int n1,n2[3];
	
		for (n1 = 0; n1 <3;n1++){
			printf("Digite seus Numeros\n");
			scanf("%d", &n2[n1]);
			

		}
		for (n1 = 0; n1 <3;n1++){
			printf("%d\t", n2[n1]);
		}
		//printf("Seus numeros foram %d %d %d\n", n2[0],n2[1],n2[2]);
	return 0;
}
