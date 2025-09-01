/*Escreva um programa que receba o valor de uma variável a, designado pelo
usuário. Você também deve escrever uma função que recebe essa variável por
referência e modifica seu valor dentro da função. A função não retorna nenhum valor.
Ao final do programa, você deve printar a variável com seu novo valor. Obs.: O valor
da variável não deve ser modificado na função main().*/


#include <stdio.h>

void funcao(int *var){
    *var *= 2;
}


int main(){
    int a;

    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    
    funcao(&a);

    printf("%d", a);


}