/*Você deve criar um programa em C que utilize struct para armazenar informações
sobre um estudante. A struct deve conter os seguintes campos:

nome (uma string de até 50 caracteres)
idade (um inteiro)
nota (um float)

O programa deve realizar as seguintes operações:
● Solicitar ao usuário que insira os dados de um estudante (nome, idade e nota).
● Exibir as informações do estudante de forma organizada.*/

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} estudante;

int main(){
    estudante aluno;

    printf("Digite o nome: ");
    fgets(aluno.nome, 50, stdin);

    printf("Digite a idade: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota: ");
    scanf("%f", &aluno.nota);

    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.1f\n", aluno.nota);

}