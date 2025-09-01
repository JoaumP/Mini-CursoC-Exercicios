/*Faça um programa que leia uma frase e conte quantos sinais de pontuação (ponto,
vírgula, interrogação e exclamação) existem.*/

#include <stdio.h>

int main(){
    char frase[200];
    int cont=0, i, tam=0;

    printf("Digite uma frase: ");
    fgets(frase, 200, stdin);

    while (frase[tam]!='\0'){
        tam++;
    }
    for (i=0; i<tam; i++){
        if (frase[i]==','||frase[i]=='.'||frase[i]=='?'||frase[i]=='!'){
            cont++;
        }
    }

    printf("A frase tem %d sinais de pontuação.\n", cont);
}