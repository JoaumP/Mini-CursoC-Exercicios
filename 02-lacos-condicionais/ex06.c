/*Faça um programa que verifique a aprovação de cada aluno de uma turma. O programa vai
receber o nome, as três notas do aluno, calcular e mostrar a média aritmética e a mensagem que segue
a tabela abaixo (junto ao nome do estudante). Para alunos de exame, calcule e mostre a nota que
deverá ser tirada no exame para aprovação, considerando que a média no exame é 6,0. O programa
deve perguntar a cada iteração se o usuário deseja prosseguir adicionando novos estudantes. Caso
não, o programa é encerrado.

Média Aritmética        Mensagem
< 3,00                  Reprovado
>= 3,00 e < 7,00        Exame
>= 7,00                 Aprovado*/


#include <stdio.h>

int main(){
    long long int matricula;
    float nota1, nota2, nota3, media;
    char resp;

    do{
        printf("Digite o numero de matricula do aluno: ");
        scanf("%lld", &matricula);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        if (media >= 7){
            printf("Aluno %lld foi aprovado com media %.1f.\n", matricula, media);
        } else if (media >= 3){
            printf("Aluno %lld ficou com media de %.1f.\n", matricula, media);
            printf("Para ser aprovado ele fará um exame onde precisa conseguir uma nota de no minimo %1.f.\n", 12.0-media);
        } else{
            printf("Aluno %lld conseguiu uma media de %.1f, e foi reprovado.\n", matricula, media);
        }

        do{
            printf("Deseja calcular os resultados de outros estudantes? [s/n] ");
            scanf("%c", &resp);
        } while (resp != 's' && resp != 'n' && resp != 'S' && resp != 'N');

    } while (resp == 's' || resp == 'S');
}