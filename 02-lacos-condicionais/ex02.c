/*Um banco concederá um crédito especial aos seus clientes de acordo com o saldo médio no
último ano. Faça um programa que receba o nome e saldo médio de cada cliente e calcule o valor do
crédito, de acordo com a tabela a seguir. O valor do crédito deverá ser exibido na tela do terminal
junto ao nome do cliente. O programa encerrará somente se a entrada de saldo médio for um número
negativo.

        Saldo Médio                     Percentual
        > R$ 4.000,00               |30% do saldo médio
> R$ 3.000,00 e <= R$ 4.000,00      |25% do saldo médio
> R$ 2.000,00 e <= R$ 3.000,00      |20% do saldo médio
        <= R$ 2.000,00              |10% do saldo médio*/


#include <stdio.h>

int main(){
    long long int cpf;
    float saldo, credito;

    do{
        printf("Digite o CPF do cliente: ");
        scanf("%lld", &cpf);  
        printf("Digite o saldo médio do cliente: R$");
        scanf("%f", &saldo);

        if (saldo > 4000){
            credito = saldo*0.3;
        } else if (saldo > 3000){
            credito = saldo*0.25;
        } else if (saldo > 2000){
            credito = saldo*0.20;
        } else if (saldo >= 0){
            credito = saldo*0.10;
        } else {
            credito = 0;
        }

        printf("O cliente de CPF %011lld receberá um crédito no valor de R$%.2f.\n", cpf, credito);

    } while (saldo >= 0);

    printf("Programa finalizado\n");
}
        

