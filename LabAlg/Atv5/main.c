#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float A, B, M = 0;
	
	printf("\n	===> CALCULO DE MEDIA <===");
	printf("\n\n	-> Digite sua primeira nota: ");
	scanf("%f", &A);
	printf("\n	-> Digite sua segunda nota: ");
	scanf("%f", &B);
	
	M = (A+B)/2;
	
	if (A == B || A > 10 || A < 0 || B > 10 || B < 0){
		printf("\n\n	>>NAO PERMITIDO<<");
	}else if (M >= 6){
		printf("\n\n	APROVADO!! :)");
	}else{
		printf("\n\n	REPROVADO :(");
	}
	
	
	printf("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}