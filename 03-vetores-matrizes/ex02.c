/*Faça um programa para corrigir provas de múltipla escolha. Cada prova tem dez questões e
cada questão vale 1 ponto. O primeiro conjunto de dados a ser lido é o gabarito da prova. Os outros
dados serão os números dos alunos e suas respectivas respostas. Existem 15 alunos matriculados.
Calcule e mostre:
● para cada aluno seu número e sua nota;
● a percentagem de aprovação, sabendo-se que a nota mínima é 7*/



#include <stdio.h>

int main(){
    int matriz[16][10], i, j, nota, aprovados=0;

    for (i=0; i<10; i++){
        printf("Digite o número correspondente à resposta da questão %d:", i+1);
        scanf("%d", &matriz[0][i]);
    }
    for (i=1; i<16; i++){
        printf("\n\nDigite as respostas do aluno %d para cada uma das questões.\n", i);
        for (j=0; j<10; j++){
            printf("Questão %d: ", j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i=1; i<16; i++){
        nota = 0;
        printf("\n\nNota do aluno %d: ", i);
        for (j=0; j<10; j++){
            if (matriz[i][j]==matriz[0][j]){
                nota+=1;
            }
        }
        printf("%d.\n", nota);
        if (nota>=7){
            aprovados+=1;
        }
    }   
    printf("\n%.2f%% dos alunos foram aprovados.\n", (aprovados/15.0)*100);
}