/*–Tendo como dados de entrada a, imprima todos os números ímpares de 1000 até 0. Caso a entrada
seja b, imprima todos os números pares de 1000 até 0.*/

#include <stdio.h>

int main(){
    char entrada;
    int i;

    do{
        printf("Quais números deseja imprimir?\nDigite [a] para os ímpares e [b] para os pares: ");
        scanf(" %c", &entrada);


        for (i=1000; i>=0; i--){
            if ((i % 2 == 1 && entrada == 'a') || (i % 2 == 0 && entrada == 'b')){
                printf("%d\n", i);
            }
        }
    
    } while (entrada != 'a' && entrada != 'b');
    
}
