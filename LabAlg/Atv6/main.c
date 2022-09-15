#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float n1, n2 = 0.0;
	
	printf("\n	Digite um número: ");
	scanf("%f", &n1);
	
	if (n1<0){
		n2 = n1*(-1);
	}else{
		n2 = n1;
	}
	
	printf("\n\n	Seu número positivo é: %f", n2);
	
	return 0;
}
