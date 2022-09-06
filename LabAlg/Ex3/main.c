#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float facul = 0, trans = 0, ali = 0, mensa = 0, anu = 0;
	
	scanf("%f",&facul);
	scanf("%f", &trans);
	scanf("%f", &ali);
	
	mensa=(facul+trans+ali);
	anu=mensa*12;
	
	printf("Ficou no mes %f", mensa);
	printf("\nFicou no ano %f", anu);
	
	return 0;
}
