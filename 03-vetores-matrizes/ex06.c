/*Faça um programa que carregue uma matriz 4 x 3 e mostre:
● o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
● o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.*/

#include <stdio.h>

int main(){
    int matriz[4][3], i, j, maior, menor, linMaior, colMaior, linMenor, colMenor;

    for (i=0; i<4; i++){
        for (j=0; j<3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i==0 || matriz[i][j]>maior){
                maior=matriz[i][j];
                linMaior=i;
                colMaior=j;
            }
            if (i==0 || matriz[i][j]<menor){
                menor=matriz[i][j];
                linMenor=i;
                colMenor=j;
            }
        }
    }
    printf("\nO maior elemento é %d e esta na posição [%d][%d].\n", maior, linMaior, colMaior);
    printf("\nO menor elemento é %d e esta na posição [%d][%d].\n", menor, linMenor, colMenor);

}