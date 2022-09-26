#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float prestacao, valor, taxa, tempo;
	
	printf("\n	===> PARCELA EM ATRASO <===");
	printf("\n\n	Digite o valor do pagamento: R$");
	scanf("%f", &valor);
	printf("\n	Digite o tempo de atraso (dias): ");
	scanf("%f", &tempo);
	printf("\n	Digite a taxa de atraso: R$");
	scanf("%f", &taxa);
	
	prestacao = valor + (valor * (taxa/100) * tempo);
	
	printf("\n	Sua prestacao e de: R$%.2f", prestacao);
	
	
	return 0;
}