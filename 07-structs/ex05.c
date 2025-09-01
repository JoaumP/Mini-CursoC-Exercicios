/*Desenvolva uma estrutura chamada Livro que tenha os campos titulo, autor,
ano_publicacao e preco. Escreva um programa que permita ao usuário cadastrar os
dados de até 10 livros, armazená-los em um array de estruturas e, em seguida,
exibir na tela o título e o autor de cada livro.*/


#include <stdio.h>
#include <string.h>

struct livro{
    char titulo[100];
    char autor[100];
    int ano_publi;
    float preco;
};

int main(){
    struct livro colecao[10];
    int i, cont=0;
    char resp;

    do{
        printf("\nCadastro do livro %d:\n", cont + 1);

        printf("Título: ");
        fgets(colecao[cont].titulo, 100, stdin);
        colecao[cont].titulo[strcspn(colecao[cont].titulo, "\n")] = '\0';

        printf("Autor: ");
        fgets(colecao[cont].autor, 100, stdin);
        colecao[cont].autor[strcspn(colecao[cont].autor, "\n")] = '\0';

        printf("Ano de publicação: ");
        scanf("%d", &colecao[cont].ano_publi);
        getchar();

        printf("Preço: ");
        scanf("%f", &colecao[cont].preco);
        getchar();
        
        cont++;
        if (cont<10){
            printf("Deseja cadastrar mais um livro? [S/N]");
            scanf("%c", &resp);
        }
    } while ((resp=='S'||resp=='s')&&cont<10);

    printf("\nLista de Livros Cadastrados:\n");
    for (i = 0; i < cont; i++) {
        printf("Título: %s | Autor: %s\n", colecao[i].titulo, colecao[i].autor);
    }



}   
