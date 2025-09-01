/*Faça um programa que carregue uma matriz 4 x 4 de números inteiros, calcule e mostre a
média dos elementos da diagonal secundária.*/

#include <stdio.h>

int main(){
    int matriz[4][4], i, j, somadiag=0;

    for (i=0; i<4; i++){
        for (j=0; j<4; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i+j==3){
                somadiag+=matriz[i][j];
            }
        }
    }  
    printf("A media da diagonal secundaria é %.2f", somadiag/4.0);
}
