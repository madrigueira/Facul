#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1 = 0;
	float n2 = 0;
	float n3 = 0;
	float m = 0;
	
	printf("Primeira Nota:");
	scanf("%f", &n1);
	printf("Segunda Nota:");
	scanf("%f", &n2);
	printf("Terceira Nota:");
	scanf("%f", &n3);
	
	m=(n1+n2+n3)/3;
	
	printf("Sua media e: %f",m);
	
	return 0;
}
