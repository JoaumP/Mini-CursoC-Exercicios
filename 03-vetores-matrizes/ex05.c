/*Faça um programa para ler uma matriz 5 x 4, e em seguida apresente:
● a quantidade de números pares digitados;
● a quantidade de números ímpares digitados;
● a média aritmética dos números pares digitados;
● a média aritmética dos números ímpares digitados;*/


#include <stdio.h>

int main(){
    int matriz[5][4], pares=0, impares=0, i, j, somaP=0, somaI=0;

    for (i=0; i<5; i++){
        for (j=0; j<4; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j]%2==0){
                somaP+=matriz[i][j];
                pares++;
            } else {
                somaI+=matriz[i][j];
                impares++;
            }
        }
    }
    printf("\nForam digitados %d numeros pares e %d impares.\n", pares, impares);
    printf("\nA media aritimetica dos numeros pares é %.2f e a dos impares é %.2f.\n", (float)somaP/pares, (float)somaI/impares);

}