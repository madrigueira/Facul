#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float altura, volume, raio;
	
	printf("\n	===> VOLUME LATA DE OLEO <===");
	printf("\n\n	Digite a altura da lata de oleo: ");
	scanf("%f", &altura);
	printf("\n	Digite o raio da lata de oleo: ");
	scanf("%f", &raio);
	
	volume = 3.14149 * (raio*raio) * altura;
	
	printf("\n	O volume da lata de oleo e: %.2f", volume);
	
	
	return 0;
}