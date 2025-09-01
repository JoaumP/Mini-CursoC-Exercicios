/*Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
● Horário: composto de hora, minutos e segundos.
● Data: composto de dia, mês e ano.
● Compromisso: composto de uma data, horário e texto que descreve o
compromisso.*/


#include <stdio.h>

struct horario{
    int hora;
    int minuto;
    int segundo;
};
struct data{
    int dia;
    int mes;
    int ano;
};
struct compromisso{
    struct data data;
    struct horario horario;
    char descricao[400];
};

int main(){
    struct compromisso compr;

    printf("Digite a data do compromisso (DD MM AAAA): ");
    scanf("%d %d %d", &compr.data.dia, &compr.data.mes, &compr.data.ano);

    printf("Digite o horário do compromisso (HH MM SS): ");
    scanf("%d %d %d", &compr.horario.hora, &compr.horario.minuto, &compr.horario.segundo);

    getchar();
    
    printf("Digite a descrição do compromisso: ");
    fgets(compr.descricao, 400, stdin);

    printf("\nCompromisso agendado:\n");
    printf("Data: %02d/%02d/%04d\n", compr.data.dia, compr.data.mes, compr.data.ano);
    printf("Horário: %02d:%02d:%02d\n", compr.horario.hora, compr.horario.minuto, compr.horario.segundo);
    printf("Descrição: %s\n", compr.descricao);

}