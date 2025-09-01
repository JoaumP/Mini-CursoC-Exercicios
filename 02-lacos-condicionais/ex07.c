/*Faça um algoritmo que monte os 10 primeiros termos da sequência de Fibonacci.
0 – 1 – 1 – 2 – 3 – 5 – 8 – 13 – 21 – 34 – 55 - . . .*/


#include <stdio.h>

int main(){
    int cont, i=0, j=0, k=1;
    for(cont=0; cont<10; cont++){
        printf("%d ", i);
        j = i + k;
        i = k;
        k = j;

    }
}