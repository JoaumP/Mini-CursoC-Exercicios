/*O custo ao consumidor de um carro é a soma do preço de fábrica com o
percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça
um programa que receba o preço de fábrica de um veículo, o percentual de lucro do
distribuidor e o percentual de impostos. Calcule e mostre:
a) O valor correspondente ao lucro do distribuidor;
b) O valor correspondente aos impostos;
c) O preço final do veículo.*/



#include <stdio.h>

int main(){
    float pFabr, lDist, impost;

    printf("Digite o preço de fabrica do carro: ");
    scanf("%f", &pFabr);
    printf("Digite o percentual do lucro: ");
    scanf("%f", &lDist);
    printf("Digite o percentual dos impostos: ");
    scanf("%f", &impost);

    printf("O lucro do distribuidor é de R$ %.2f.\n", pFabr*(lDist/100));
    printf("O valor do impostos é de R$ %.2f.\n", pFabr*(impost/100));
    printf("O preço final do veículo é de R$ %.2f.\n", pFabr+(pFabr*(lDist/100))+(pFabr*(impost/100)));

}