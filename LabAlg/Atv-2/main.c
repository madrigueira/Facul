#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float T = 0, D = 0;
	int A = 0;
	
	printf("		===> DIVIDIR CONTA DO RESTAURANTE <=== \n\n   Vamos dividir sua conta de restaurante automaticamente para voce!!\n   E nao professor, nao sera apenas para tres amigos, mas sim para QUANTOS AMIGOS O SENHOR QUISER!!\n   O GERENTE FICOU MALUCOOOO!\n\n\n");
	printf("   - Qual foi o valor total da conta?: R$");
	scanf("%f", &T);
	printf("\n   - Voce quer dividir com quantas pessoas?: ");
	scanf("%i", &A);
	
	D = (T+T*0.1)/A;
	
	printf("\n\n   A conta ficou R$%.2f para cada", D);

	printf("\n\n\n\n\n");
	
	return 0;
}