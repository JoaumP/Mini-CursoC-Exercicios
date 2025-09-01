/*Crie uma estrutura Pessoa com os campos nome, idade, sexo e altura. Escreva um
programa que permita ao usuário cadastrar os dados de cinco pessoas, armazená-los em
um array de estruturas e, em seguida, exibir na tela o nome e a idade de todas as
pessoas cadastradas.*/

#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
    char sexo;
    float altura;
};

int main(){
    struct pessoa dados[5];
    int i;

    for (i = 0; i < 5; i++){
        printf("\nCadastro da pessoa %d:\n", i + 1);

        printf("Nome: ");
        fgets(dados[i].nome, 50, stdin);
        dados[i].nome[strcspn(dados[i].nome, "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &dados[i].idade);

        printf("Sexo (M/F): ");
        scanf(" %c", &dados[i].sexo);

        printf("Altura (m): ");
        scanf("%f", &dados[i].altura);
        getchar(); 
    }

    printf("\nLista de pessoas cadastradas:\n");
    for (i = 0; i < 5; i++) {
        printf("Nome: %s | Idade: %d anos\n", dados[i].nome, dados[i].idade);
    }
}