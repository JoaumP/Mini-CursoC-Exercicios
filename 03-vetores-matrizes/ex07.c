/*Faça um programa que carregue uma matriz 2 x 2, calcule e mostre uma matriz resultante que
será a matriz digitada multiplicada pelo maior elemento da matriz.*/

#include <stdio.h>

int main(){
    int matriz[2][2], result[2][2], i, j, maior;

    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i==0 || matriz[i][j]>maior){
                maior=matriz[i][j];
            }
        }
    }  
    printf("\nMatriz resultante:\n");
    for (i=0; i<2; i++){
        for (j=0; j<2; j++){
            result[i][j]=matriz[i][j]*maior;
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}