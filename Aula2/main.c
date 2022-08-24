#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1 = 0;
	float n2 = 0;
	float m = 0;
	
	printf("Coloca:");
	scanf("%f", &n1);
	printf("Coloca:");
	scanf("%f", &n2);
	
	m=(n1+n2)/2;
	
	printf("Deu: %f",m);
	
	return 0;
}
