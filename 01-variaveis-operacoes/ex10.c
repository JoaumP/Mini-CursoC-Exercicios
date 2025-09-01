/*Sabe-se que o quilowatt de energia custa um quinto do salário mínimo. Faça um
programa que receba o valor do salário mínimo e a quantidade de quilowatts
consumida por uma residência. Calcule e mostre:
a) O valor, em reais, de cada quilowatt;
b) O valor, em reais, a ser pago por essa residência;
c) O valor, em reais, a ser pago com desconto de 15%.*/

#include <stdio.h>

int main(){
    float kwatt, salario;

    printf("Digite o valor do salario minimo: R$");
    scanf("%f", &salario);

    printf("Digite a quantidade de Quilowatts consumida: ");
    scanf("%f", &kwatt);

    printf("Cada quilowatt tem o valor de R$%.2f.\n", salario*0.20);
    printf("O valor a ser pago será de R$%.2f.\n", kwatt*salario*0.20);
    printf("Com um desconto de 15%%, custará R$%.2f.\n", (kwatt*salario*0.20)*0.85);

}
