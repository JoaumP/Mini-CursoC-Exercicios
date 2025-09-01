/*Em uma faculdade foram entrevistados 500 alunos. De cada um deles foram colhidas as
seguintes informações: o código do curso que frequenta (1-engenharia; 2-computação; 3-matemática)
e a idade. Faça um programa que processe estes dados e que forneça as seguintes informações:

a) número de alunos por curso;
b) número de alunos com idade entre 20 e 25 anos, por curso;
c) o curso com o aluno mais velho e a idade deste aluno, e
d) o curso com menor média de idade.*/


#include <stdio.h>

int main(){
    int curso, idade, totEng=0, totComp=0, totMat=0, qEng=0, qComp=0, qMat=0, cursoMaisV, idadeMaisV, i;
    float idadeEng=0, idadeComp=0, idadeMat=0;

    for (i=0; i<500; i++){
        printf("[1] - Engenharia, [2] - Computação, [3] - Matematica\nA qual curso o aluno frequenta? ");
        scanf("%d", &curso);
        printf("Qual a idade do aluno? ");
        scanf("%d", &idade);

        switch (curso){
            case 1:
                totEng += 1;
                idadeEng += idade;
                if (idade>=20 && idade<=25){
                    qEng += 1;
                }
                break;
            case 2:
                totComp += 1;
                idadeComp += idade;
                if (idade>=20 && idade<=25){
                    qComp += 1;
                }
                break;
            case 3:
                totMat += 1;
                idadeMat += idade;
                if (idade>=20 && idade<=25){
                    qMat += 1;
                }
                break;
        }
        if (i==0 || idade>idadeMaisV){
            idadeMaisV = idade;
            cursoMaisV = curso;
        }
    }

    idadeEng /= totEng;
    idadeComp /= totComp;
    idadeMat /= totMat;

    printf("Os curso de Engenharia, Computação e Matematica tem respectivamente %d, %d e %d alunos.\n\n", totEng, totComp, totMat);
    printf("Quantidade de alunos entre 20 e 25 anos: Engenharia - %d, Computação - %d, Matematica - %d.\n\n", qEng, qComp, qMat);
    printf("O aluno mais velho tem %d anos e cursa ", idadeMaisV);
    switch (cursoMaisV){
        case 1:
            printf("Engenharia.\n");
            break;
        case 2:
            printf("Computação.\n");
            break;
        case 3:
            printf("Matematica.\n");
            break;
    }
    if (idadeEng<=idadeComp && idadeEng<=idadeMat){
        printf("Engenharia é o curso com menor media de idade");
    } else if (idadeComp<=idadeEng && idadeComp<=idadeMat){
        printf("Computação é o curso com menor media de idade");
    } else if (idadeMat<=idadeEng && idadeMat<=idadeComp){
        printf("Matematica é o curso com menor media de idade");
    }

}


