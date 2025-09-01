/*Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e
armazene os dados em uma struct.*/

#include <stdio.h>

struct dados{
    char nome[30];
    int idade;
    char endereco[200];
};

int main(){
    struct dados pessoa;

    printf("Digite o nome: ");
    fgets(pessoa.nome, 30, stdin);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    fflush(stdin);

    printf("Digite o endereço: ");
    fgets(pessoa.endereco, 200, stdin);

    printf("nome: %sidade: %d\nendereço: %s", pessoa.nome, pessoa.idade, pessoa.endereco);


}