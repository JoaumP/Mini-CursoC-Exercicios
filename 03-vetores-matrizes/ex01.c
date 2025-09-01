/*Faça um programa que receba a quantidade de peças vendidas por vendedor e armazene
essas quantidades em um vetor. Receba também o preço da peça vendida de cada vendedor e
armazene esses preços em outro vetor. Existem apenas dez vendedores e cada vendedor pode
vender apenas um tipo de peça, isto é, para cada vendedor existe apenas um preço. Calcule e
mostre a quantidade total de peças vendidas por todos os vendedores e para cada vendedor
calcule e mostre o valor total da venda, isto é, a quantidade de peças * o preço da peça.*/


#include <stdio.h>

int main(){
    int vendas[10], i, total;
    float preco[10];

    for (i=0; i<10; i++){
        printf("Digite a quantidade de peças vendidas pelo vendedor %d: ", i+1);
        scanf("%d", &vendas[i]);

        printf("Digite o preço do tipo de peça vendida pelo vendedor %d: ", i+1);
        scanf("%f", &preco[i]);

        total += vendas[i];
    }

    printf("\nO total de peças vendidas foi de %d.", total);

    printf("Valor total de vendas por vendedor: \n\n");
    for (i=0; i<10; i++){
        printf("O vendedor %d: R$%.2f.\n", i+1, vendas[i]*preco[i]);
    }

}