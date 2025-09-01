/*Faça um programa que leia um valor n, inteiro e positivo, calcule e mostre a seguinte soma:
S = 1 + 1/2 + 1/3 + 1/4 + . . . + 1/n*/

#include <stdio.h>

int main(){
    int num;
    float soma = 0;
    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
    } while (num<1);

    for (;num>0;num--){
        soma += 1/(float)num;
    }

    printf("O resultado da soma é %f\n", soma);
}