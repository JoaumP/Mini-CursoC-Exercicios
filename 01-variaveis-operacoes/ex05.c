/*Faça um programa que receba uma hora (uma variável para hora e outra para
minutos), calcule e mostre:
a) a hora digitada convertida em minutos;
b) o total de minutos, ou seja, os minutos digitados mais a conversão anterior;
c) o total dos minutos convertidos em segundos.*/

#include <stdio.h>

int main(){
    int hora, min;
    printf("Digite um tempo\n");
    printf("Horas:");
    scanf("%d", &hora);
    printf("Minutos:");
    scanf("%d", &min);

    printf("Horas em minutos: %d min\n", hora*60);
    printf("Total em minutos: %d min\n", (hora*60)+min);
    printf("Total em segundos: %d s\n", ((hora*60)+min)*60);

}