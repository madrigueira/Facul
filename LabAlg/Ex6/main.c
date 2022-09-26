#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float C, F;
	
	printf("\n	===> CONVERSOES DE TEMPERATURA <===");
	printf("\n\n	Digite uma temperatura (em Celsius): ");
	scanf("%f", &C);
	
	F = (1.8 * C) + 32;
	
	printf("\n	Sua temperatura em Fahrenheit e: %.1f", F);
	
	
	
	return 0;
}