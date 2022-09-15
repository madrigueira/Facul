#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3 = 0;
	
	printf("\n	Digite um numero: ");
	scanf("%i", &n1);
	printf("\n	Digite outro numero: ");
	scanf("%i", &n2);
	printf("\n	Digite mais um numero: ");
	scanf("%i", &n3);
	
	if (n1 % 2 == 0){
		if (n1 % 3 == 0){
			printf("\n	O numero %i e divisivel por 1, 2 e 3", n1);
		}else{
			printf("\n	O numero %i nao e divisivel por 1, 2 e 3", n1);
		}
	}else{
		printf("\n	O numero %i nao e divisivel por 1, 2 e 3", n1);
	}
	
	if (n2 % 2 == 0){
		if (n2 % 3 == 0){
			printf("\n	O numero %i e divisivel por 1, 2 e 3", n2);
		}else{
			printf("\n	O numero %i nao e divisivel por 1, 2 e 3", n2);
		}
	}else{
		printf("\n	O numero %i nao e divisivel por 1, 2 e 3", n2);
	}
	
	if (n3 % 2 == 0){
		if (n3 % 3 == 0){
			printf("\n	O numero %i e divisivel por 1, 2 e 3", n3);
		}else{
			printf("\n	O numero %i nao e divisivel por 1, 2 e 3", n3);
		}
	}else{
		printf("\n	O numero %i nao e divisivel por 1, 2 e 3", n3);
	}
	
	return 0;
}
