#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int idade1, idade2 = 0;
	char nome1[50], nome2[50];
	
	printf("\n  => Atividade 1:\n");
	printf("\n    -> Nome do Primeiro Aluno: ");
	scanf("%s", &nome1);
	printf("\n    -> Idade do Primeiro Aluno: ");
	scanf("%i", &idade1);
	printf("\n    -> Nome do Segundo Aluno: ");
	scanf("%s", &nome2);
	printf("\n    -> Idade do Segundo Aluno: ");
	scanf("%i", &idade2);
	
	
	if (idade1 == idade2){
		printf("\n\n\n    As idades nao podem ser iguais -_-");
	}else if (idade1 < idade2){
		printf("\n\n\n    	===> Ficha dos Alunos <===\n");
		printf("\n    	- Nome: %s", nome1);
		printf("\n    	- Idade: %i", idade1);
		printf("\n\n   	- Nome: %s", nome2);
		printf("\n    	- Idade: %i", idade2);
	}else{
		printf("\n\n\n    	===> Ficha dos Alunos <===\n");
		printf("\n    	- Nome: %s", nome2);
		printf("\n    	- Idade: %i", idade2);
		printf("\n\n   	- Nome: %s", nome1);
		printf("\n    	- Idade: %i", idade1);
	}
	

	printf("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}