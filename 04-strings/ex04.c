/*Faça um programa que solicita ao usuário duas cadeias de caracteres e informa se
elas são iguais ou diferentes. Não utilize a função strcmp.*/

#include <stdio.h>

int main(){
    char frase[30], frase2[30];
    int i, tam=0, confirmar;

    printf("Digite a primeira cadeia de caracteres: ");
    fgets(frase, 30, stdin);

    printf("Digite a segunda cadeia de caracteres: ");
    fgets(frase2, 30, stdin);

    while (frase[tam]!='\n'){
        tam++;
    }

    confirmar=1;
    for (i=0; i<tam && confirmar==1; i++){
        if (frase[i]!=frase2[i]){
            confirmar=0;
        }
    }
    if (confirmar){
        printf("São iguais!");
    } else {
        printf("Não são iguais!");
    }
}