#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    float D = 0, L = 0, K = 0, N = 0, C = 0;
    
    printf("        ===> CUSTO VIAGEM <=== \n\n   Vamos descobrir quantos litros de gasolina sao necessarios para\n   realizar o seu trajeto e quanto voce tera que desenbolsar pra isso!!\n\n\n");
    printf("   - Digite a distancia percorrida em Km: ");
    scanf("%f", &D);
    printf("\n   - Digite o preco do litro da gasolina: ");
    scanf("%f", &L);
    printf("\n   - Digite a quilometragem que o veiculo faz por litro: ");
    scanf("%f", &K);
    
    N = D/K;
    C = N*L;
    
    
    printf("\n\n   Litros Necessarios: %.2f        ", N);
    printf("Custo dos litros: %.2f", C);
    printf("\n\n  (Professor, eu nao consigo deixar o idioma em portugues, ele fica assim: ççççç me ajuda)");
    printf("\n\n\n\n\n");
    
    return 0;
}
