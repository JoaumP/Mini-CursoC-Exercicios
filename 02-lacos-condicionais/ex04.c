/*Faça um programa para ler 2 números, X e Y. Mostre todos os números múltiplos de 3 do
intervalo [X,Y].*/

#include <stdio.h>

int main(){
    int x, y, soma = 0, i;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &x);

    printf("Digite o segundo número: ");
    scanf("%d", &y);

    if (x >= y){
        for (i=x; i>=y; i--){
            if (i%3==0){
                soma += i;
            }
        }
    } else if (x < y){
        for (i=x; i<=y; i++){
            if (i%3==0){
                soma += i;
            }
        }
    }

    printf("O resultado da soma dos multiplos de 3 no intervalo [%d, %d] é %d.\n", x, y, soma);

}