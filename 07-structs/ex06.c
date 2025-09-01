/*Crie uma estrutura Carro com os campos marca, modelo, ano e preco. Escreva um
programa que permita ao usuário cadastrar os dados de três carros, armazená-los em um
array de estruturas e, em seguida, exibir na tela o modelo, a marca e o ano de cada carro.*/

#include <stdio.h>
#include <string.h>

struct carro{
    char marca[20];
    char modelo[20];
    int ano;
    float preco;
};

int main(){
    struct carro frota[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nCadastro do carro %d:\n", i + 1);

        printf("Marca: ");
        fgets(frota[i].marca, 20, stdin);
        frota[i].marca[strcspn(frota[i].marca, "\n")] = '\0';

        printf("Modelo: ");
        fgets(frota[i].modelo, 20, stdin);
        frota[i].modelo[strcspn(frota[i].modelo, "\n")] = '\0';

        printf("Ano: ");
        scanf("%d", &frota[i].ano);
        
        printf("Preço: ");
        scanf("%f", &frota[i].preco);
        getchar();
    }

    printf("\nLista de carros cadastrados:\n");
    for (i = 0; i < 3; i++) {
        printf("Modelo: %s | Marca: %s | Ano: %d\n", frota[i].modelo, frota[i].marca, frota[i].ano);
    }
}