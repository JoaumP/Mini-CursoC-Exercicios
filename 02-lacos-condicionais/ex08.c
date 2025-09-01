/*Faça um algoritmo que receba o valor de X e o número de termos desejados. Calcule e mostre o valor da seguinte sequência:
S = 1 + X^2 / 3! – X^3 / 4! + X^4 / 5! – X^5 / 6! + X^6 / 7! - . . .*/

#include <stdio.h>

int main(){
    int i, termos, multx, fat;
    float x, soma = 1;

    printf("Digite o valor para X: ");
    scanf("%f", &x);

    printf("Digite o numero de termos da expressão: ");
    scanf("%d", &termos);

    multx = x;
    fat = 2;
    for (i=2;i<=termos;i++){
        multx *= x;
        fat *= i+1;
        if (i%2==0){
            soma += (float)multx/fat;
        } else{
            soma -= (float)multx/fat;
        }
    }
    printf("A soma da sequencia é %f\n", soma);

}