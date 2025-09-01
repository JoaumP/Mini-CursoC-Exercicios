/*Faça um programa que leia o peso e a altura de uma pessoa. Em seguida o
programa deve calcular e imprimir o índice de massa corpórea (IMC) dessa pessoa.*/

#include <stdio.h>

int main(){
    float peso, altura;

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Seu IMC é: %.2f", peso/(altura*altura));


}

