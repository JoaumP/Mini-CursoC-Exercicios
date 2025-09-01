/*Faça um programa para apresentar o alfabeto utilizando um laço for.*/

#include <stdio.h>

int main(){
    int i;

    printf("Alfabeto: \n");
    for (i=65; i<=90; i++){
        printf("%c ", i);
    }
}