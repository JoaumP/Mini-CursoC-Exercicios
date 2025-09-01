/*Faça um programa que tenha uma função que recebe, por parâmetro, uma matriz
A(8,8) e encontre o maior elemento da sua diagonal principal, e outra função para
dividir todos os elementos de A pelo maior encontrado. Ao final, a matriz alterada deve
ser apresentada.*/


#include <stdio.h>

float maiorValor(float a[8][8]){
    int i, j;
    float maior=0;

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            if (i==j && a[i][j]>maior){
                maior = a[i][j];
            }
        }
    }
    return maior;
}

void novaMatriz(float a[8][8], float m){
    int i, j;
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            a[i][j] = a[i][j]*m;
        }
    }
}

int main(){
    int i, j;
    float matriz[8][8], maior;

    printf("Digite os valores para a matriz.");
    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    maior = maiorValor(matriz);
    novaMatriz(matriz, maior);

    for (i=0; i<8; i++){
        for (j=0; j<8; j++){
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }

}