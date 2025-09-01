/*4 - Escreva um programa em C que utilize ponteiros para trocar os valores de duas variáveis
inteiras. O programa deve:
● Declarar duas variáveis inteiras a e b.
● Inicializá-las com valores diferentes (por exemplo, a = 5 e b = 10).
● Utilizar ponteiros para trocar os valores de a e b sem usar uma função.
● Após a troca, imprimir os valores de a e b.*/

#include <stdio.h>

int main(){
    int a=5, b=10;
    int *p, *q;

    printf("%d, %d\n\n", a, b);
    
    p=&a;
    q=&b;

    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;

    printf("%d, %d", a, b);

}

