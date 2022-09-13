#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int A, L, TA, TL = 0;
	float M, TM, T = 0;
	
	printf("	===> BARRACA DO SEU JOSE <===\n\n");
	printf("	-> Quantos Abaicaxis vai querer? (Unidade) ");
	scanf("%i", &A);
	printf("\n	-> Quantas Laranjas vai querer? (Duzia) ");
	scanf("%i", &L);
	printf("\n	-> Quanto de Mandioca vai querer? (Quilo) ");
	scanf("%f", &M);
	
	// ABACAXI
	if (A >= 3){
		TA = A*4;
	}else{
		TA = A*5;
	}
	
	//LARANJA
	if (L >= 2){
		TL = L*6;
	}else{
		TL = L*8;
	}
	
	//MANDIOCA
	if (M >= 3){
		TM = M*3;
	}else{
		TM = M*4;
	}
	
	//TOTAL
	T = TA + TL + TM;
	
	printf("\n\n	________________CARRINHO_________________");
	printf("\n	%i Abacaxi(s)			| R$%i.00", A, TA);
	printf("\n	%i Duzia(s) de Laranja		| R$%i.00", L, TL);
	printf("\n	%.2f Kg(s) de Mandioca		| R$%.2f", M, TM);
	printf("\n\n	Total		| R$%.2f", T);
	
	
	printf("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}