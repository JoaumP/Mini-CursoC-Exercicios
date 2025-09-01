/*Faça um programa que receba a temperatura média de cada mês do ano e armazene-as em
um vetor. Calcule e mostre a maior e a menor temperatura do ano e em que mês elas ocorrem
(mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, ...). Desconsiderar empate.*/

#include <stdio.h>

int main(){
    int i, indMaior, indMenor;
    float temp[12], maior, menor;
    char meses[12][10]={"janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro","outubro", "novembro", "dezembro"};
    
    for (i=0; i<12; i++){
        printf("Digite a temperatura media do mês de %s: ", meses[i]);
        scanf("%f", &temp[i]);

        if (i==0 || temp[i] > maior){
            maior = temp[i];
            indMaior = i;
        }
        if (i==0 || temp[i]<menor){
            menor = temp[i];
            indMenor = i;
        }
    }
    printf("\nA maior temperatura foi de %.2f no mês de %s.\n", maior, meses[indMaior]);
    printf("\nA menor temperatura foi de %.2f no mês de %s.\n", menor, meses[indMenor]);
}