/*Sabe-se que:
1 pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1.760 jardas
Faça um programa que receba uma medida em pés, faça as conversões a seguir e
mostre os resultados.
a) Polegadas;
b) Jardas;
c) Milhas.*/

#include <stdio.h>

int main(){
    float pes;

    printf("Digite a medida em pés: ");
    scanf("%f", &pes);

    printf("%f pés em Polegadas: %f\n", pes, pes*12);
    printf("%f pés em Jardas: %f\n", pes, pes/3);
    printf("%f pés em Milhas: %f\n", pes, (pes/3)/1760);
}