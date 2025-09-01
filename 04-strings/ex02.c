/*Faça um programa que verifique se uma palavra é um palíndromo, ou seja, se lida
da esquerda para direita é o mesmo que da direita para esquerda.*/

#include <stdio.h>

int main(){
    char palavra[20];
    int i, tam=0, confirmar;

    printf("Digite uma palavra: ");
    fgets(palavra, 20, stdin);

    while (palavra[tam]!='\n'){
        tam++;
    }

    confirmar=1;
    for (i=0; i<(tam-1)/2 && confirmar==1; i++){
        if (palavra[i]!=palavra[tam-1-i]){
            confirmar=0;
        }
    }
    if (confirmar){
        printf("É palindromo!");
    } else {
        printf("Não é palindromo!");
    }
}