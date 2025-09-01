/*Defina uma estrutura Produto com os campos codigo, descricao, quantidade e preco_unitario.
Escreva um programa que permita ao usuário cadastrar os dados de até 5 produtos, armazená-los
em um vetor de estruturas e, em seguida, exibir na tela o código, a descrição e o preço total 
de cada produto (calculado multiplicando a quantidade pelo preço unitário).*/

#include <stdio.h>
#include <string.h>

struct produto{
    int codigo;
    char descricao[200];
    int quantidade;
    float preco_unitario;
};


int main(){
    struct produto lote[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nCadastro do produto %d:\n", i + 1);

        printf("Código: ");
        scanf("%d", &lote[i].codigo);
        getchar();

        printf("Descrição: ");
        fgets(lote[i].descricao, 200, stdin);
        lote[i].descricao[strcspn(lote[i].descricao, "\n")] = '\0';

        printf("Quantidade: ");
        scanf("%d", &lote[i].quantidade);

        printf("Preço unitário: ");
        scanf("%f", &lote[i].preco_unitario);
        getchar();
    }

    printf("\nLista de produtos cadastrados:\n");
    for (i = 0; i < 5; i++) {
        float preco_total = lote[i].quantidade * lote[i].preco_unitario;
        printf("Código: %d | Descrição: %s | Preço Total: R$ %.2f\n", lote[i].codigo, lote[i].descricao, preco_total);
    }
}