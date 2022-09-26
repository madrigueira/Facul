#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float area, raio;
	
	printf("\n	===> AREA CIRCUNFERENCIA <===");
	printf("\n\n	Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = 3.14*(raio*raio);
	
	printf("\n\n	A area do circulo e: %.2f", area);
	
	return 0;
}