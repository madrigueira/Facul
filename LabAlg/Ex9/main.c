#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float real, dolar, euro, cotdolar, coteuro;
	
	printf("\n	===> INFORMACOES SALARIAIS <===");
	printf("\n\n	Digite um valor em Reais: R$");
	scanf("%f", &real);
	printf("\n	Cotacao do Dolar: ");
	scanf("%f", &cotdolar);
	printf("\n	Cotacao do Euro: ");
	scanf("%f", &coteuro);
	
	dolar = real * cotdolar;
	euro = real * coteuro;
	
	printf("\n	Seu valor em Dolares: %.2f", dolar);
	printf("\n	Seu valor em Euros: %.2f", euro);
	
	
	return 0;
}