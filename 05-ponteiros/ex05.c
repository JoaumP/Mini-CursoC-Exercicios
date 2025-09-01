/*5 - Escreva um programa em C que:
● Declare um array de inteiros de tamanho 5 e inicialize-o com valores diferentes.
● Utilize um ponteiro para percorrer o array e calcular a média dos valores.
● Exiba a média na tela, juntamente com os valores do array.*/

#include <stdio.h>

int main(){
    int vetor[]={1, 2, 3, 4, 5}, soma=0, *p, i;

    printf("Vetor: ");
    for (i=0; i<5; i++){
        p = &vetor[i];
        soma+=*p;
        printf("%d ", *p);
    }

    printf("\nA media é %.2f.", soma/5.0);

    
}