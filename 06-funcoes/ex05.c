/*Escreva um programa contendo uma função que recebe, por parâmetro, um valor
inteiro e positivo e retorna o somatório desse valor.*/


#include <stdio.h>

int somatorio(int n){
    int soma=0;

    for (;n>0;n--){
        soma+=n;
    }

    return soma;
}

int main(){
    int num, res;

    do {
        printf("Digite um numero inteiro positivo: ");
        scanf("%d", &num);
    } while (num<0);

    res = somatorio(num);

    printf("O somatorio de %d é %d.", num, res);

}