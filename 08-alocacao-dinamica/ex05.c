/*Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem,
os tempos registrados em cada volta. Fazer um programa em C que leia o número de voltas de uma corrida,
aloque dinamicamente um vetor para armazenar os tempos de cada uma das N voltas de um piloto, e
contenha funções que recebam o vetor para calcular:
● O melhor tempo;
● A volta em que o melhor tempo ocorreu;
● O tempo médio das N voltas.*/

#include <stdio.h>
#include <stdlib.h>

float melhorTempo(float *tVoltas, int num) {
    float melhor;
    for (int i = 0; i < num; i++) {
        if (i==0 || tVoltas[i] < melhor) {
            melhor = tVoltas[i];
        }
    }
    return melhor;
}

int voltaMelhorTempo(float *tVoltas, int num) {
    int volta;
    for (int i = 0; i < num; i++) {
        if (i==0 || tVoltas[i] < tVoltas[volta]) {
            volta = i;
        }
    }
    return volta + 1;
}

float tempoMedio(float *tVoltas, int num) {
    float soma = 0;
    for (int i = 0; i < num; i++) {
        soma += tVoltas[i];
    }
    return soma / num;
}

int main() {
    int num, melhorVolta;
    float *tVoltas, melhorT, media;

    printf("Quantas voltas o piloto deu na corrida? ");
    scanf("%d", &num);

    tVoltas = calloc(num, sizeof(float));

    for (int i = 0; i < num; i++) {
        printf("Digite o tempo da volta %d: ", i + 1);
        scanf("%f", &tVoltas[i]);
    }

    melhorT = melhorTempo(tVoltas, num);
    melhorVolta = voltaMelhorTempo(tVoltas, num);
    media = tempoMedio(tVoltas, num);

    printf("\nMelhor tempo: %.2f\n", melhorT);
    printf("Volta com o melhor tempo: %d\n", melhorVolta);
    printf("Tempo médio das voltas: %.2f\n", media);

    free(tVoltas);

}
