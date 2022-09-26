#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int aulas;
	float salario, liquido, descontoIR, descontoINSS;
	
	printf("\n	===> INFORMACOES SALARIAIS <===");
	printf("\n\n	Quantas aulas voce leciona (por semana): ");
	scanf("%i", &aulas);
	
	salario = (aulas * 25 * 4);
	salario = salario*0.1+salario;
	
	descontoIR = salario*0.05;
	descontoINSS = salario*0.07;
	
	liquido = salario-(salario*0.05)-(salario*0.07);
	
	printf("\n	Seu salario bruto e: R$%.2f", salario);
	printf("\n	Valores descontados de IR: R$%.2f", descontoIR);
	printf("\n	Valores descontados de INSS: R$%.2f", descontoINSS);
	printf("\n	Seu salario liquido e: R$%.2f", liquido);

	
	
	return 0;
}