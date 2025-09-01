/*Escreva um programa que lê um número inteiro N e aloca dinamicamente um vetor com N posições. Em
seguida seu programa deve chamar uma função que deverá ler uma seqüência de N inteiros positivos
naquele vetor, e devolver a quantidade de números com mais de 3 dígitos que são divisíveis por 5 e a soma
de todos os elementos pares.*/

#include <stdio.h>
#include <stdlib.h>

int* func(int *vetor, int num){
    int cont=0, soma=0, *r;

    r = malloc(2*sizeof(int));

    for (int i=0; i<num; i++){
        do{
            printf("Digite um numero inteiro positivo para a posição [%d]: ", i);
            scanf("%d", &vetor[i]);

            if (vetor[i]<0){
                printf("Valor invalido!\n");
            }
        } while (vetor[i]<0);

        if ((vetor[i]>99) && (vetor[i]%5==0)){
            cont++;
        }
        if (vetor[i]%2==0){
            soma += vetor[i];
        }
    }
    r[0]=cont;
    r[1]=soma;

    return r;

}


int main(){
    int n, *vet, *ret;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    vet = calloc(n, sizeof(int));

    ret = func(vet, n);

    printf("\nA quantidade de números com mais de 3 dígitos que são divisíveis por 5 é %d.\n", ret[0]);
    printf("\nA soma de todos os elementos pares é %d.\n", ret[1]);

    free(vet);
    free(ret);
}