/*Faça um programa para ler 2 números, X e Y. Calcule e mostre a soma dos números do intervalo [X,Y].*/

#include <stdio.h>

int main(){
    int x, y, soma = 0, i;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    if (x >= y){
        for (i=x; i>=y; i--){
            soma += i;
        }
    } else if (x < y){
        for (i=x; i<=y; i++){
            soma += i;
        }
    }

    printf("O resultado da soma do intervalo [%d, %d] é %d.\n", x, y, soma);

}
