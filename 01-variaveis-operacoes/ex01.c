/*Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado. */

#include <stdio.h>

int main(){
    float peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Se você engordar 15%%, seu peso será: %.2f\nSe você emagrecer 20%%, seu peso será: %.2f", peso*1.15, peso*0.8);

}