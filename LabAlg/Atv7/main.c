#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, m1, ex, m2 = 0.0;
	
	printf("\n	Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("\n	Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("\n	Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("\n	Digite a quarta nota: ");
	scanf("%f", &n4);
	
	m1 = (n1+n2+n3+n4)/4;
	
	if (m1 >=7){
		printf("\n\n	Aprovado	|	Sua media: %.2f", m1);
	}else{
		printf("\n	Voce ficou de exame :(	|	Sua media: %.2f", m1);
		printf("\n	Digite a nota do exame: ");
		scanf("%f", &ex);
		
		m2 = (m1+ex)/2;
		if (m2 >=5){
			printf("\n	Aprovado :)		|	Sua media: %.2f", m2);
		}else{
			printf("\n	Reprovado :(	|	Sua media: %.2f", m2);
		}
	}
	
	return 0;
}
