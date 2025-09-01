/*Pedro comprou um saco de ração com peso em quilos. Pedro possui dois gatos
para os quais fornece a quantidade de ração em gramas. Faça um programa que
receba o peso do saco de ração e a quantidade de ração fornecida para cada gato.
Calcule e mostre quanto restará de ração no saco após cinco dias.*/

#include <stdio.h>

int main(){
    float saco, gato, gato2;

    printf("Digite o peso do saco de ração: [Kg] ");
    scanf("%f", &saco);
    printf("Digite a quantidade de ração para o primeiro gato: ");
    scanf("%f", &gato);
    printf("Digite a quantidade de ração para o segundo gado: ");
    scanf("%f", &gato2);

    printf("Em 5 dias, sobrará Kg %.2f de ração.\n", saco-(gato+gato2)*0.005);
}