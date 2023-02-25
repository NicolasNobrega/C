#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"

/* Imprima um X na tela */

int main() {
	int c,l;
	for(c=0; c<20;c++){
		gotoxy(c,c);
		textcolor(6);
		printf("%c",223);
		gotoxy(c,c);
		textcolor(6);
		printf("%c",223);
			
		}
			for(l=20; l<40;l++){
			gotoxy(l,l);
			textcolor(6);
			printf("%c",223);
			gotoxy(l,l);
			textcolor(6);
			printf("%c",223);
			
		}
	return 0;
}
