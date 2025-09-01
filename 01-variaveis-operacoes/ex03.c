/*– Faça um programa que calcule e mostre a área de um trapézio.*/

#include <stdio.h>

int main(){
    float bmaior, bmenor, altura;

    printf("Digite a base maior: ");
    scanf("%f", &bmaior);
    printf("Digite a base menor: ");
    scanf("%f", &bmenor);
    printf("Digite a base altura: ");
    scanf("%f", &altura);

    printf("A área do trapézio é: %.2f", ((bmaior+bmenor)*altura)/2);
}