#include <stdio.h>
#include <stdlib.h>

/* */

main() {
	int m[6];
	double v[5];
	
	for (m[6] = 0; m[6]<5; m[6]++){
		printf("Digite a Matricula do vendedor ");
		scanf("%d", &m[m[6]]);
		printf("total de vendas ");
		scanf("%lf", &v[m[6]]);
	}
		for (m[6] = 0; m[6]<5; m[6]++){
		printf("Matricula seguida do Total de Vendas do vendedor %d com %.2lf\n",m[m[6]],v[m[6]]);
	}
	
	
	return 0;
}
