/*Faça um programa que tenha uma função para receber como parâmetro o raio de
uma esfera e calcular o seu volume. O valor do volume deve ser retornado pela
função.

v = 4/3*P*R³ 
*/

#include <stdio.h>

float volumeEsf(float r){
    return (4.0/3.0)*3.14*(r*r*r);
}

int main(){
    float raio, volume;

    printf("Digite o vlor do raio da esfera: ");
    scanf("%f", &raio);

    volume = volumeEsf(raio);

    printf("O volume da esfera é %.2f", volume);
}