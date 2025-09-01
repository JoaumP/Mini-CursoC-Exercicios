/*Faça um programa que carregue um vetor com dez números inteiros e um segundo vetor com
cinco números inteiros. Calcule e mostre dois vetores resultantes. O primeiro vetor resultante será
composto pelos números pares gerados pelo elemento do primeiro vetor somado a todos os
elementos do segundo vetor. O segundo vetor resultante será composto pelos números ímpares
gerados pelo elemento do primeiro vetor somado a todos os elementos do segundo vetor.*/

#include <stdio.h>

int main(){
    int vet1[10], vet2[5], resvet1[10], resvet2[10];
    int i, j, soma, somavet2 = 0, qtdPares=0, qtdImpares=0;

    for (i=0; i<10; i++){
        printf("Digite o valor para o indice %d do primeiro vetor: ", i);
        scanf("%d", &vet1[i]);
    }
    for (i=0; i<5; i++){
        printf("Digite o valor para o indice %d do segundo vetor: ", i);
        scanf("%d", &vet2[i]);
        somavet2+=vet2[i];
    }
    for (i=0; i<10; i++){
        soma = vet1[i]+somavet2;
        if (soma%2==0){
            resvet1[qtdPares++]=soma;
        } else {
            resvet2[qtdImpares++]=soma;
        }
    }
    printf("\nVetor resultante 1: ");
    for (i=0;i<qtdPares;i++){
        printf("%d ", resvet1[i]);
    }  
    printf("\n\nVetor resultante 2: ");
    for (i=0;i<qtdImpares;i++){
        printf("%d ", resvet2[i]);
    }
}