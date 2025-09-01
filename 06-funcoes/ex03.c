/*Escreva um programa contendo uma função para receber 3 valores reais X, Y e Z e
verificar se esses valores podem ser os comprimentos dos lados de um triângulo e,
neste caso, exibir no terminal qual o tipo de triângulo formado. Para que X, Y e Z
formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o
comprimento de cada lado de um triângulo é menor do que a soma do comprimento
dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado
observando as seguintes definições:

o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.*/



#include <stdio.h>

void verificarTriangulo(float x, float y, float z){

    if (x<y+z && y<x+z && z<y+x){
        if (x==y && y==z){
            printf("É um triangulo Equilatero!");
        } else if (x==y || x==z || y==z){
            printf("É um  triangulo isoceles!");
        } else {
            printf("É um triangulo escaleno!");
        }
    } else {
        printf("As medidas não formam um triangulo!");
    }
}

int main(){
    float x, y, z;

    printf("Digite um valor para x: ");
    scanf("%f", &x);
    printf("Digite um valor para y: ");
    scanf("%f", &y);
    printf("Digite um valor para z: ");
    scanf("%f", &z);

    verificarTriangulo(x, y, z);

}