anim(int parametro){

	int c,l;
	if (parametro = 1){
			
		for(c=0; c<20;c++){
			gotoxy(0,c);
			textcolor(6);
			printf("%c",223);
			gotoxy(78,c);
			textcolor(6);
			printf("%c",223);
			
		}
		for(l=0; l<78;l++){
			gotoxy(l,0);
			textcolor(6);
			printf("%c",223);
			gotoxy(l,20);
			textcolor(6);
			printf("%c",223);
			
		}
		gotoxy(34,10);
		textcolor(6);
		printf("BOA NOITE");
		getch();
	}
}
