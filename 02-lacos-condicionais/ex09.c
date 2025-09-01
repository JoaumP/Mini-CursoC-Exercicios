/*Faça um programa que leia 10 valores, um de cada vez, e apresente o maior deles ao final.*/


#include <stdio.h>

int main(){
    int i;
    float num, maior = 0;

    for (i=0; i<10; i++){
        printf("Digite o %dº numero: ", i+1);
        scanf("%f", &num);
        
        if (num>maior || i == 0){
            maior = num;
        }
    }

    printf("O maior valor foi %.2f.\n", maior);

}