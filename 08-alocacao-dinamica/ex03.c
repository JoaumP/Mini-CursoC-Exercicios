/*Escreva um programa que leia duas strings e passe-as para uma função que deve criar e imprimir uma
nova string formada da concatenação das duas strings lidas. A nova string que deverá ser alocada
dinamicamente.

Ex: String 1: “cabelo”
String 2: “preto”
String resultante: “cabelopreto”

Obs.: Não utilize a função de concatenar da biblioteca string.h.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void func(char *s1, char *s2){
    int tam1=0, tam2=0, i;
    char *novaStr;

    do{
        tam1++;
    } while (s1[tam1] != '\0');
    do{
        tam2++;
    } while (s2[tam2] != '\0');

    novaStr = calloc(tam1+tam2+1, sizeof(char));
    
    for (i=0; i<tam1; i++){
        novaStr[i]=s1[i];
    }
    for (i=0; i<tam2; i++){
        novaStr[tam1+i]=s2[i];
    }

    printf("A nova string concatenada é %s.", novaStr);
    
    free(novaStr);
}

int main(){
    char str1[50], str2[50];

    printf("Digite a primeira palavra: ");
    fgets(str1, 50, stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite a segunda palavra: ");
    fgets(str2, 50, stdin);
    str2[strcspn(str2, "\n")] = '\0';

    func(str1, str2);    

}