/*João recebeu seu salário e precisa pagar duas contas que estão atrasadas. Como
as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um programa que calcule e mostre quanto restará do salário de João.*/

#include <stdio.h>

int main(){
    float sal, cont1, cont2;

    printf("Digite seu salario: ");
    scanf("%f", &sal);
    printf("digite o valor da primeira conta: ");
    scanf("%f", &cont1);
    printf("Digite o valor da segunda conta: ");
    scanf("%f", &cont2);

    printf("Vai sobrar %.2f reais do seu salario.", sal-(cont1 + cont2 + (cont1 + cont2)*0.02));

}