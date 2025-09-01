/*Uma matriz quadrada inteira é chamada de "quadrado mágico" se a soma dos elementos de
cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal
e secundária são todos iguais. Exemplo: A matriz abaixo representa um quadrado mágico:

8 0 7
4 5 6
3 10 2 

Faça um programa que verifica se uma matriz de n linhas e colunas representa um quadrado
mágico.*/

#include <stdio.h>

int main(){
    int n;

    printf("Digite um valor para definir o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int matriz[n][n], i, j, gabarito, soma, cont;


    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }  

    gabarito=0;
    for (i=0; i<n; i++){
        gabarito += matriz[0][i];
    }

    cont=0;
    for (i=0; i<n; i++){
        soma = 0;
        for (j=0; j<n; j++){
            soma += matriz[i][j];
        }
        if (soma==gabarito){
            cont++;
        }
    }  
    for (i=0; i<n; i++){
        soma = 0;
        for (j=0; j<n; j++){
            soma += matriz[j][i];
        }
        if (soma==gabarito){
            cont++;
        }
    }  

    soma = 0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i==j){
                soma+=matriz[i][j];
            }
        }
    } 
    if (soma==gabarito){
        cont++;
    }

    soma = 0;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (i+j==n-1){
                soma+=matriz[i][j];
            }
        }
    }  
    if (soma==gabarito){
        cont++;
    }

    if(cont==2*n+2){
        printf("\nÉ um quadrado magico.\n");
    } else {
        printf("\nNão é um quadrado magico.\n");
    }
}