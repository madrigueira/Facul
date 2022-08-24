#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ano1 = 0;
	int ano2 = 0;
	int dias = 0;
	
	printf("Ano que voce nasceu:");
	scanf("%i", &ano1);
	printf("Ano que estamos:")
	scanf("%i", &ano2);
	
	dias = (ano2-ano1)*365;
	
	printf("Tu viveu:%i", dias);
	
	return 0;
}
