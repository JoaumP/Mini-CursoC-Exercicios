/*Faça um programa que tenha uma função para receber a média final de um aluno
por parâmetro e retornar o seu conceito, conforme a tabela abaixo:
    Nota                Conceito
de 0,0 a 4,9               D
de 5,0 a 6,9               C
de 7,0 a 8,9               B
de 9,0 a 10,0              A*/


#include <stdio.h>

char conceito(float nota){
    if (nota>=9){
        return 'A';
    } else if (nota>=7){
        return 'B';
    } else if (nota>=5){
        return 'C';
    } else {
        return 'D';
    }
}

int main(){
    float media;
    char resultado;

    printf("Digite a media do aluno: ");
    scanf("%f", &media);

    resultado = conceito(media);

    printf("O conceito do aluno foi %c!", resultado);


}