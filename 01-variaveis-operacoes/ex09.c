/*Cada degrau de uma escada tem X de altura. Faça um programa que receba essa
altura e a altura que o usuário deseja alcançar subindo a escada. Calcule e mostre
quantos degraus o usuário deverá subir para atingir o seu objetivo, sem se preocupar
com a altura do usuário.*/

#include <stdio.h>

int main(){
    int tamDegrau, meta, QtdDegraus;

    printf("Qual a altura de um degrau da escada? [cm] ");
    scanf("%d", &tamDegrau);
    printf("Qual altura você deseja alcançar? [cm] ");
    scanf("%d", &meta);
     

    QtdDegraus = meta / tamDegrau + ( 1 ? meta % tamDegrau != 0 : 0);

    printf("Para atingir a altura desejada, deve subir %d degraus.\n", QtdDegraus);
}
