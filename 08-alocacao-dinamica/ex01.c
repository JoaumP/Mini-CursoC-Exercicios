/*Escreva um programa em C que aloque dinamicamente memória para armazenar 1 (um) número real e
atribua o endereço alocado a um ponteiro pt. Leia um valor real e armazene-o no endereço alocado. Em
seguida imprima o endereço alocado (use %p) e o valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *num;

    num = malloc(sizeof(float));

    printf("Digite um numero real: ");
    scanf("%f", num);

    printf("No endereço de memoria %p esta armazenado o valor %f.\n", num, *num);

    free(num);

}