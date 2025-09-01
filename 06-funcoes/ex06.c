/*Faça uma função que receba, por parâmetro, uma matriz B(9,9) de reais e retorna
a soma dos elementos das linhas pares de B.*/

#include <stdio.h>

float somarLinhas(float b[9][9]){
    int i, j;
    float soma=0;

    for (i=0; i<9; i++){
        if (i%2==0){
            for (j=0; j<9; j++){
                soma += b[i][j];
            }
        }
    }
    return soma;
}

int main(){
    int i, j;
    float matriz[9][9], soma;

    printf("Digite os valores para a matriz.");
    for (i=0; i<9; i++){
        for (j=0; j<9; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    soma = somarLinhas(matriz);
    
    printf("A soma das linhas pares da metriz é %f", soma);

}