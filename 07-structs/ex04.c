/*Defina uma estrutura Funcionario com os campos nome, idade, cargo e salario. Crie
um programa que leia os dados de cinco funcionários, armazene-os em um vetor de estruturas
e, em seguida, calcule e exiba a média dos salários desses funcionários.*/

#include <stdio.h>
#include <string.h>

struct funcionario{
    char nome[100];
    int idade;
    char cargo[100];
    float salario;
};

int main(){
    struct funcionario equipe[5];
    int i;
    float somaSal=0;

    for (i = 0; i<5; i++){
        printf("Digite o nome do funcionário: ");
        fgets(equipe[i].nome, 100, stdin);
        equipe[i].nome[strcspn(equipe[i].nome, "\n")] = '\0';

        printf("Digite a idade do funcionário: ");
        scanf("%d", &equipe[i].idade);
        getchar();

        printf("Digite o cargo do funcionário: ");
        fgets(equipe[i].cargo, 100, stdin);
        equipe[i].cargo[strcspn(equipe[i].cargo, "\n")] = '\0';

        printf("Digite o salário do funcionário: ");
        scanf("%f", &equipe[i].salario);
    }

    for (i=0; i<5;i++){
        somaSal+=equipe[i].salario;
    }

    printf("A media salarial dos funcionarios é de %.2f.", somaSal/5);
}