/*As crianças adoram desenhar árvores de natal e você desafiou algumas delas a
desenharem árvores de diversos tamanhos com apenas com o caractere asterisco "*".
A regra é simples. De baixo para cima, o tronco da árvore consiste de 3 asteriscos e
depois 1. Em seguida vem o restante da árvore, com cada fileira de folhas iniciando no
tamanho que você determinou e diminuindo de dois em dois, até chegar na copa da
árvore que terá apenas um asterisco. Note que para isso dar certo, somente será
permitido tamanhos ímpares para estas árvores.

Entrada
A entrada contém vários casos de teste e termina com EOF. Cada caso de teste
consiste em um inteiro N (2 < N < 100).

Saída
Para cada caso de teste de entrada, seu programa deverá desenhar uma árvore
conforme especificação acima e exemplo abaixo, com uma linha em branco após cada
árvore.*/

#include <stdio.h>

int main(){
    int tamanho, i, j, k;

    do {
        printf("Digite um número impar, entre 3 e 99: ");
        scanf("%d", &tamanho);
    } while (tamanho%2==0 || tamanho<2 || tamanho>100);

    for (i=1; i<=tamanho; i+=2){
        for (k=0; k<(tamanho-i)/2; k++){
            printf(" ");
        }
        for (j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
    for (i=1; i<=3; i+=2){
        for (k=0; k<(tamanho-i)/2; k++){
            printf(" ");
        }
        for (j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}