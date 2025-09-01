/*Escreva um programa em C que contenha uma função que teste e retorne as posições do elemento de
maior valor, do menor valor, a quantidade de valores abaixo de 7 e acima de 2,5 de um vetor de números
reais alocado dinamicamente pela função principal. (Obs.: A quantidade de elementos deve ser lida).*/

#include <stdio.h>
#include <stdlib.h>

int* func(float *vetor, int n){
    int posMaior, posMenor, qtdV=0, i;
    int *ret;

    for (i=0; i<n; i++){
        if (i==0 || vetor[i]>vetor[posMaior]){
            posMaior=i;
        }
        if (i==0 || vetor[i]<vetor[posMenor]){
            posMenor=i;
        }
        if (vetor[i]>2.5 && vetor[i]<7){
            qtdV++;
        }
    }

    ret = calloc(3, sizeof(int));

    ret[0]=posMaior;
    ret[1]=posMenor;
    ret[2]=qtdV;

    return ret;
}


int main(){
    int num, i;
    float *vet;
    int *retornado;

    printf("Quantos valores deseja alocar? ");
    scanf("%d", &num);

    vet = calloc(num, sizeof(float));

    for (i=0; i<num; i++){
        printf("Digite o elemento [%d]: ", i);
        scanf("%f", &vet[i]);
    }

    retornado = func(vet, num);

    printf("\nA posição do elemento de maior valor: %d.\n", retornado[0]);
    printf("\nA posição do elemento de menor valor: %d.\n", retornado[1]);
    printf("\nA quantidade de valores abaixo de 7 e acima de 2,5: %d.\n", retornado[2]);

    free(vet);
    free(retornado);
}